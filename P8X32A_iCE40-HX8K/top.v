/*
-------------------------------------------------------------------------------

This file is part of the hardware description for the Propeller 1 Design
for Pipistrello LX45.

The Propeller 1 Design is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by the
Free Software Foundation, either version 3 of the License, or (at your option)
any later version.

The Propeller 1 Design is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
more details.

You should have received a copy of the GNU General Public License along with
the Propeller 1 Design.  If not, see <http://www.gnu.org/licenses/>.
-------------------------------------------------------------------------------
*/
//
// Copyright 2014 Saanlima Electronics
//
// Magnus Karlsson 20140820 Moved reg and wire declarations to top of file
//							Added PLL or DCM selection option
//							Added dtr or inp_resn selection option
//
// Magnus Karlsson 20140818	Wrote top level verilog module from scratch based 
//                          on top.tdf and tim.tdf in the Parallax release.


`include "../HDL/features.v"
//`include "features.v"           // Local config
`include "../HDL/dig.v"
//`define use_pll 1		// comment out for DCM mode
`define use_dtr 1		// comment out for inp_resn instead of dtr


module			top
(
input			clock_12,		// clock input
`ifdef use_dtr
input			dtr,			// serial port DTR input
`else
input			inp_resn,		// reset input (active low)
`endif
output                  LED0,
output                  LED1,
output                  LED2,
output                  LED3,
output                  LED4,
output                  LED5,
output                  LED6,
output                  LED7,
input                   ser_rx,
output                  ser_tx,
inout             [17:0] io /*
inout                   pin_b16,  // P0
inout                   pin_c16,  // P1
inout                   pin_d16,  // P2
inout                   pin_d14,  // P3
inout                   pin_e16,  // P4
inout                   pin_d15,  // P5

inout                   pin_f16,  // P6
inout                   pin_e14,  // P7
inout                   pin_g16,  // P8
inout                   pin_f15,  // P9
inout                   pin_h16,  // P10
inout                   pin_g15,  // P11

inout                   pin_j15,  // P12
inout                   pin_h14,  // P13
inout                   pin_g14,  // P14
inout                   pin_f14,  // P15
inout                   pin_k14,  // P16
inout                   pin_j14  // P17
*/
);

//
// reg and wire declarations
//
reg			nres;
wire [7:0]	cfg;
wire [31:0]	pin_in, pin_out, pin_dir;
wire		clkfb, clock_160, clk;
reg [23:0]	reset_cnt;
reg			reset_to;
wire		res;
reg [7:0]	cfgx;
reg [12:0]	divide;
wire		clk_pll;
wire		clk_cog;

wire  		sda;
wire 		scl;

reg [7:0]	ledg;

//
// Clock generation
//


assign clk = clock_12; //FIXME for now

//assign clk_pll = ((cfgx[6:5] == 2'b11) && (cfgx[2:0] == 3'b111)) ? clock_160 : divide[11];
assign clk_pll = clock_12;//divide[12]; // FIXME
assign clk_cog = clock_12;//divide[12];

`ifdef use_dtr
//
// Emulate RC filter on Prop Plug by generating a long reset pulse
// everytime DTR goes high
//
// On a Quickstart board this pulse is between 200 and 300uS.
// 
always @ (posedge clk or negedge dtr)
	if (!dtr) begin
		reset_cnt <= 24'd0;
		reset_to <= 1'b0;
	end else begin
		reset_cnt <= reset_to ? reset_cnt : reset_cnt + 1;
		reset_to <= (reset_cnt == 24'd2400) ? 1'b1 : reset_to;
		//reset_to <= (reset_cnt == 24'hfffff) ? 1'b1 : reset_to;
	end

wire inp_resn = ~(dtr & ~reset_to);
`endif

//	
// Clock control (from tim.tdf)
//
assign res = ~inp_resn;

always @ (posedge clk)
	cfgx <= cfg;

