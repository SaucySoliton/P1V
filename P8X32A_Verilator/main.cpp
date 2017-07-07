#include "Vdig.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>

#include <bitset>
//https://katyscode.wordpress.com/2012/05/12/printing-numbers-in-binary-format-in-c/

extern "C" {
#include "eeprom.h"
}

vluint64_t main_time = 0;       // Current simulation time
vluint64_t step_count = 0;      

double sc_time_stamp () {       // Called by $time in Verilog
    return main_time;
}

//#define TRACE_ON (1)
#define AUDIO_OUT (1)
int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vdig* dig = new Vdig;
#ifdef TRACE_ON
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dig->trace (tfp, 99);
    tfp->open ("/tmp/trace.vcd");
#endif

#ifdef AUDIO_OUT
    ofstream myFile ("audio.raw", ios::out | ios::binary);
#endif
    //EEPromInit("retronitus.eeprom");
    EEPromInit(0);// read eeprom.dat
    // Set initial values of inputs
    dig->clk_cog = 0;
    dig->clk_pll = 0;
    dig->nres = 0;
    dig->pin_in=0;
    long last_nres=-1,last_io=-1, last_ledg=-1;
    long eeout,new_io=0;
    int last_clk_cog, inp_resn=0;
    long io_pullup=(3<<28);
    long a_left,a_right;
    while (!Verilated::gotFinish())
    {
        if (step_count >= 16)
        {
            inp_resn = 1;        // initial reset
        }

        last_clk_cog=dig->clk_cog;
        dig->clk_cog = (step_count&2)>>1;
        dig->clk_pll = step_count&1; 
	// Clock to PLL simulator is twice main clock
	// TODO adjust time step from cfg
	
//      always @ (posedge clk_cog)
//         nres <= inp_resn & !cfg[7];
        if( (last_clk_cog==0) && (dig->clk_cog==1) )
           dig->nres = inp_resn & (1-(((dig->cfg)>>7)&1));
        
        // Run one iteration of our module
        dig->eval();


        // Handle Bidirectional I0 and EEPROM	
	new_io=((dig->pin_dir)&(dig->pin_out)) | ((~dig->pin_dir)&io_pullup);
        eeout=CheckEEProm(new_io);
	dig->pin_in=eeout;

        // Reduce the data save rate to save space and processing time.
#ifdef TRACE_ON
        if (((step_count&1) == 0))//&&(main_time>500000000)) 
	{
             tfp->dump (main_time);
	}
#endif
        if ((main_time % 1000000) == 0) last_io= -1; // periodioc printouts

#if 0
	// pin change detection
        if( (last_nres!=dig->nres)                ||
            (last_io!=dig->pin_in)                ||
	    (last_ledg!=dig->cog_led)                   )
	{
               last_nres=dig->nres;
	       last_io=dig->pin_in;
	       last_ledg=dig->cog_led;
               std::cout << "resn:" << dig->nres+0;
               std::cout << " ledg:" << std::bitset<8>(dig->cog_led) ;
               std::cout << " IO:" << std::bitset<32>(dig->pin_in) ;
	       if (eeout!=new_io )    std::cout << " EE:" << std::bitset<32>(eeout) ;
               //std::cout << " PC0:" << top->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p+0;
               std::cout << " time:" << main_time ;
               std::cout << std::endl;
	       // look in obj_dir/Vtop_veri.h for signal names
	}
#endif
	// Audio Capture, look for IO writes
        if( (dig->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) )
	{
            if( (last_clk_cog==0) && (dig->clk_cog==1) ) 
	    {
		  long d_reg=((dig->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)>>9)&0x1ff;
		  long alu_r=dig->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__alu_r;
                  if(d_reg==0x1fa) // frqa
		  {
			  a_left=alu_r;
                          //std::cout << a_left << std::endl;
		  }
                  if(d_reg==0x1fb) // frqb
		  {
			  a_right=alu_r;
			  //a_right=(alu_r-(1<<32)/(1<<16);
			  short sample = (a_right-(1<<31))/(1<<16);
                          std::cout << "l:" << a_left ;
                          std::cout << " r:" << a_right;
                          std::cout << " o:" << sample;
                          std::cout << " time:" << main_time << std::endl ;
#ifdef AUDIO_OUT
			  myFile.write ((char*)&sample,sizeof(sample) );
#endif
		  }
	    }
            //std::cout << "l:" << a_left << " r:" << a_right << std::endl;
	    
	}
        main_time++;            // Time passes...
        step_count++;
        if ( main_time > 320e6 )
        {
                std::cout << "Done!" << std::endl;
                break;
        }
    }
#ifdef TRACE_ON
    tfp->close();
#endif
#ifdef AUDIO_OUT
    myFile.close();
#endif
    delete dig;
    exit(0);
}