always @ (posedge clk)
	divide <= divide + 
		{	(cfgx[6:5] == 2'b11 && cfgx[2:0] == 3'b111) || res,
			cfgx[6:5] == 2'b11 && cfgx[2:0] == 3'b110 && !res,
			cfgx[6:5] == 2'b11 && cfgx[2:0] == 3'b101 && !res,
			((cfgx[6:5] == 2'b11 && cfgx[2:0] == 3'b100) || cfgx[2:0] == 3'b000) && !res,
			((cfgx[6:5] == 2'b11 && cfgx[2:0] == 3'b011) || (cfgx[5] == 1'b1 && cfgx[2:0] == 3'b010)) && !res,
			7'b0,
			cfgx[2:0] == 3'b001 && !res
		};

//
// Propeller 1 core module
//

always @ (posedge clk_cog)
	nres <= inp_resn & !cfgx[7];

dig core ( 	.nres		(nres),
			.cfg		(cfg),
			.clk_cog	(clk_cog),
			.clk_pll	(clk_pll),
			.pin_in		(pin_in),
			.pin_out	(pin_out),
			.pin_dir	(pin_dir),
			.cog_led	(ledg) );

//
// Bidir I/O buffers
//
//genvar i;
//generate
//	for (i=0; i<32; i=i+1)
//	begin : iogen
//		IOBUF io_ (.IO(pin[i]), .O(pin_in[i]), .I(pin_out[i]), .T(~pin_dir[i]));
//	end
//endgenerate

//
// Monitor LEDs
//
//assign tx_led = pin_in[30];
//assign rx_led = pin_in[31];
//assign p16_led = pin_in[16];
//assign p17_led = pin_in[17];
//assign ser_tx = ser_rx;//pin_out[30];

assign scl    =  pin_dir[28] ? pin_out[28] : 1'b1;  // emulated pull up
assign sda    =  pin_dir[29] ? pin_out[29] : 1'b1;  // emulated pull up
assign ser_tx =  pin_dir[30] ? pin_out[30] : 1'b0;  // emulated pull down
//assign ser_tx =  !ser_rx;


//assign  pin_in[28] = scl; // loopback
//assign  pin_in[29] = sda; // loopback

assign pin_in[30]=ser_tx; // loopback
//assign pin_in[31]=1'b0;// force low to EEPROM boot ser_rx;
assign pin_in[31]=ser_rx;

//assign pin_b16=nres;
//assign pin_c16=pin_dir[29];

//assign pin_in[29]=(pin_d16) ? 1'b1 : 1'b0;
//
//`define generic 1
`ifdef generic
assign pin_b16=pin_dir[0] ? pin_out[0] : 1'bZ ;
assign pin_in[0]=pin_b16;

assign pin_c16=pin_dir[1] ? pin_out[1] : 1'bZ ;
assign pin_in[1]=pin_c16;

assign pin_d16=pin_dir[2] ? pin_out[2] : 1'bZ ;
assign pin_in[2]=pin_d16;

assign pin_d14=pin_dir[3] ? pin_out[3] : 1'bZ ;
assign pin_in[3]=pin_d14;

assign pin_e16=pin_dir[4] ? pin_out[4] : 1'bZ ;
assign pin_in[4]=pin_e16;

assign pin_d15=pin_dir[5] ? pin_out[5] : 1'bZ ;
assign pin_in[5]=pin_d15;


assign pin_f16=pin_dir[6] ? pin_out[6] : 1'bZ ;
assign pin_in[6]=pin_f16;

//assign pin_e14=pin_dir[7] ? pin_out[7] : 1'bZ ;
//assign pin_in[7]=pin_e14;

//assign pin_g16=pin_dir[8] ? pin_out[8] : 1'bZ ;
//assign pin_in[8]=pin_g16;

//assign pin_f15=pin_dir[9] ? pin_out[9] : 1'bZ ;
//assign pin_in[9]=pin_f15;

//assign pin_h16=pin_dir[10] ? pin_out[10] : 1'bZ ;
//assign pin_in[10]=pin_h16;

//assign pin_g15=pin_dir[11] ? pin_out[11] : 1'bZ ;
//assign pin_in[11]=pin_g15;


//assign pin_j15=pin_dir[12] ? pin_out[12] : 1'bZ ;
//assign pin_in[12]=pin_j15;

//assign pin_h14=pin_dir[13] ? pin_out[13] : 1'bZ ;
//assign pin_in[13]=pin_g14;

//assign pin_g14=pin_dir[14] ? pin_out[14] : 1'bZ ;
//assign pin_in[14]=pin_g14;

//assign pin_f14=pin_dir[15] ? pin_out[15] : 1'bZ ;
//assign pin_in[15]=pin_f14;

//assign pin_k14=pin_dir[16] ? pin_out[16] : 1'bZ ;
//assign pin_in[16]=pin_k14;

//assign pin_j14=pin_dir[17] ? pin_out[17] : 1'bZ ;
//assign pin_in[17]=pin_j14;



//assign pin_d16=pin_dir[29] ? pin_out[29] : 1'bZ ;//sda;
//assign pin_d14=pin_dir[28] ? pin_out[28] : 1'bZ ;//scl;

`else
SB_IO #(
    .PIN_TYPE(6'b 1010_01),
    .PULLUP(1'b 0)
) prop_io [17:0] (
    .PACKAGE_PIN(io),
    .OUTPUT_ENABLE(pin_dir[17:0]),
    .D_OUT_0(pin_out[17:0]),
    .D_IN_0(pin_in[17:0])
);

/*
SB_IO #(
    .PIN_TYPE(6'b 1010_01),
    .PULLUP(1'b 0)
)  sda_io ( //[8:0] (
    .PACKAGE_PIN(p[1]), 
    .OUTPUT_ENABLE(pin_dir[10]),
    .D_OUT_0(pin_out[10]),
    .D_IN_0(pin_in[10])
);*/
`endif

assign LED0 = !sda;
assign LED1 = !scl;
assign LED2 = pin_dir[28];
assign LED3 = pin_dir[30];
assign LED4 = !dtr;
assign LED5 = !nres;
assign LED6 = !ser_rx;
assign LED7 = ser_tx;
endmodule
