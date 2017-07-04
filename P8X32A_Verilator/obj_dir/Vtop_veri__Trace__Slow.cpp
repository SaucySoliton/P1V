// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_veri__Syms.h"


//======================

void Vtop_veri::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vtop_veri::traceInit, &Vtop_veri::traceFull, &Vtop_veri::traceChg, this);
}
void Vtop_veri::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtop_veri* t=(Vtop_veri*)userthis;
    Vtop_veri__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtop_veri::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop_veri* t=(Vtop_veri*)userthis;
    Vtop_veri__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vtop_veri::traceInitThis(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtop_veri::traceFullThis(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity[0U] = 0U;
    vlTOPp->__Vm_traceActivity[1U] = 0U;
    vlTOPp->__Vm_traceActivity[2U] = 0U;
    vlTOPp->__Vm_traceActivity[3U] = 0U;
}

void Vtop_veri::traceInitThis__1(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+5398,"clock",-1);
	vcdp->declBit  (c+5399,"inp_resn",-1);
	vcdp->declBus  (c+5400,"io",-1,31,0);
	vcdp->declBit  (c+5401,"sda_in",-1);
	vcdp->declBus  (c+5402,"ledg",-1,7,0);
	vcdp->declBit  (c+5398,"top_veri clock",-1);
	vcdp->declBit  (c+5399,"top_veri inp_resn",-1);
	vcdp->declBus  (c+5400,"top_veri io",-1,31,0);
	vcdp->declBit  (c+5401,"top_veri sda_in",-1);
	vcdp->declBus  (c+5402,"top_veri ledg",-1,7,0);
	vcdp->declBus  (c+5404,"top_veri HUB_RAM_KL",-1,31,0);
	vcdp->declBus  (c+5404,"top_veri HUB_ROM_KL",-1,31,0);
	vcdp->declArray(c+5405,"top_veri HUB_ROM_INIT",-1,271,0);
	vcdp->declBit  (c+1020,"top_veri nres",-1);
	vcdp->declBus  (c+1001,"top_veri cfg",-1,7,0);
	vcdp->declBus  (c+1,"top_veri pin_out",-1,31,0);
	vcdp->declBus  (c+332,"top_veri pin_dir",-1,31,0);
	vcdp->declBus  (c+5414,"top_veri reset_cnt",-1,23,0);
	vcdp->declBit  (c+5415,"top_veri reset_to",-1);
	vcdp->declBit  (c+2,"top_veri clk_pll",-1);
	vcdp->declBit  (c+76,"top_veri clk_cog",-1);
	vcdp->declBus  (c+3,"top_veri pin_in",-1,31,0);
	// Tracing: top_veri i // Ignored: Verilator trace_off at ../HDL/../HDL/top_veri.v:87
	vcdp->declBit  (c+5398,"top_veri clkgen clk",-1);
	vcdp->declBit  (c+5403,"top_veri clkgen res",-1);
	vcdp->declBus  (c+1002,"top_veri clkgen cfg",-1,6,0);
	vcdp->declBit  (c+2,"top_veri clkgen clk_pll",-1);
	vcdp->declBit  (c+76,"top_veri clkgen clk_cog",-1);
	vcdp->declBus  (c+748,"top_veri clkgen cfgx",-1,6,0);
	vcdp->declBus  (c+749,"top_veri clkgen divide",-1,12,0);
	vcdp->declBus  (c+77,"top_veri clkgen clksel",-1,4,0);
	vcdp->declBit  (c+1020,"top_veri core nres",-1);
	vcdp->declBus  (c+1001,"top_veri core cfg",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core clk_pll",-1);
	vcdp->declBus  (c+3,"top_veri core pin_in",-1,31,0);
	vcdp->declBus  (c+1,"top_veri core pin_out",-1,31,0);
	vcdp->declBus  (c+332,"top_veri core pin_dir",-1,31,0);
	vcdp->declBus  (c+5402,"top_veri core cog_led",-1,7,0);
	vcdp->declBus  (c+5416,"top_veri core INVERT_COG_LEDS",-1,31,0);
	vcdp->declBus  (c+5404,"top_veri core NUMCOGS",-1,31,0);
	vcdp->declBus  (c+1021,"top_veri core cnt",-1,31,0);
	vcdp->declBit  (c+1085,"top_veri core ena_bus",-1);
	vcdp->declBus  (c+1003,"top_veri core bus_sel",-1,7,0);
	vcdp->declBus  (c+333,"top_veri core bus_r",-1,7,0);
	vcdp->declBus  (c+558,"top_veri core bus_e",-1,7,0);
	vcdp->declBus  (c+559,"top_veri core bus_w",-1,7,0);
	vcdp->declBus  (c+560,"top_veri core bus_s",-1,15,0);
	vcdp->declArray(c+528,"top_veri core bus_a",-1,127,0);
	vcdp->declArray(c+533,"top_veri core bus_d",-1,255,0);
	vcdp->declBus  (c+771,"top_veri core bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core bus_c",-1);
	vcdp->declBus  (c+223,"top_veri core bus_ack",-1,7,0);
	vcdp->declBus  (c+346,"top_veri core pll",-1,7,0);
	vcdp->declArray(c+4,"top_veri core outx",-1,255,0);
	vcdp->declArray(c+127,"top_veri core dirx",-1,255,0);
	vcdp->declBus  (c+375,"top_veri core ptr_w",-1,7,0);
	vcdp->declBus  (c+1023,"top_veri core ptr_d",-1,27,0);
	vcdp->declBus  (c+750,"top_veri core cog_ena",-1,7,0);
	// Tracing: top_veri core i // Ignored: Verilator trace_off at ../HDL/dig.v:95
	vcdp->declBit  (c+334,"top_veri core hub_bus_r",-1);
	vcdp->declBit  (c+561,"top_veri core hub_bus_e",-1);
	vcdp->declBit  (c+562,"top_veri core hub_bus_w",-1);
	vcdp->declBus  (c+563,"top_veri core hub_bus_s",-1,1,0);
	vcdp->declBus  (c+532,"top_veri core hub_bus_a",-1,15,0);
	vcdp->declBus  (c+541,"top_veri core hub_bus_d",-1,31,0);
	vcdp->declBit  (c+76,"top_veri core hub_ clk_cog",-1);
	vcdp->declBit  (c+1085,"top_veri core hub_ ena_bus",-1);
	vcdp->declBit  (c+1020,"top_veri core hub_ nres",-1);
	vcdp->declBus  (c+1003,"top_veri core hub_ bus_sel",-1,7,0);
	vcdp->declBit  (c+334,"top_veri core hub_ bus_r",-1);
	vcdp->declBit  (c+561,"top_veri core hub_ bus_e",-1);
	vcdp->declBit  (c+562,"top_veri core hub_ bus_w",-1);
	vcdp->declBus  (c+563,"top_veri core hub_ bus_s",-1,1,0);
	vcdp->declBus  (c+532,"top_veri core hub_ bus_a",-1,15,0);
	vcdp->declBus  (c+541,"top_veri core hub_ bus_d",-1,31,0);
	vcdp->declBus  (c+771,"top_veri core hub_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core hub_ bus_c",-1);
	vcdp->declBus  (c+223,"top_veri core hub_ bus_ack",-1,7,0);
	vcdp->declBus  (c+750,"top_veri core hub_ cog_ena",-1,7,0);
	vcdp->declBus  (c+375,"top_veri core hub_ ptr_w",-1,7,0);
	vcdp->declBus  (c+1023,"top_veri core hub_ ptr_d",-1,27,0);
	vcdp->declBus  (c+1001,"top_veri core hub_ cfg",-1,7,0);
	vcdp->declBit  (c+772,"top_veri core hub_ rc",-1);
	vcdp->declBit  (c+751,"top_veri core hub_ ec",-1);
	vcdp->declBit  (c+773,"top_veri core hub_ wc",-1);
	vcdp->declBus  (c+774,"top_veri core hub_ sc",-1,1,0);
	vcdp->declBus  (c+1024,"top_veri core hub_ ac",-1,15,0);
	vcdp->declBus  (c+1025,"top_veri core hub_ dc",-1,31,0);
	vcdp->declBit  (c+224,"top_veri core hub_ mem_w",-1);
	vcdp->declBus  (c+273,"top_veri core hub_ mem_wb",-1,3,0);
	vcdp->declBus  (c+274,"top_veri core hub_ mem_d",-1,31,0);
	vcdp->declBus  (c+78,"top_veri core hub_ mem_q",-1,31,0);
	vcdp->declBit  (c+775,"top_veri core hub_ rd",-1);
	vcdp->declBit  (c+752,"top_veri core hub_ ed",-1);
	vcdp->declBus  (c+776,"top_veri core hub_ sd",-1,1,0);
	vcdp->declBus  (c+777,"top_veri core hub_ ad",-1,1,0);
	vcdp->declBus  (c+778,"top_veri core hub_ sys_q",-1,2,0);
	vcdp->declBit  (c+1022,"top_veri core hub_ sys_c",-1);
	vcdp->declBus  (c+275,"top_veri core hub_ ramq",-1,31,0);
	vcdp->declBus  (c+753,"top_veri core hub_ cog_e",-1,7,0);
	vcdp->declBus  (c+754,"top_veri core hub_ lock_e",-1,7,0);
	vcdp->declBit  (c+335,"top_veri core hub_ sys",-1);
	vcdp->declBus  (c+336,"top_veri core hub_ enc",-1,7,0);
	vcdp->declBit  (c+337,"top_veri core hub_ all",-1);
	vcdp->declBus  (c+338,"top_veri core hub_ newx",-1,2,0);
	vcdp->declBus  (c+339,"top_veri core hub_ num",-1,2,0);
	vcdp->declBus  (c+340,"top_veri core hub_ num_dcd",-1,7,0);
	vcdp->declBit  (c+341,"top_veri core hub_ cog_start",-1);
	vcdp->declBus  (c+1026,"top_veri core hub_ lock_state",-1,7,0);
	vcdp->declBit  (c+1027,"top_veri core hub_ lock_mux",-1);
	vcdp->declBit  (c+76,"top_veri core hub_ hub_mem_ clk_cog",-1);
	vcdp->declBit  (c+1085,"top_veri core hub_ hub_mem_ ena_bus",-1);
	vcdp->declBit  (c+224,"top_veri core hub_ hub_mem_ w",-1);
	vcdp->declBus  (c+273,"top_veri core hub_ hub_mem_ wb",-1,3,0);
	vcdp->declBus  (c+1028,"top_veri core hub_ hub_mem_ a",-1,13,0);
	vcdp->declBus  (c+274,"top_veri core hub_ hub_mem_ d",-1,31,0);
	vcdp->declBus  (c+78,"top_veri core hub_ hub_mem_ q",-1,31,0);
	// Tracing: top_veri core hub_ hub_mem_ ram3 // Ignored: Wide memory > --trace-max-array ents at ../HDL/hub_mem.v:42
	// Tracing: top_veri core hub_ hub_mem_ ram2 // Ignored: Wide memory > --trace-max-array ents at ../HDL/hub_mem.v:43
	// Tracing: top_veri core hub_ hub_mem_ ram1 // Ignored: Wide memory > --trace-max-array ents at ../HDL/hub_mem.v:44
	// Tracing: top_veri core hub_ hub_mem_ ram0 // Ignored: Wide memory > --trace-max-array ents at ../HDL/hub_mem.v:45
	vcdp->declBus  (c+779,"top_veri core hub_ hub_mem_ ram_q3",-1,7,0);
	vcdp->declBus  (c+780,"top_veri core hub_ hub_mem_ ram_q2",-1,7,0);
	vcdp->declBus  (c+781,"top_veri core hub_ hub_mem_ ram_q1",-1,7,0);
	vcdp->declBus  (c+782,"top_veri core hub_ hub_mem_ ram_q0",-1,7,0);
	// Tracing: top_veri core hub_ hub_mem_ rom // Ignored: Wide memory > --trace-max-array ents at ../HDL/hub_mem.v:87
	vcdp->declBus  (c+783,"top_veri core hub_ hub_mem_ rom_q",-1,31,0);
	vcdp->declBus  (c+784,"top_veri core hub_ hub_mem_ mem",-1,1,0);
	vcdp->declBit  (c+1020,"top_veri core coggen[0] cog_ nres",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[0] cog_ clk_pll",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[0] cog_ clk_cog",-1);
	vcdp->declBit  (c+1085,"top_veri core coggen[0] cog_ ena_bus",-1);
	vcdp->declBit  (c+376,"top_veri core coggen[0] cog_ ptr_w",-1);
	vcdp->declBus  (c+1023,"top_veri core coggen[0] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+542,"top_veri core coggen[0] cog_ ena",-1);
	vcdp->declBit  (c+1004,"top_veri core coggen[0] cog_ bus_sel",-1);
	vcdp->declBit  (c+863,"top_veri core coggen[0] cog_ bus_r",-1);
	vcdp->declBit  (c+249,"top_veri core coggen[0] cog_ bus_e",-1);
	vcdp->declBit  (c+250,"top_veri core coggen[0] cog_ bus_w",-1);
	vcdp->declBus  (c+251,"top_veri core coggen[0] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+763,"top_veri core coggen[0] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+1012,"top_veri core coggen[0] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+771,"top_veri core coggen[0] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[0] cog_ bus_c",-1);
	vcdp->declBit  (c+225,"top_veri core coggen[0] cog_ bus_ack",-1);
	vcdp->declBus  (c+1021,"top_veri core coggen[0] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[0] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+342,"top_veri core coggen[0] cog_ pll_out",-1);
	vcdp->declBus  (c+3,"top_veri core coggen[0] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+52,"top_veri core coggen[0] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+857,"top_veri core coggen[0] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+5417,"top_veri core coggen[0] cog_ oh",-1,31,0);
	vcdp->declBus  (c+5418,"top_veri core coggen[0] cog_ ol",-1,31,0);
	vcdp->declBus  (c+5419,"top_veri core coggen[0] cog_ wz",-1,31,0);
	vcdp->declBus  (c+5420,"top_veri core coggen[0] cog_ wc",-1,31,0);
	vcdp->declBus  (c+5421,"top_veri core coggen[0] cog_ wr",-1,31,0);
	vcdp->declBus  (c+5422,"top_veri core coggen[0] cog_ im",-1,31,0);
	vcdp->declBus  (c+5423,"top_veri core coggen[0] cog_ ch",-1,31,0);
	vcdp->declBus  (c+5424,"top_veri core coggen[0] cog_ cl",-1,31,0);
	vcdp->declBus  (c+5425,"top_veri core coggen[0] cog_ dh",-1,31,0);
	vcdp->declBus  (c+5426,"top_veri core coggen[0] cog_ dl",-1,31,0);
	vcdp->declBus  (c+5404,"top_veri core coggen[0] cog_ sh",-1,31,0);
	vcdp->declBus  (c+5416,"top_veri core coggen[0] cog_ sl",-1,31,0);
	vcdp->declBus  (c+755,"top_veri core coggen[0] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+5374,"top_veri core coggen[0] cog_ m",-1,4,0);
	vcdp->declBit  (c+234,"top_veri core coggen[0] cog_ waiti",-1);
	vcdp->declBit  (c+858,"top_veri core coggen[0] cog_ run",-1);
	vcdp->declBus  (c+12,"top_veri core coggen[0] cog_ px",-1,8,0);
	vcdp->declBus  (c+859,"top_veri core coggen[0] cog_ p",-1,8,0);
	vcdp->declBit  (c+860,"top_veri core coggen[0] cog_ c",-1);
	vcdp->declBit  (c+861,"top_veri core coggen[0] cog_ z",-1);
	vcdp->declBus  (c+416,"top_veri core coggen[0] cog_ i",-1,31,0);
	vcdp->declBit  (c+564,"top_veri core coggen[0] cog_ cond",-1);
	vcdp->declBit  (c+565,"top_veri core coggen[0] cog_ jump_cancel",-1);
	vcdp->declBit  (c+276,"top_veri core coggen[0] cog_ alu_co",-1);
	vcdp->declBit  (c+145,"top_veri core coggen[0] cog_ alu_zo",-1);
	vcdp->declBit  (c+566,"top_veri core coggen[0] cog_ wio",-1);
	vcdp->declBit  (c+419,"top_veri core coggen[0] cog_ setouta",-1);
	vcdp->declBit  (c+420,"top_veri core coggen[0] cog_ setdira",-1);
	vcdp->declBit  (c+421,"top_veri core coggen[0] cog_ setctra",-1);
	vcdp->declBit  (c+422,"top_veri core coggen[0] cog_ setctrb",-1);
	vcdp->declBit  (c+423,"top_veri core coggen[0] cog_ setfrqa",-1);
	vcdp->declBit  (c+424,"top_veri core coggen[0] cog_ setfrqb",-1);
	vcdp->declBit  (c+676,"top_veri core coggen[0] cog_ setphsa",-1);
	vcdp->declBit  (c+677,"top_veri core coggen[0] cog_ setphsb",-1);
	vcdp->declBit  (c+425,"top_veri core coggen[0] cog_ setvid",-1);
	vcdp->declBit  (c+426,"top_veri core coggen[0] cog_ setscl",-1);
	vcdp->declBit  (c+428,"top_veri core coggen[0] cog_ alu_wr",-1);
	vcdp->declBit  (c+567,"top_veri core coggen[0] cog_ ram_ena",-1);
	vcdp->declBit  (c+429,"top_veri core coggen[0] cog_ ram_w",-1);
	vcdp->declBus  (c+13,"top_veri core coggen[0] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+1190,"top_veri core coggen[0] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+678,"top_veri core coggen[0] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+785,"top_veri core coggen[0] cog_ outa",-1,31,0);
	vcdp->declBus  (c+857,"top_veri core coggen[0] cog_ dira",-1,31,0);
	vcdp->declQuad (c+786,"top_veri core coggen[0] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+284,"top_veri core coggen[0] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+342,"top_veri core coggen[0] cog_ plla",-1);
	vcdp->declQuad (c+788,"top_veri core coggen[0] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+285,"top_veri core coggen[0] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+343,"top_veri core coggen[0] cog_ pllb",-1);
	vcdp->declBit  (c+1191,"top_veri core coggen[0] cog_ vidack",-1);
	vcdp->declBus  (c+60,"top_veri core coggen[0] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+1192,"top_veri core coggen[0] cog_ s",-1,31,0);
	vcdp->declBus  (c+1193,"top_veri core coggen[0] cog_ d",-1,31,0);
	vcdp->declBus  (c+790,"top_veri core coggen[0] cog_ ix",-1,31,0);
	vcdp->declBus  (c+791,"top_veri core coggen[0] cog_ sy",-1,31,0);
	vcdp->declBus  (c+14,"top_veri core coggen[0] cog_ sx",-1,31,0);
	vcdp->declBit  (c+862,"top_veri core coggen[0] cog_ cancel",-1);
	vcdp->declBus  (c+417,"top_veri core coggen[0] cog_ condx",-1,3,0);
	vcdp->declBit  (c+1194,"top_veri core coggen[0] cog_ dz",-1);
	vcdp->declBus  (c+568,"top_veri core coggen[0] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+569,"top_veri core coggen[0] cog_ jump",-1);
	vcdp->declBit  (c+1029,"top_veri core coggen[0] cog_ match",-1);
	vcdp->declBit  (c+233,"top_veri core coggen[0] cog_ waitx",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[0] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+567,"top_veri core coggen[0] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+429,"top_veri core coggen[0] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+13,"top_veri core coggen[0] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+678,"top_veri core coggen[0] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+1190,"top_veri core coggen[0] cog_ cog_ram_ q",-1,31,0);
	vcdp->declArray(c+1195,"top_veri core coggen[0] cog_ cog_ram_ r",-1,16383,0);
	vcdp->declBit  (c+76,"top_veri core coggen[0] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[0] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+542,"top_veri core coggen[0] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+421,"top_veri core coggen[0] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+423,"top_veri core coggen[0] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+676,"top_veri core coggen[0] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+678,"top_veri core coggen[0] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[0] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+786,"top_veri core coggen[0] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+284,"top_veri core coggen[0] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+342,"top_veri core coggen[0] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1053,"top_veri core coggen[0] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1030,"top_veri core coggen[0] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+792,"top_veri core coggen[0] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+95,"top_veri core coggen[0] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1054,"top_veri core coggen[0] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+344,"top_veri core coggen[0] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+79,"top_veri core coggen[0] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+286,"top_veri core coggen[0] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+287,"top_veri core coggen[0] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+953,"top_veri core coggen[0] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+955,"top_veri core coggen[0] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[0] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[0] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+542,"top_veri core coggen[0] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+422,"top_veri core coggen[0] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+424,"top_veri core coggen[0] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+677,"top_veri core coggen[0] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+678,"top_veri core coggen[0] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[0] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+788,"top_veri core coggen[0] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+285,"top_veri core coggen[0] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+343,"top_veri core coggen[0] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1055,"top_veri core coggen[0] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1031,"top_veri core coggen[0] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+793,"top_veri core coggen[0] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+97,"top_veri core coggen[0] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1056,"top_veri core coggen[0] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+345,"top_veri core coggen[0] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+80,"top_veri core coggen[0] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+288,"top_veri core coggen[0] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+289,"top_veri core coggen[0] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+956,"top_veri core coggen[0] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+958,"top_veri core coggen[0] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[0] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+342,"top_veri core coggen[0] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+542,"top_veri core coggen[0] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+425,"top_veri core coggen[0] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+426,"top_veri core coggen[0] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+678,"top_veri core coggen[0] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+1192,"top_veri core coggen[0] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+1193,"top_veri core coggen[0] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[0] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+343,"top_veri core coggen[0] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+1191,"top_veri core coggen[0] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+60,"top_veri core coggen[0] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+5375,"top_veri core coggen[0] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+1707,"top_veri core coggen[0] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1087,"top_veri core coggen[0] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1088,"top_veri core coggen[0] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1089,"top_veri core coggen[0] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1090,"top_veri core coggen[0] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1091,"top_veri core coggen[0] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+5376,"top_veri core coggen[0] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+15,"top_veri core coggen[0] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1092,"top_veri core coggen[0] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1093,"top_veri core coggen[0] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1086,"top_veri core coggen[0] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+1708,"top_veri core coggen[0] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1094,"top_veri core coggen[0] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1098,"top_veri core coggen[0] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1095,"top_veri core coggen[0] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1096,"top_veri core coggen[0] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+384,"top_veri core coggen[0] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+550,"top_veri core coggen[0] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1097,"top_veri core coggen[0] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+5427,"top_veri core coggen[0] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+16,"top_veri core coggen[0] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+61,"top_veri core coggen[0] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+418,"top_veri core coggen[0] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+1192,"top_veri core coggen[0] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+1193,"top_veri core coggen[0] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+859,"top_veri core coggen[0] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+858,"top_veri core coggen[0] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+860,"top_veri core coggen[0] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+861,"top_veri core coggen[0] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+771,"top_veri core coggen[0] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[0] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+428,"top_veri core coggen[0] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+678,"top_veri core coggen[0] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+276,"top_veri core coggen[0] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+145,"top_veri core coggen[0] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+392,"top_veri core coggen[0] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+135,"top_veri core coggen[0] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+570,"top_veri core coggen[0] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+572,"top_veri core coggen[0] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+427,"top_veri core coggen[0] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+400,"top_veri core coggen[0] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+143,"top_veri core coggen[0] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+1709,"top_veri core coggen[0] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+864,"top_veri core coggen[0] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+573,"top_veri core coggen[0] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+574,"top_veri core coggen[0] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+868,"top_veri core coggen[0] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+575,"top_veri core coggen[0] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+144,"top_veri core coggen[0] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+576,"top_veri core coggen[0] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+577,"top_veri core coggen[0] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+679,"top_veri core coggen[0] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+681,"top_veri core coggen[0] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+682,"top_veri core coggen[0] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+683,"top_veri core coggen[0] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+684,"top_veri core coggen[0] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+401,"top_veri core coggen[0] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1020,"top_veri core coggen[1] cog_ nres",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[1] cog_ clk_pll",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[1] cog_ clk_cog",-1);
	vcdp->declBit  (c+1085,"top_veri core coggen[1] cog_ ena_bus",-1);
	vcdp->declBit  (c+377,"top_veri core coggen[1] cog_ ptr_w",-1);
	vcdp->declBus  (c+1023,"top_veri core coggen[1] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+543,"top_veri core coggen[1] cog_ ena",-1);
	vcdp->declBit  (c+1005,"top_veri core coggen[1] cog_ bus_sel",-1);
	vcdp->declBit  (c+875,"top_veri core coggen[1] cog_ bus_r",-1);
	vcdp->declBit  (c+252,"top_veri core coggen[1] cog_ bus_e",-1);
	vcdp->declBit  (c+253,"top_veri core coggen[1] cog_ bus_w",-1);
	vcdp->declBus  (c+254,"top_veri core coggen[1] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+764,"top_veri core coggen[1] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+1013,"top_veri core coggen[1] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+771,"top_veri core coggen[1] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[1] cog_ bus_c",-1);
	vcdp->declBit  (c+226,"top_veri core coggen[1] cog_ bus_ack",-1);
	vcdp->declBus  (c+1021,"top_veri core coggen[1] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[1] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+347,"top_veri core coggen[1] cog_ pll_out",-1);
	vcdp->declBus  (c+3,"top_veri core coggen[1] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+53,"top_veri core coggen[1] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+869,"top_veri core coggen[1] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+5417,"top_veri core coggen[1] cog_ oh",-1,31,0);
	vcdp->declBus  (c+5418,"top_veri core coggen[1] cog_ ol",-1,31,0);
	vcdp->declBus  (c+5419,"top_veri core coggen[1] cog_ wz",-1,31,0);
	vcdp->declBus  (c+5420,"top_veri core coggen[1] cog_ wc",-1,31,0);
	vcdp->declBus  (c+5421,"top_veri core coggen[1] cog_ wr",-1,31,0);
	vcdp->declBus  (c+5422,"top_veri core coggen[1] cog_ im",-1,31,0);
	vcdp->declBus  (c+5423,"top_veri core coggen[1] cog_ ch",-1,31,0);
	vcdp->declBus  (c+5424,"top_veri core coggen[1] cog_ cl",-1,31,0);
	vcdp->declBus  (c+5425,"top_veri core coggen[1] cog_ dh",-1,31,0);
	vcdp->declBus  (c+5426,"top_veri core coggen[1] cog_ dl",-1,31,0);
	vcdp->declBus  (c+5404,"top_veri core coggen[1] cog_ sh",-1,31,0);
	vcdp->declBus  (c+5416,"top_veri core coggen[1] cog_ sl",-1,31,0);
	vcdp->declBus  (c+756,"top_veri core coggen[1] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+5377,"top_veri core coggen[1] cog_ m",-1,4,0);
	vcdp->declBit  (c+236,"top_veri core coggen[1] cog_ waiti",-1);
	vcdp->declBit  (c+870,"top_veri core coggen[1] cog_ run",-1);
	vcdp->declBus  (c+17,"top_veri core coggen[1] cog_ px",-1,8,0);
	vcdp->declBus  (c+871,"top_veri core coggen[1] cog_ p",-1,8,0);
	vcdp->declBit  (c+872,"top_veri core coggen[1] cog_ c",-1);
	vcdp->declBit  (c+873,"top_veri core coggen[1] cog_ z",-1);
	vcdp->declBus  (c+430,"top_veri core coggen[1] cog_ i",-1,31,0);
	vcdp->declBit  (c+578,"top_veri core coggen[1] cog_ cond",-1);
	vcdp->declBit  (c+579,"top_veri core coggen[1] cog_ jump_cancel",-1);
	vcdp->declBit  (c+277,"top_veri core coggen[1] cog_ alu_co",-1);
	vcdp->declBit  (c+156,"top_veri core coggen[1] cog_ alu_zo",-1);
	vcdp->declBit  (c+580,"top_veri core coggen[1] cog_ wio",-1);
	vcdp->declBit  (c+433,"top_veri core coggen[1] cog_ setouta",-1);
	vcdp->declBit  (c+434,"top_veri core coggen[1] cog_ setdira",-1);
	vcdp->declBit  (c+435,"top_veri core coggen[1] cog_ setctra",-1);
	vcdp->declBit  (c+436,"top_veri core coggen[1] cog_ setctrb",-1);
	vcdp->declBit  (c+437,"top_veri core coggen[1] cog_ setfrqa",-1);
	vcdp->declBit  (c+438,"top_veri core coggen[1] cog_ setfrqb",-1);
	vcdp->declBit  (c+685,"top_veri core coggen[1] cog_ setphsa",-1);
	vcdp->declBit  (c+686,"top_veri core coggen[1] cog_ setphsb",-1);
	vcdp->declBit  (c+439,"top_veri core coggen[1] cog_ setvid",-1);
	vcdp->declBit  (c+440,"top_veri core coggen[1] cog_ setscl",-1);
	vcdp->declBit  (c+442,"top_veri core coggen[1] cog_ alu_wr",-1);
	vcdp->declBit  (c+581,"top_veri core coggen[1] cog_ ram_ena",-1);
	vcdp->declBit  (c+443,"top_veri core coggen[1] cog_ ram_w",-1);
	vcdp->declBus  (c+18,"top_veri core coggen[1] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+1713,"top_veri core coggen[1] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+687,"top_veri core coggen[1] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+794,"top_veri core coggen[1] cog_ outa",-1,31,0);
	vcdp->declBus  (c+869,"top_veri core coggen[1] cog_ dira",-1,31,0);
	vcdp->declQuad (c+795,"top_veri core coggen[1] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+290,"top_veri core coggen[1] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+347,"top_veri core coggen[1] cog_ plla",-1);
	vcdp->declQuad (c+797,"top_veri core coggen[1] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+291,"top_veri core coggen[1] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+348,"top_veri core coggen[1] cog_ pllb",-1);
	vcdp->declBit  (c+1714,"top_veri core coggen[1] cog_ vidack",-1);
	vcdp->declBus  (c+62,"top_veri core coggen[1] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+1715,"top_veri core coggen[1] cog_ s",-1,31,0);
	vcdp->declBus  (c+1716,"top_veri core coggen[1] cog_ d",-1,31,0);
	vcdp->declBus  (c+799,"top_veri core coggen[1] cog_ ix",-1,31,0);
	vcdp->declBus  (c+800,"top_veri core coggen[1] cog_ sy",-1,31,0);
	vcdp->declBus  (c+19,"top_veri core coggen[1] cog_ sx",-1,31,0);
	vcdp->declBit  (c+874,"top_veri core coggen[1] cog_ cancel",-1);
	vcdp->declBus  (c+431,"top_veri core coggen[1] cog_ condx",-1,3,0);
	vcdp->declBit  (c+1717,"top_veri core coggen[1] cog_ dz",-1);
	vcdp->declBus  (c+582,"top_veri core coggen[1] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+583,"top_veri core coggen[1] cog_ jump",-1);
	vcdp->declBit  (c+1032,"top_veri core coggen[1] cog_ match",-1);
	vcdp->declBit  (c+235,"top_veri core coggen[1] cog_ waitx",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[1] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+581,"top_veri core coggen[1] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+443,"top_veri core coggen[1] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+18,"top_veri core coggen[1] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+687,"top_veri core coggen[1] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+1713,"top_veri core coggen[1] cog_ cog_ram_ q",-1,31,0);
	vcdp->declArray(c+1718,"top_veri core coggen[1] cog_ cog_ram_ r",-1,16383,0);
	vcdp->declBit  (c+76,"top_veri core coggen[1] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[1] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+543,"top_veri core coggen[1] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+435,"top_veri core coggen[1] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+437,"top_veri core coggen[1] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+685,"top_veri core coggen[1] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+687,"top_veri core coggen[1] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[1] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+795,"top_veri core coggen[1] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+290,"top_veri core coggen[1] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+347,"top_veri core coggen[1] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1057,"top_veri core coggen[1] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1033,"top_veri core coggen[1] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+801,"top_veri core coggen[1] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+99,"top_veri core coggen[1] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1058,"top_veri core coggen[1] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+349,"top_veri core coggen[1] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+81,"top_veri core coggen[1] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+292,"top_veri core coggen[1] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+293,"top_veri core coggen[1] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+959,"top_veri core coggen[1] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+961,"top_veri core coggen[1] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[1] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[1] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+543,"top_veri core coggen[1] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+436,"top_veri core coggen[1] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+438,"top_veri core coggen[1] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+686,"top_veri core coggen[1] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+687,"top_veri core coggen[1] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[1] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+797,"top_veri core coggen[1] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+291,"top_veri core coggen[1] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+348,"top_veri core coggen[1] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1059,"top_veri core coggen[1] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1034,"top_veri core coggen[1] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+802,"top_veri core coggen[1] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+101,"top_veri core coggen[1] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1060,"top_veri core coggen[1] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+350,"top_veri core coggen[1] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+82,"top_veri core coggen[1] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+294,"top_veri core coggen[1] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+295,"top_veri core coggen[1] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+962,"top_veri core coggen[1] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+964,"top_veri core coggen[1] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[1] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+347,"top_veri core coggen[1] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+543,"top_veri core coggen[1] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+439,"top_veri core coggen[1] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+440,"top_veri core coggen[1] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+687,"top_veri core coggen[1] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+1715,"top_veri core coggen[1] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+1716,"top_veri core coggen[1] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[1] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+348,"top_veri core coggen[1] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+1714,"top_veri core coggen[1] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+62,"top_veri core coggen[1] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+5378,"top_veri core coggen[1] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+2230,"top_veri core coggen[1] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1100,"top_veri core coggen[1] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1101,"top_veri core coggen[1] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1102,"top_veri core coggen[1] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1103,"top_veri core coggen[1] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1104,"top_veri core coggen[1] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+5379,"top_veri core coggen[1] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+20,"top_veri core coggen[1] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1105,"top_veri core coggen[1] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1106,"top_veri core coggen[1] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1099,"top_veri core coggen[1] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+2231,"top_veri core coggen[1] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1107,"top_veri core coggen[1] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1111,"top_veri core coggen[1] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1108,"top_veri core coggen[1] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1109,"top_veri core coggen[1] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+385,"top_veri core coggen[1] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+551,"top_veri core coggen[1] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1110,"top_veri core coggen[1] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+5427,"top_veri core coggen[1] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+21,"top_veri core coggen[1] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+63,"top_veri core coggen[1] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+432,"top_veri core coggen[1] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+1715,"top_veri core coggen[1] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+1716,"top_veri core coggen[1] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+871,"top_veri core coggen[1] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+870,"top_veri core coggen[1] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+872,"top_veri core coggen[1] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+873,"top_veri core coggen[1] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+771,"top_veri core coggen[1] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[1] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+442,"top_veri core coggen[1] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+687,"top_veri core coggen[1] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+277,"top_veri core coggen[1] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+156,"top_veri core coggen[1] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+393,"top_veri core coggen[1] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+146,"top_veri core coggen[1] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+584,"top_veri core coggen[1] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+586,"top_veri core coggen[1] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+441,"top_veri core coggen[1] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+402,"top_veri core coggen[1] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+154,"top_veri core coggen[1] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+2232,"top_veri core coggen[1] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+876,"top_veri core coggen[1] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+587,"top_veri core coggen[1] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+588,"top_veri core coggen[1] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+880,"top_veri core coggen[1] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+589,"top_veri core coggen[1] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+155,"top_veri core coggen[1] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+590,"top_veri core coggen[1] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+591,"top_veri core coggen[1] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+688,"top_veri core coggen[1] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+690,"top_veri core coggen[1] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+691,"top_veri core coggen[1] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+692,"top_veri core coggen[1] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+693,"top_veri core coggen[1] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+403,"top_veri core coggen[1] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1020,"top_veri core coggen[2] cog_ nres",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[2] cog_ clk_pll",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[2] cog_ clk_cog",-1);
	vcdp->declBit  (c+1085,"top_veri core coggen[2] cog_ ena_bus",-1);
	vcdp->declBit  (c+378,"top_veri core coggen[2] cog_ ptr_w",-1);
	vcdp->declBus  (c+1023,"top_veri core coggen[2] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+544,"top_veri core coggen[2] cog_ ena",-1);
	vcdp->declBit  (c+1006,"top_veri core coggen[2] cog_ bus_sel",-1);
	vcdp->declBit  (c+887,"top_veri core coggen[2] cog_ bus_r",-1);
	vcdp->declBit  (c+255,"top_veri core coggen[2] cog_ bus_e",-1);
	vcdp->declBit  (c+256,"top_veri core coggen[2] cog_ bus_w",-1);
	vcdp->declBus  (c+257,"top_veri core coggen[2] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+765,"top_veri core coggen[2] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+1014,"top_veri core coggen[2] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+771,"top_veri core coggen[2] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[2] cog_ bus_c",-1);
	vcdp->declBit  (c+227,"top_veri core coggen[2] cog_ bus_ack",-1);
	vcdp->declBus  (c+1021,"top_veri core coggen[2] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[2] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+351,"top_veri core coggen[2] cog_ pll_out",-1);
	vcdp->declBus  (c+3,"top_veri core coggen[2] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+54,"top_veri core coggen[2] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+881,"top_veri core coggen[2] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+5417,"top_veri core coggen[2] cog_ oh",-1,31,0);
	vcdp->declBus  (c+5418,"top_veri core coggen[2] cog_ ol",-1,31,0);
	vcdp->declBus  (c+5419,"top_veri core coggen[2] cog_ wz",-1,31,0);
	vcdp->declBus  (c+5420,"top_veri core coggen[2] cog_ wc",-1,31,0);
	vcdp->declBus  (c+5421,"top_veri core coggen[2] cog_ wr",-1,31,0);
	vcdp->declBus  (c+5422,"top_veri core coggen[2] cog_ im",-1,31,0);
	vcdp->declBus  (c+5423,"top_veri core coggen[2] cog_ ch",-1,31,0);
	vcdp->declBus  (c+5424,"top_veri core coggen[2] cog_ cl",-1,31,0);
	vcdp->declBus  (c+5425,"top_veri core coggen[2] cog_ dh",-1,31,0);
	vcdp->declBus  (c+5426,"top_veri core coggen[2] cog_ dl",-1,31,0);
	vcdp->declBus  (c+5404,"top_veri core coggen[2] cog_ sh",-1,31,0);
	vcdp->declBus  (c+5416,"top_veri core coggen[2] cog_ sl",-1,31,0);
	vcdp->declBus  (c+757,"top_veri core coggen[2] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+5380,"top_veri core coggen[2] cog_ m",-1,4,0);
	vcdp->declBit  (c+238,"top_veri core coggen[2] cog_ waiti",-1);
	vcdp->declBit  (c+882,"top_veri core coggen[2] cog_ run",-1);
	vcdp->declBus  (c+22,"top_veri core coggen[2] cog_ px",-1,8,0);
	vcdp->declBus  (c+883,"top_veri core coggen[2] cog_ p",-1,8,0);
	vcdp->declBit  (c+884,"top_veri core coggen[2] cog_ c",-1);
	vcdp->declBit  (c+885,"top_veri core coggen[2] cog_ z",-1);
	vcdp->declBus  (c+444,"top_veri core coggen[2] cog_ i",-1,31,0);
	vcdp->declBit  (c+592,"top_veri core coggen[2] cog_ cond",-1);
	vcdp->declBit  (c+593,"top_veri core coggen[2] cog_ jump_cancel",-1);
	vcdp->declBit  (c+278,"top_veri core coggen[2] cog_ alu_co",-1);
	vcdp->declBit  (c+167,"top_veri core coggen[2] cog_ alu_zo",-1);
	vcdp->declBit  (c+594,"top_veri core coggen[2] cog_ wio",-1);
	vcdp->declBit  (c+447,"top_veri core coggen[2] cog_ setouta",-1);
	vcdp->declBit  (c+448,"top_veri core coggen[2] cog_ setdira",-1);
	vcdp->declBit  (c+449,"top_veri core coggen[2] cog_ setctra",-1);
	vcdp->declBit  (c+450,"top_veri core coggen[2] cog_ setctrb",-1);
	vcdp->declBit  (c+451,"top_veri core coggen[2] cog_ setfrqa",-1);
	vcdp->declBit  (c+452,"top_veri core coggen[2] cog_ setfrqb",-1);
	vcdp->declBit  (c+694,"top_veri core coggen[2] cog_ setphsa",-1);
	vcdp->declBit  (c+695,"top_veri core coggen[2] cog_ setphsb",-1);
	vcdp->declBit  (c+453,"top_veri core coggen[2] cog_ setvid",-1);
	vcdp->declBit  (c+454,"top_veri core coggen[2] cog_ setscl",-1);
	vcdp->declBit  (c+456,"top_veri core coggen[2] cog_ alu_wr",-1);
	vcdp->declBit  (c+595,"top_veri core coggen[2] cog_ ram_ena",-1);
	vcdp->declBit  (c+457,"top_veri core coggen[2] cog_ ram_w",-1);
	vcdp->declBus  (c+23,"top_veri core coggen[2] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+2236,"top_veri core coggen[2] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+696,"top_veri core coggen[2] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+803,"top_veri core coggen[2] cog_ outa",-1,31,0);
	vcdp->declBus  (c+881,"top_veri core coggen[2] cog_ dira",-1,31,0);
	vcdp->declQuad (c+804,"top_veri core coggen[2] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+296,"top_veri core coggen[2] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+351,"top_veri core coggen[2] cog_ plla",-1);
	vcdp->declQuad (c+806,"top_veri core coggen[2] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+297,"top_veri core coggen[2] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+352,"top_veri core coggen[2] cog_ pllb",-1);
	vcdp->declBit  (c+2237,"top_veri core coggen[2] cog_ vidack",-1);
	vcdp->declBus  (c+64,"top_veri core coggen[2] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+2238,"top_veri core coggen[2] cog_ s",-1,31,0);
	vcdp->declBus  (c+2239,"top_veri core coggen[2] cog_ d",-1,31,0);
	vcdp->declBus  (c+808,"top_veri core coggen[2] cog_ ix",-1,31,0);
	vcdp->declBus  (c+809,"top_veri core coggen[2] cog_ sy",-1,31,0);
	vcdp->declBus  (c+24,"top_veri core coggen[2] cog_ sx",-1,31,0);
	vcdp->declBit  (c+886,"top_veri core coggen[2] cog_ cancel",-1);
	vcdp->declBus  (c+445,"top_veri core coggen[2] cog_ condx",-1,3,0);
	vcdp->declBit  (c+2240,"top_veri core coggen[2] cog_ dz",-1);
	vcdp->declBus  (c+596,"top_veri core coggen[2] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+597,"top_veri core coggen[2] cog_ jump",-1);
	vcdp->declBit  (c+1035,"top_veri core coggen[2] cog_ match",-1);
	vcdp->declBit  (c+237,"top_veri core coggen[2] cog_ waitx",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[2] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+595,"top_veri core coggen[2] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+457,"top_veri core coggen[2] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+23,"top_veri core coggen[2] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+696,"top_veri core coggen[2] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+2236,"top_veri core coggen[2] cog_ cog_ram_ q",-1,31,0);
	vcdp->declArray(c+2241,"top_veri core coggen[2] cog_ cog_ram_ r",-1,16383,0);
	vcdp->declBit  (c+76,"top_veri core coggen[2] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[2] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+544,"top_veri core coggen[2] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+449,"top_veri core coggen[2] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+451,"top_veri core coggen[2] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+694,"top_veri core coggen[2] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+696,"top_veri core coggen[2] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[2] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+804,"top_veri core coggen[2] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+296,"top_veri core coggen[2] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+351,"top_veri core coggen[2] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1061,"top_veri core coggen[2] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1036,"top_veri core coggen[2] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+810,"top_veri core coggen[2] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+103,"top_veri core coggen[2] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1062,"top_veri core coggen[2] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+353,"top_veri core coggen[2] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+83,"top_veri core coggen[2] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+298,"top_veri core coggen[2] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+299,"top_veri core coggen[2] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+965,"top_veri core coggen[2] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+967,"top_veri core coggen[2] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[2] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[2] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+544,"top_veri core coggen[2] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+450,"top_veri core coggen[2] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+452,"top_veri core coggen[2] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+695,"top_veri core coggen[2] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+696,"top_veri core coggen[2] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[2] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+806,"top_veri core coggen[2] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+297,"top_veri core coggen[2] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+352,"top_veri core coggen[2] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1063,"top_veri core coggen[2] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1037,"top_veri core coggen[2] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+811,"top_veri core coggen[2] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+105,"top_veri core coggen[2] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1064,"top_veri core coggen[2] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+354,"top_veri core coggen[2] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+84,"top_veri core coggen[2] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+300,"top_veri core coggen[2] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+301,"top_veri core coggen[2] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+968,"top_veri core coggen[2] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+970,"top_veri core coggen[2] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[2] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+351,"top_veri core coggen[2] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+544,"top_veri core coggen[2] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+453,"top_veri core coggen[2] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+454,"top_veri core coggen[2] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+696,"top_veri core coggen[2] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+2238,"top_veri core coggen[2] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+2239,"top_veri core coggen[2] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[2] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+352,"top_veri core coggen[2] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+2237,"top_veri core coggen[2] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+64,"top_veri core coggen[2] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+5381,"top_veri core coggen[2] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+2753,"top_veri core coggen[2] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1113,"top_veri core coggen[2] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1114,"top_veri core coggen[2] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1115,"top_veri core coggen[2] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1116,"top_veri core coggen[2] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1117,"top_veri core coggen[2] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+5382,"top_veri core coggen[2] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+25,"top_veri core coggen[2] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1118,"top_veri core coggen[2] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1119,"top_veri core coggen[2] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1112,"top_veri core coggen[2] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+2754,"top_veri core coggen[2] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1120,"top_veri core coggen[2] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1124,"top_veri core coggen[2] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1121,"top_veri core coggen[2] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1122,"top_veri core coggen[2] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+386,"top_veri core coggen[2] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+552,"top_veri core coggen[2] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1123,"top_veri core coggen[2] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+5427,"top_veri core coggen[2] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+26,"top_veri core coggen[2] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+65,"top_veri core coggen[2] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+446,"top_veri core coggen[2] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+2238,"top_veri core coggen[2] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+2239,"top_veri core coggen[2] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+883,"top_veri core coggen[2] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+882,"top_veri core coggen[2] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+884,"top_veri core coggen[2] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+885,"top_veri core coggen[2] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+771,"top_veri core coggen[2] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[2] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+456,"top_veri core coggen[2] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+696,"top_veri core coggen[2] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+278,"top_veri core coggen[2] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+167,"top_veri core coggen[2] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+394,"top_veri core coggen[2] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+157,"top_veri core coggen[2] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+598,"top_veri core coggen[2] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+600,"top_veri core coggen[2] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+455,"top_veri core coggen[2] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+404,"top_veri core coggen[2] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+165,"top_veri core coggen[2] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+2755,"top_veri core coggen[2] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+888,"top_veri core coggen[2] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+601,"top_veri core coggen[2] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+602,"top_veri core coggen[2] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+892,"top_veri core coggen[2] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+603,"top_veri core coggen[2] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+166,"top_veri core coggen[2] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+604,"top_veri core coggen[2] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+605,"top_veri core coggen[2] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+697,"top_veri core coggen[2] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+699,"top_veri core coggen[2] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+700,"top_veri core coggen[2] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+701,"top_veri core coggen[2] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+702,"top_veri core coggen[2] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+405,"top_veri core coggen[2] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1020,"top_veri core coggen[3] cog_ nres",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[3] cog_ clk_pll",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[3] cog_ clk_cog",-1);
	vcdp->declBit  (c+1085,"top_veri core coggen[3] cog_ ena_bus",-1);
	vcdp->declBit  (c+379,"top_veri core coggen[3] cog_ ptr_w",-1);
	vcdp->declBus  (c+1023,"top_veri core coggen[3] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+545,"top_veri core coggen[3] cog_ ena",-1);
	vcdp->declBit  (c+1007,"top_veri core coggen[3] cog_ bus_sel",-1);
	vcdp->declBit  (c+899,"top_veri core coggen[3] cog_ bus_r",-1);
	vcdp->declBit  (c+258,"top_veri core coggen[3] cog_ bus_e",-1);
	vcdp->declBit  (c+259,"top_veri core coggen[3] cog_ bus_w",-1);
	vcdp->declBus  (c+260,"top_veri core coggen[3] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+766,"top_veri core coggen[3] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+1015,"top_veri core coggen[3] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+771,"top_veri core coggen[3] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[3] cog_ bus_c",-1);
	vcdp->declBit  (c+228,"top_veri core coggen[3] cog_ bus_ack",-1);
	vcdp->declBus  (c+1021,"top_veri core coggen[3] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[3] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+355,"top_veri core coggen[3] cog_ pll_out",-1);
	vcdp->declBus  (c+3,"top_veri core coggen[3] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+55,"top_veri core coggen[3] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+893,"top_veri core coggen[3] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+5417,"top_veri core coggen[3] cog_ oh",-1,31,0);
	vcdp->declBus  (c+5418,"top_veri core coggen[3] cog_ ol",-1,31,0);
	vcdp->declBus  (c+5419,"top_veri core coggen[3] cog_ wz",-1,31,0);
	vcdp->declBus  (c+5420,"top_veri core coggen[3] cog_ wc",-1,31,0);
	vcdp->declBus  (c+5421,"top_veri core coggen[3] cog_ wr",-1,31,0);
	vcdp->declBus  (c+5422,"top_veri core coggen[3] cog_ im",-1,31,0);
	vcdp->declBus  (c+5423,"top_veri core coggen[3] cog_ ch",-1,31,0);
	vcdp->declBus  (c+5424,"top_veri core coggen[3] cog_ cl",-1,31,0);
	vcdp->declBus  (c+5425,"top_veri core coggen[3] cog_ dh",-1,31,0);
	vcdp->declBus  (c+5426,"top_veri core coggen[3] cog_ dl",-1,31,0);
	vcdp->declBus  (c+5404,"top_veri core coggen[3] cog_ sh",-1,31,0);
	vcdp->declBus  (c+5416,"top_veri core coggen[3] cog_ sl",-1,31,0);
	vcdp->declBus  (c+758,"top_veri core coggen[3] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+5383,"top_veri core coggen[3] cog_ m",-1,4,0);
	vcdp->declBit  (c+240,"top_veri core coggen[3] cog_ waiti",-1);
	vcdp->declBit  (c+894,"top_veri core coggen[3] cog_ run",-1);
	vcdp->declBus  (c+27,"top_veri core coggen[3] cog_ px",-1,8,0);
	vcdp->declBus  (c+895,"top_veri core coggen[3] cog_ p",-1,8,0);
	vcdp->declBit  (c+896,"top_veri core coggen[3] cog_ c",-1);
	vcdp->declBit  (c+897,"top_veri core coggen[3] cog_ z",-1);
	vcdp->declBus  (c+458,"top_veri core coggen[3] cog_ i",-1,31,0);
	vcdp->declBit  (c+606,"top_veri core coggen[3] cog_ cond",-1);
	vcdp->declBit  (c+607,"top_veri core coggen[3] cog_ jump_cancel",-1);
	vcdp->declBit  (c+279,"top_veri core coggen[3] cog_ alu_co",-1);
	vcdp->declBit  (c+178,"top_veri core coggen[3] cog_ alu_zo",-1);
	vcdp->declBit  (c+608,"top_veri core coggen[3] cog_ wio",-1);
	vcdp->declBit  (c+461,"top_veri core coggen[3] cog_ setouta",-1);
	vcdp->declBit  (c+462,"top_veri core coggen[3] cog_ setdira",-1);
	vcdp->declBit  (c+463,"top_veri core coggen[3] cog_ setctra",-1);
	vcdp->declBit  (c+464,"top_veri core coggen[3] cog_ setctrb",-1);
	vcdp->declBit  (c+465,"top_veri core coggen[3] cog_ setfrqa",-1);
	vcdp->declBit  (c+466,"top_veri core coggen[3] cog_ setfrqb",-1);
	vcdp->declBit  (c+703,"top_veri core coggen[3] cog_ setphsa",-1);
	vcdp->declBit  (c+704,"top_veri core coggen[3] cog_ setphsb",-1);
	vcdp->declBit  (c+467,"top_veri core coggen[3] cog_ setvid",-1);
	vcdp->declBit  (c+468,"top_veri core coggen[3] cog_ setscl",-1);
	vcdp->declBit  (c+470,"top_veri core coggen[3] cog_ alu_wr",-1);
	vcdp->declBit  (c+609,"top_veri core coggen[3] cog_ ram_ena",-1);
	vcdp->declBit  (c+471,"top_veri core coggen[3] cog_ ram_w",-1);
	vcdp->declBus  (c+28,"top_veri core coggen[3] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+2759,"top_veri core coggen[3] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+705,"top_veri core coggen[3] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+812,"top_veri core coggen[3] cog_ outa",-1,31,0);
	vcdp->declBus  (c+893,"top_veri core coggen[3] cog_ dira",-1,31,0);
	vcdp->declQuad (c+813,"top_veri core coggen[3] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+302,"top_veri core coggen[3] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+355,"top_veri core coggen[3] cog_ plla",-1);
	vcdp->declQuad (c+815,"top_veri core coggen[3] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+303,"top_veri core coggen[3] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+356,"top_veri core coggen[3] cog_ pllb",-1);
	vcdp->declBit  (c+2760,"top_veri core coggen[3] cog_ vidack",-1);
	vcdp->declBus  (c+66,"top_veri core coggen[3] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+2761,"top_veri core coggen[3] cog_ s",-1,31,0);
	vcdp->declBus  (c+2762,"top_veri core coggen[3] cog_ d",-1,31,0);
	vcdp->declBus  (c+817,"top_veri core coggen[3] cog_ ix",-1,31,0);
	vcdp->declBus  (c+818,"top_veri core coggen[3] cog_ sy",-1,31,0);
	vcdp->declBus  (c+29,"top_veri core coggen[3] cog_ sx",-1,31,0);
	vcdp->declBit  (c+898,"top_veri core coggen[3] cog_ cancel",-1);
	vcdp->declBus  (c+459,"top_veri core coggen[3] cog_ condx",-1,3,0);
	vcdp->declBit  (c+2763,"top_veri core coggen[3] cog_ dz",-1);
	vcdp->declBus  (c+610,"top_veri core coggen[3] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+611,"top_veri core coggen[3] cog_ jump",-1);
	vcdp->declBit  (c+1038,"top_veri core coggen[3] cog_ match",-1);
	vcdp->declBit  (c+239,"top_veri core coggen[3] cog_ waitx",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[3] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+609,"top_veri core coggen[3] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+471,"top_veri core coggen[3] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+28,"top_veri core coggen[3] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+705,"top_veri core coggen[3] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+2759,"top_veri core coggen[3] cog_ cog_ram_ q",-1,31,0);
	vcdp->declArray(c+2764,"top_veri core coggen[3] cog_ cog_ram_ r",-1,16383,0);
	vcdp->declBit  (c+76,"top_veri core coggen[3] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[3] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+545,"top_veri core coggen[3] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+463,"top_veri core coggen[3] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+465,"top_veri core coggen[3] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+703,"top_veri core coggen[3] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+705,"top_veri core coggen[3] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[3] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+813,"top_veri core coggen[3] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+302,"top_veri core coggen[3] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+355,"top_veri core coggen[3] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1065,"top_veri core coggen[3] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1039,"top_veri core coggen[3] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+819,"top_veri core coggen[3] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+107,"top_veri core coggen[3] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1066,"top_veri core coggen[3] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+357,"top_veri core coggen[3] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+85,"top_veri core coggen[3] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+304,"top_veri core coggen[3] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+305,"top_veri core coggen[3] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+971,"top_veri core coggen[3] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+973,"top_veri core coggen[3] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[3] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[3] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+545,"top_veri core coggen[3] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+464,"top_veri core coggen[3] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+466,"top_veri core coggen[3] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+704,"top_veri core coggen[3] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+705,"top_veri core coggen[3] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[3] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+815,"top_veri core coggen[3] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+303,"top_veri core coggen[3] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+356,"top_veri core coggen[3] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1067,"top_veri core coggen[3] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1040,"top_veri core coggen[3] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+820,"top_veri core coggen[3] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+109,"top_veri core coggen[3] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1068,"top_veri core coggen[3] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+358,"top_veri core coggen[3] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+86,"top_veri core coggen[3] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+306,"top_veri core coggen[3] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+307,"top_veri core coggen[3] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+974,"top_veri core coggen[3] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+976,"top_veri core coggen[3] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[3] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+355,"top_veri core coggen[3] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+545,"top_veri core coggen[3] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+467,"top_veri core coggen[3] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+468,"top_veri core coggen[3] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+705,"top_veri core coggen[3] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+2761,"top_veri core coggen[3] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+2762,"top_veri core coggen[3] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[3] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+356,"top_veri core coggen[3] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+2760,"top_veri core coggen[3] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+66,"top_veri core coggen[3] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+5384,"top_veri core coggen[3] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+3276,"top_veri core coggen[3] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1126,"top_veri core coggen[3] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1127,"top_veri core coggen[3] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1128,"top_veri core coggen[3] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1129,"top_veri core coggen[3] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1130,"top_veri core coggen[3] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+5385,"top_veri core coggen[3] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+30,"top_veri core coggen[3] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1131,"top_veri core coggen[3] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1132,"top_veri core coggen[3] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1125,"top_veri core coggen[3] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+3277,"top_veri core coggen[3] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1133,"top_veri core coggen[3] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1137,"top_veri core coggen[3] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1134,"top_veri core coggen[3] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1135,"top_veri core coggen[3] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+387,"top_veri core coggen[3] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+553,"top_veri core coggen[3] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1136,"top_veri core coggen[3] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+5427,"top_veri core coggen[3] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+31,"top_veri core coggen[3] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+67,"top_veri core coggen[3] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+460,"top_veri core coggen[3] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+2761,"top_veri core coggen[3] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+2762,"top_veri core coggen[3] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+895,"top_veri core coggen[3] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+894,"top_veri core coggen[3] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+896,"top_veri core coggen[3] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+897,"top_veri core coggen[3] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+771,"top_veri core coggen[3] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[3] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+470,"top_veri core coggen[3] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+705,"top_veri core coggen[3] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+279,"top_veri core coggen[3] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+178,"top_veri core coggen[3] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+395,"top_veri core coggen[3] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+168,"top_veri core coggen[3] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+612,"top_veri core coggen[3] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+614,"top_veri core coggen[3] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+469,"top_veri core coggen[3] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+406,"top_veri core coggen[3] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+176,"top_veri core coggen[3] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+3278,"top_veri core coggen[3] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+900,"top_veri core coggen[3] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+615,"top_veri core coggen[3] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+616,"top_veri core coggen[3] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+904,"top_veri core coggen[3] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+617,"top_veri core coggen[3] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+177,"top_veri core coggen[3] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+618,"top_veri core coggen[3] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+619,"top_veri core coggen[3] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+706,"top_veri core coggen[3] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+708,"top_veri core coggen[3] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+709,"top_veri core coggen[3] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+710,"top_veri core coggen[3] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+711,"top_veri core coggen[3] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+407,"top_veri core coggen[3] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1020,"top_veri core coggen[4] cog_ nres",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[4] cog_ clk_pll",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[4] cog_ clk_cog",-1);
	vcdp->declBit  (c+1085,"top_veri core coggen[4] cog_ ena_bus",-1);
	vcdp->declBit  (c+380,"top_veri core coggen[4] cog_ ptr_w",-1);
	vcdp->declBus  (c+1023,"top_veri core coggen[4] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+546,"top_veri core coggen[4] cog_ ena",-1);
	vcdp->declBit  (c+1008,"top_veri core coggen[4] cog_ bus_sel",-1);
	vcdp->declBit  (c+911,"top_veri core coggen[4] cog_ bus_r",-1);
	vcdp->declBit  (c+261,"top_veri core coggen[4] cog_ bus_e",-1);
	vcdp->declBit  (c+262,"top_veri core coggen[4] cog_ bus_w",-1);
	vcdp->declBus  (c+263,"top_veri core coggen[4] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+767,"top_veri core coggen[4] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+1016,"top_veri core coggen[4] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+771,"top_veri core coggen[4] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[4] cog_ bus_c",-1);
	vcdp->declBit  (c+229,"top_veri core coggen[4] cog_ bus_ack",-1);
	vcdp->declBus  (c+1021,"top_veri core coggen[4] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[4] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+359,"top_veri core coggen[4] cog_ pll_out",-1);
	vcdp->declBus  (c+3,"top_veri core coggen[4] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+56,"top_veri core coggen[4] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+905,"top_veri core coggen[4] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+5417,"top_veri core coggen[4] cog_ oh",-1,31,0);
	vcdp->declBus  (c+5418,"top_veri core coggen[4] cog_ ol",-1,31,0);
	vcdp->declBus  (c+5419,"top_veri core coggen[4] cog_ wz",-1,31,0);
	vcdp->declBus  (c+5420,"top_veri core coggen[4] cog_ wc",-1,31,0);
	vcdp->declBus  (c+5421,"top_veri core coggen[4] cog_ wr",-1,31,0);
	vcdp->declBus  (c+5422,"top_veri core coggen[4] cog_ im",-1,31,0);
	vcdp->declBus  (c+5423,"top_veri core coggen[4] cog_ ch",-1,31,0);
	vcdp->declBus  (c+5424,"top_veri core coggen[4] cog_ cl",-1,31,0);
	vcdp->declBus  (c+5425,"top_veri core coggen[4] cog_ dh",-1,31,0);
	vcdp->declBus  (c+5426,"top_veri core coggen[4] cog_ dl",-1,31,0);
	vcdp->declBus  (c+5404,"top_veri core coggen[4] cog_ sh",-1,31,0);
	vcdp->declBus  (c+5416,"top_veri core coggen[4] cog_ sl",-1,31,0);
	vcdp->declBus  (c+759,"top_veri core coggen[4] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+5386,"top_veri core coggen[4] cog_ m",-1,4,0);
	vcdp->declBit  (c+242,"top_veri core coggen[4] cog_ waiti",-1);
	vcdp->declBit  (c+906,"top_veri core coggen[4] cog_ run",-1);
	vcdp->declBus  (c+32,"top_veri core coggen[4] cog_ px",-1,8,0);
	vcdp->declBus  (c+907,"top_veri core coggen[4] cog_ p",-1,8,0);
	vcdp->declBit  (c+908,"top_veri core coggen[4] cog_ c",-1);
	vcdp->declBit  (c+909,"top_veri core coggen[4] cog_ z",-1);
	vcdp->declBus  (c+472,"top_veri core coggen[4] cog_ i",-1,31,0);
	vcdp->declBit  (c+620,"top_veri core coggen[4] cog_ cond",-1);
	vcdp->declBit  (c+621,"top_veri core coggen[4] cog_ jump_cancel",-1);
	vcdp->declBit  (c+280,"top_veri core coggen[4] cog_ alu_co",-1);
	vcdp->declBit  (c+189,"top_veri core coggen[4] cog_ alu_zo",-1);
	vcdp->declBit  (c+622,"top_veri core coggen[4] cog_ wio",-1);
	vcdp->declBit  (c+475,"top_veri core coggen[4] cog_ setouta",-1);
	vcdp->declBit  (c+476,"top_veri core coggen[4] cog_ setdira",-1);
	vcdp->declBit  (c+477,"top_veri core coggen[4] cog_ setctra",-1);
	vcdp->declBit  (c+478,"top_veri core coggen[4] cog_ setctrb",-1);
	vcdp->declBit  (c+479,"top_veri core coggen[4] cog_ setfrqa",-1);
	vcdp->declBit  (c+480,"top_veri core coggen[4] cog_ setfrqb",-1);
	vcdp->declBit  (c+712,"top_veri core coggen[4] cog_ setphsa",-1);
	vcdp->declBit  (c+713,"top_veri core coggen[4] cog_ setphsb",-1);
	vcdp->declBit  (c+481,"top_veri core coggen[4] cog_ setvid",-1);
	vcdp->declBit  (c+482,"top_veri core coggen[4] cog_ setscl",-1);
	vcdp->declBit  (c+484,"top_veri core coggen[4] cog_ alu_wr",-1);
	vcdp->declBit  (c+623,"top_veri core coggen[4] cog_ ram_ena",-1);
	vcdp->declBit  (c+485,"top_veri core coggen[4] cog_ ram_w",-1);
	vcdp->declBus  (c+33,"top_veri core coggen[4] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+3282,"top_veri core coggen[4] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+714,"top_veri core coggen[4] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+821,"top_veri core coggen[4] cog_ outa",-1,31,0);
	vcdp->declBus  (c+905,"top_veri core coggen[4] cog_ dira",-1,31,0);
	vcdp->declQuad (c+822,"top_veri core coggen[4] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+308,"top_veri core coggen[4] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+359,"top_veri core coggen[4] cog_ plla",-1);
	vcdp->declQuad (c+824,"top_veri core coggen[4] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+309,"top_veri core coggen[4] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+360,"top_veri core coggen[4] cog_ pllb",-1);
	vcdp->declBit  (c+3283,"top_veri core coggen[4] cog_ vidack",-1);
	vcdp->declBus  (c+68,"top_veri core coggen[4] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+3284,"top_veri core coggen[4] cog_ s",-1,31,0);
	vcdp->declBus  (c+3285,"top_veri core coggen[4] cog_ d",-1,31,0);
	vcdp->declBus  (c+826,"top_veri core coggen[4] cog_ ix",-1,31,0);
	vcdp->declBus  (c+827,"top_veri core coggen[4] cog_ sy",-1,31,0);
	vcdp->declBus  (c+34,"top_veri core coggen[4] cog_ sx",-1,31,0);
	vcdp->declBit  (c+910,"top_veri core coggen[4] cog_ cancel",-1);
	vcdp->declBus  (c+473,"top_veri core coggen[4] cog_ condx",-1,3,0);
	vcdp->declBit  (c+3286,"top_veri core coggen[4] cog_ dz",-1);
	vcdp->declBus  (c+624,"top_veri core coggen[4] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+625,"top_veri core coggen[4] cog_ jump",-1);
	vcdp->declBit  (c+1041,"top_veri core coggen[4] cog_ match",-1);
	vcdp->declBit  (c+241,"top_veri core coggen[4] cog_ waitx",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[4] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+623,"top_veri core coggen[4] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+485,"top_veri core coggen[4] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+33,"top_veri core coggen[4] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+714,"top_veri core coggen[4] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+3282,"top_veri core coggen[4] cog_ cog_ram_ q",-1,31,0);
	vcdp->declArray(c+3287,"top_veri core coggen[4] cog_ cog_ram_ r",-1,16383,0);
	vcdp->declBit  (c+76,"top_veri core coggen[4] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[4] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+546,"top_veri core coggen[4] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+477,"top_veri core coggen[4] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+479,"top_veri core coggen[4] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+712,"top_veri core coggen[4] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+714,"top_veri core coggen[4] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[4] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+822,"top_veri core coggen[4] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+308,"top_veri core coggen[4] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+359,"top_veri core coggen[4] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1069,"top_veri core coggen[4] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1042,"top_veri core coggen[4] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+828,"top_veri core coggen[4] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+111,"top_veri core coggen[4] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1070,"top_veri core coggen[4] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+361,"top_veri core coggen[4] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+87,"top_veri core coggen[4] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+310,"top_veri core coggen[4] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+311,"top_veri core coggen[4] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+977,"top_veri core coggen[4] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+979,"top_veri core coggen[4] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[4] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[4] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+546,"top_veri core coggen[4] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+478,"top_veri core coggen[4] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+480,"top_veri core coggen[4] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+713,"top_veri core coggen[4] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+714,"top_veri core coggen[4] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[4] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+824,"top_veri core coggen[4] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+309,"top_veri core coggen[4] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+360,"top_veri core coggen[4] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1071,"top_veri core coggen[4] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1043,"top_veri core coggen[4] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+829,"top_veri core coggen[4] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+113,"top_veri core coggen[4] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1072,"top_veri core coggen[4] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+362,"top_veri core coggen[4] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+88,"top_veri core coggen[4] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+312,"top_veri core coggen[4] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+313,"top_veri core coggen[4] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+980,"top_veri core coggen[4] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+982,"top_veri core coggen[4] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[4] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+359,"top_veri core coggen[4] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+546,"top_veri core coggen[4] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+481,"top_veri core coggen[4] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+482,"top_veri core coggen[4] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+714,"top_veri core coggen[4] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+3284,"top_veri core coggen[4] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+3285,"top_veri core coggen[4] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[4] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+360,"top_veri core coggen[4] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+3283,"top_veri core coggen[4] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+68,"top_veri core coggen[4] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+5387,"top_veri core coggen[4] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+3799,"top_veri core coggen[4] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1139,"top_veri core coggen[4] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1140,"top_veri core coggen[4] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1141,"top_veri core coggen[4] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1142,"top_veri core coggen[4] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1143,"top_veri core coggen[4] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+5388,"top_veri core coggen[4] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+35,"top_veri core coggen[4] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1144,"top_veri core coggen[4] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1145,"top_veri core coggen[4] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1138,"top_veri core coggen[4] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+3800,"top_veri core coggen[4] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1146,"top_veri core coggen[4] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1150,"top_veri core coggen[4] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1147,"top_veri core coggen[4] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1148,"top_veri core coggen[4] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+388,"top_veri core coggen[4] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+554,"top_veri core coggen[4] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1149,"top_veri core coggen[4] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+5427,"top_veri core coggen[4] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+36,"top_veri core coggen[4] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+69,"top_veri core coggen[4] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+474,"top_veri core coggen[4] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+3284,"top_veri core coggen[4] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+3285,"top_veri core coggen[4] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+907,"top_veri core coggen[4] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+906,"top_veri core coggen[4] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+908,"top_veri core coggen[4] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+909,"top_veri core coggen[4] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+771,"top_veri core coggen[4] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[4] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+484,"top_veri core coggen[4] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+714,"top_veri core coggen[4] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+280,"top_veri core coggen[4] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+189,"top_veri core coggen[4] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+396,"top_veri core coggen[4] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+179,"top_veri core coggen[4] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+626,"top_veri core coggen[4] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+628,"top_veri core coggen[4] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+483,"top_veri core coggen[4] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+408,"top_veri core coggen[4] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+187,"top_veri core coggen[4] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+3801,"top_veri core coggen[4] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+912,"top_veri core coggen[4] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+629,"top_veri core coggen[4] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+630,"top_veri core coggen[4] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+916,"top_veri core coggen[4] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+631,"top_veri core coggen[4] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+188,"top_veri core coggen[4] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+632,"top_veri core coggen[4] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+633,"top_veri core coggen[4] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+715,"top_veri core coggen[4] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+717,"top_veri core coggen[4] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+718,"top_veri core coggen[4] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+719,"top_veri core coggen[4] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+720,"top_veri core coggen[4] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+409,"top_veri core coggen[4] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1020,"top_veri core coggen[5] cog_ nres",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[5] cog_ clk_pll",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[5] cog_ clk_cog",-1);
	vcdp->declBit  (c+1085,"top_veri core coggen[5] cog_ ena_bus",-1);
	vcdp->declBit  (c+381,"top_veri core coggen[5] cog_ ptr_w",-1);
	vcdp->declBus  (c+1023,"top_veri core coggen[5] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+547,"top_veri core coggen[5] cog_ ena",-1);
	vcdp->declBit  (c+1009,"top_veri core coggen[5] cog_ bus_sel",-1);
	vcdp->declBit  (c+923,"top_veri core coggen[5] cog_ bus_r",-1);
	vcdp->declBit  (c+264,"top_veri core coggen[5] cog_ bus_e",-1);
	vcdp->declBit  (c+265,"top_veri core coggen[5] cog_ bus_w",-1);
	vcdp->declBus  (c+266,"top_veri core coggen[5] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+768,"top_veri core coggen[5] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+1017,"top_veri core coggen[5] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+771,"top_veri core coggen[5] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[5] cog_ bus_c",-1);
	vcdp->declBit  (c+230,"top_veri core coggen[5] cog_ bus_ack",-1);
	vcdp->declBus  (c+1021,"top_veri core coggen[5] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[5] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+363,"top_veri core coggen[5] cog_ pll_out",-1);
	vcdp->declBus  (c+3,"top_veri core coggen[5] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+57,"top_veri core coggen[5] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+917,"top_veri core coggen[5] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+5417,"top_veri core coggen[5] cog_ oh",-1,31,0);
	vcdp->declBus  (c+5418,"top_veri core coggen[5] cog_ ol",-1,31,0);
	vcdp->declBus  (c+5419,"top_veri core coggen[5] cog_ wz",-1,31,0);
	vcdp->declBus  (c+5420,"top_veri core coggen[5] cog_ wc",-1,31,0);
	vcdp->declBus  (c+5421,"top_veri core coggen[5] cog_ wr",-1,31,0);
	vcdp->declBus  (c+5422,"top_veri core coggen[5] cog_ im",-1,31,0);
	vcdp->declBus  (c+5423,"top_veri core coggen[5] cog_ ch",-1,31,0);
	vcdp->declBus  (c+5424,"top_veri core coggen[5] cog_ cl",-1,31,0);
	vcdp->declBus  (c+5425,"top_veri core coggen[5] cog_ dh",-1,31,0);
	vcdp->declBus  (c+5426,"top_veri core coggen[5] cog_ dl",-1,31,0);
	vcdp->declBus  (c+5404,"top_veri core coggen[5] cog_ sh",-1,31,0);
	vcdp->declBus  (c+5416,"top_veri core coggen[5] cog_ sl",-1,31,0);
	vcdp->declBus  (c+760,"top_veri core coggen[5] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+5389,"top_veri core coggen[5] cog_ m",-1,4,0);
	vcdp->declBit  (c+244,"top_veri core coggen[5] cog_ waiti",-1);
	vcdp->declBit  (c+918,"top_veri core coggen[5] cog_ run",-1);
	vcdp->declBus  (c+37,"top_veri core coggen[5] cog_ px",-1,8,0);
	vcdp->declBus  (c+919,"top_veri core coggen[5] cog_ p",-1,8,0);
	vcdp->declBit  (c+920,"top_veri core coggen[5] cog_ c",-1);
	vcdp->declBit  (c+921,"top_veri core coggen[5] cog_ z",-1);
	vcdp->declBus  (c+486,"top_veri core coggen[5] cog_ i",-1,31,0);
	vcdp->declBit  (c+634,"top_veri core coggen[5] cog_ cond",-1);
	vcdp->declBit  (c+635,"top_veri core coggen[5] cog_ jump_cancel",-1);
	vcdp->declBit  (c+281,"top_veri core coggen[5] cog_ alu_co",-1);
	vcdp->declBit  (c+200,"top_veri core coggen[5] cog_ alu_zo",-1);
	vcdp->declBit  (c+636,"top_veri core coggen[5] cog_ wio",-1);
	vcdp->declBit  (c+489,"top_veri core coggen[5] cog_ setouta",-1);
	vcdp->declBit  (c+490,"top_veri core coggen[5] cog_ setdira",-1);
	vcdp->declBit  (c+491,"top_veri core coggen[5] cog_ setctra",-1);
	vcdp->declBit  (c+492,"top_veri core coggen[5] cog_ setctrb",-1);
	vcdp->declBit  (c+493,"top_veri core coggen[5] cog_ setfrqa",-1);
	vcdp->declBit  (c+494,"top_veri core coggen[5] cog_ setfrqb",-1);
	vcdp->declBit  (c+721,"top_veri core coggen[5] cog_ setphsa",-1);
	vcdp->declBit  (c+722,"top_veri core coggen[5] cog_ setphsb",-1);
	vcdp->declBit  (c+495,"top_veri core coggen[5] cog_ setvid",-1);
	vcdp->declBit  (c+496,"top_veri core coggen[5] cog_ setscl",-1);
	vcdp->declBit  (c+498,"top_veri core coggen[5] cog_ alu_wr",-1);
	vcdp->declBit  (c+637,"top_veri core coggen[5] cog_ ram_ena",-1);
	vcdp->declBit  (c+499,"top_veri core coggen[5] cog_ ram_w",-1);
	vcdp->declBus  (c+38,"top_veri core coggen[5] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+3805,"top_veri core coggen[5] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+723,"top_veri core coggen[5] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+830,"top_veri core coggen[5] cog_ outa",-1,31,0);
	vcdp->declBus  (c+917,"top_veri core coggen[5] cog_ dira",-1,31,0);
	vcdp->declQuad (c+831,"top_veri core coggen[5] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+314,"top_veri core coggen[5] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+363,"top_veri core coggen[5] cog_ plla",-1);
	vcdp->declQuad (c+833,"top_veri core coggen[5] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+315,"top_veri core coggen[5] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+364,"top_veri core coggen[5] cog_ pllb",-1);
	vcdp->declBit  (c+3806,"top_veri core coggen[5] cog_ vidack",-1);
	vcdp->declBus  (c+70,"top_veri core coggen[5] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+3807,"top_veri core coggen[5] cog_ s",-1,31,0);
	vcdp->declBus  (c+3808,"top_veri core coggen[5] cog_ d",-1,31,0);
	vcdp->declBus  (c+835,"top_veri core coggen[5] cog_ ix",-1,31,0);
	vcdp->declBus  (c+836,"top_veri core coggen[5] cog_ sy",-1,31,0);
	vcdp->declBus  (c+39,"top_veri core coggen[5] cog_ sx",-1,31,0);
	vcdp->declBit  (c+922,"top_veri core coggen[5] cog_ cancel",-1);
	vcdp->declBus  (c+487,"top_veri core coggen[5] cog_ condx",-1,3,0);
	vcdp->declBit  (c+3809,"top_veri core coggen[5] cog_ dz",-1);
	vcdp->declBus  (c+638,"top_veri core coggen[5] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+639,"top_veri core coggen[5] cog_ jump",-1);
	vcdp->declBit  (c+1044,"top_veri core coggen[5] cog_ match",-1);
	vcdp->declBit  (c+243,"top_veri core coggen[5] cog_ waitx",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[5] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+637,"top_veri core coggen[5] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+499,"top_veri core coggen[5] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+38,"top_veri core coggen[5] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+723,"top_veri core coggen[5] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+3805,"top_veri core coggen[5] cog_ cog_ram_ q",-1,31,0);
	vcdp->declArray(c+3810,"top_veri core coggen[5] cog_ cog_ram_ r",-1,16383,0);
	vcdp->declBit  (c+76,"top_veri core coggen[5] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[5] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+547,"top_veri core coggen[5] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+491,"top_veri core coggen[5] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+493,"top_veri core coggen[5] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+721,"top_veri core coggen[5] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+723,"top_veri core coggen[5] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[5] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+831,"top_veri core coggen[5] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+314,"top_veri core coggen[5] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+363,"top_veri core coggen[5] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1073,"top_veri core coggen[5] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1045,"top_veri core coggen[5] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+837,"top_veri core coggen[5] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+115,"top_veri core coggen[5] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1074,"top_veri core coggen[5] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+365,"top_veri core coggen[5] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+89,"top_veri core coggen[5] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+316,"top_veri core coggen[5] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+317,"top_veri core coggen[5] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+983,"top_veri core coggen[5] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+985,"top_veri core coggen[5] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[5] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[5] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+547,"top_veri core coggen[5] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+492,"top_veri core coggen[5] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+494,"top_veri core coggen[5] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+722,"top_veri core coggen[5] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+723,"top_veri core coggen[5] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[5] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+833,"top_veri core coggen[5] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+315,"top_veri core coggen[5] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+364,"top_veri core coggen[5] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1075,"top_veri core coggen[5] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1046,"top_veri core coggen[5] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+838,"top_veri core coggen[5] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+117,"top_veri core coggen[5] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1076,"top_veri core coggen[5] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+366,"top_veri core coggen[5] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+90,"top_veri core coggen[5] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+318,"top_veri core coggen[5] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+319,"top_veri core coggen[5] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+986,"top_veri core coggen[5] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+988,"top_veri core coggen[5] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[5] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+363,"top_veri core coggen[5] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+547,"top_veri core coggen[5] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+495,"top_veri core coggen[5] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+496,"top_veri core coggen[5] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+723,"top_veri core coggen[5] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+3807,"top_veri core coggen[5] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+3808,"top_veri core coggen[5] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[5] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+364,"top_veri core coggen[5] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+3806,"top_veri core coggen[5] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+70,"top_veri core coggen[5] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+5390,"top_veri core coggen[5] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+4322,"top_veri core coggen[5] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1152,"top_veri core coggen[5] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1153,"top_veri core coggen[5] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1154,"top_veri core coggen[5] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1155,"top_veri core coggen[5] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1156,"top_veri core coggen[5] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+5391,"top_veri core coggen[5] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+40,"top_veri core coggen[5] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1157,"top_veri core coggen[5] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1158,"top_veri core coggen[5] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1151,"top_veri core coggen[5] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+4323,"top_veri core coggen[5] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1159,"top_veri core coggen[5] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1163,"top_veri core coggen[5] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1160,"top_veri core coggen[5] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1161,"top_veri core coggen[5] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+389,"top_veri core coggen[5] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+555,"top_veri core coggen[5] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1162,"top_veri core coggen[5] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+5427,"top_veri core coggen[5] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+41,"top_veri core coggen[5] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+71,"top_veri core coggen[5] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+488,"top_veri core coggen[5] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+3807,"top_veri core coggen[5] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+3808,"top_veri core coggen[5] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+919,"top_veri core coggen[5] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+918,"top_veri core coggen[5] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+920,"top_veri core coggen[5] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+921,"top_veri core coggen[5] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+771,"top_veri core coggen[5] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[5] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+498,"top_veri core coggen[5] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+723,"top_veri core coggen[5] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+281,"top_veri core coggen[5] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+200,"top_veri core coggen[5] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+397,"top_veri core coggen[5] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+190,"top_veri core coggen[5] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+640,"top_veri core coggen[5] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+642,"top_veri core coggen[5] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+497,"top_veri core coggen[5] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+410,"top_veri core coggen[5] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+198,"top_veri core coggen[5] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+4324,"top_veri core coggen[5] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+924,"top_veri core coggen[5] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+643,"top_veri core coggen[5] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+644,"top_veri core coggen[5] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+928,"top_veri core coggen[5] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+645,"top_veri core coggen[5] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+199,"top_veri core coggen[5] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+646,"top_veri core coggen[5] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+647,"top_veri core coggen[5] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+724,"top_veri core coggen[5] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+726,"top_veri core coggen[5] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+727,"top_veri core coggen[5] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+728,"top_veri core coggen[5] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+729,"top_veri core coggen[5] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+411,"top_veri core coggen[5] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1020,"top_veri core coggen[6] cog_ nres",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[6] cog_ clk_pll",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[6] cog_ clk_cog",-1);
	vcdp->declBit  (c+1085,"top_veri core coggen[6] cog_ ena_bus",-1);
	vcdp->declBit  (c+382,"top_veri core coggen[6] cog_ ptr_w",-1);
	vcdp->declBus  (c+1023,"top_veri core coggen[6] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+548,"top_veri core coggen[6] cog_ ena",-1);
	vcdp->declBit  (c+1010,"top_veri core coggen[6] cog_ bus_sel",-1);
	vcdp->declBit  (c+935,"top_veri core coggen[6] cog_ bus_r",-1);
	vcdp->declBit  (c+267,"top_veri core coggen[6] cog_ bus_e",-1);
	vcdp->declBit  (c+268,"top_veri core coggen[6] cog_ bus_w",-1);
	vcdp->declBus  (c+269,"top_veri core coggen[6] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+769,"top_veri core coggen[6] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+1018,"top_veri core coggen[6] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+771,"top_veri core coggen[6] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[6] cog_ bus_c",-1);
	vcdp->declBit  (c+231,"top_veri core coggen[6] cog_ bus_ack",-1);
	vcdp->declBus  (c+1021,"top_veri core coggen[6] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[6] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+367,"top_veri core coggen[6] cog_ pll_out",-1);
	vcdp->declBus  (c+3,"top_veri core coggen[6] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+58,"top_veri core coggen[6] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+929,"top_veri core coggen[6] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+5417,"top_veri core coggen[6] cog_ oh",-1,31,0);
	vcdp->declBus  (c+5418,"top_veri core coggen[6] cog_ ol",-1,31,0);
	vcdp->declBus  (c+5419,"top_veri core coggen[6] cog_ wz",-1,31,0);
	vcdp->declBus  (c+5420,"top_veri core coggen[6] cog_ wc",-1,31,0);
	vcdp->declBus  (c+5421,"top_veri core coggen[6] cog_ wr",-1,31,0);
	vcdp->declBus  (c+5422,"top_veri core coggen[6] cog_ im",-1,31,0);
	vcdp->declBus  (c+5423,"top_veri core coggen[6] cog_ ch",-1,31,0);
	vcdp->declBus  (c+5424,"top_veri core coggen[6] cog_ cl",-1,31,0);
	vcdp->declBus  (c+5425,"top_veri core coggen[6] cog_ dh",-1,31,0);
	vcdp->declBus  (c+5426,"top_veri core coggen[6] cog_ dl",-1,31,0);
	vcdp->declBus  (c+5404,"top_veri core coggen[6] cog_ sh",-1,31,0);
	vcdp->declBus  (c+5416,"top_veri core coggen[6] cog_ sl",-1,31,0);
	vcdp->declBus  (c+761,"top_veri core coggen[6] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+5392,"top_veri core coggen[6] cog_ m",-1,4,0);
	vcdp->declBit  (c+246,"top_veri core coggen[6] cog_ waiti",-1);
	vcdp->declBit  (c+930,"top_veri core coggen[6] cog_ run",-1);
	vcdp->declBus  (c+42,"top_veri core coggen[6] cog_ px",-1,8,0);
	vcdp->declBus  (c+931,"top_veri core coggen[6] cog_ p",-1,8,0);
	vcdp->declBit  (c+932,"top_veri core coggen[6] cog_ c",-1);
	vcdp->declBit  (c+933,"top_veri core coggen[6] cog_ z",-1);
	vcdp->declBus  (c+500,"top_veri core coggen[6] cog_ i",-1,31,0);
	vcdp->declBit  (c+648,"top_veri core coggen[6] cog_ cond",-1);
	vcdp->declBit  (c+649,"top_veri core coggen[6] cog_ jump_cancel",-1);
	vcdp->declBit  (c+282,"top_veri core coggen[6] cog_ alu_co",-1);
	vcdp->declBit  (c+211,"top_veri core coggen[6] cog_ alu_zo",-1);
	vcdp->declBit  (c+650,"top_veri core coggen[6] cog_ wio",-1);
	vcdp->declBit  (c+503,"top_veri core coggen[6] cog_ setouta",-1);
	vcdp->declBit  (c+504,"top_veri core coggen[6] cog_ setdira",-1);
	vcdp->declBit  (c+505,"top_veri core coggen[6] cog_ setctra",-1);
	vcdp->declBit  (c+506,"top_veri core coggen[6] cog_ setctrb",-1);
	vcdp->declBit  (c+507,"top_veri core coggen[6] cog_ setfrqa",-1);
	vcdp->declBit  (c+508,"top_veri core coggen[6] cog_ setfrqb",-1);
	vcdp->declBit  (c+730,"top_veri core coggen[6] cog_ setphsa",-1);
	vcdp->declBit  (c+731,"top_veri core coggen[6] cog_ setphsb",-1);
	vcdp->declBit  (c+509,"top_veri core coggen[6] cog_ setvid",-1);
	vcdp->declBit  (c+510,"top_veri core coggen[6] cog_ setscl",-1);
	vcdp->declBit  (c+512,"top_veri core coggen[6] cog_ alu_wr",-1);
	vcdp->declBit  (c+651,"top_veri core coggen[6] cog_ ram_ena",-1);
	vcdp->declBit  (c+513,"top_veri core coggen[6] cog_ ram_w",-1);
	vcdp->declBus  (c+43,"top_veri core coggen[6] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+4328,"top_veri core coggen[6] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+732,"top_veri core coggen[6] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+839,"top_veri core coggen[6] cog_ outa",-1,31,0);
	vcdp->declBus  (c+929,"top_veri core coggen[6] cog_ dira",-1,31,0);
	vcdp->declQuad (c+840,"top_veri core coggen[6] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+320,"top_veri core coggen[6] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+367,"top_veri core coggen[6] cog_ plla",-1);
	vcdp->declQuad (c+842,"top_veri core coggen[6] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+321,"top_veri core coggen[6] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+368,"top_veri core coggen[6] cog_ pllb",-1);
	vcdp->declBit  (c+4329,"top_veri core coggen[6] cog_ vidack",-1);
	vcdp->declBus  (c+72,"top_veri core coggen[6] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+4330,"top_veri core coggen[6] cog_ s",-1,31,0);
	vcdp->declBus  (c+4331,"top_veri core coggen[6] cog_ d",-1,31,0);
	vcdp->declBus  (c+844,"top_veri core coggen[6] cog_ ix",-1,31,0);
	vcdp->declBus  (c+845,"top_veri core coggen[6] cog_ sy",-1,31,0);
	vcdp->declBus  (c+44,"top_veri core coggen[6] cog_ sx",-1,31,0);
	vcdp->declBit  (c+934,"top_veri core coggen[6] cog_ cancel",-1);
	vcdp->declBus  (c+501,"top_veri core coggen[6] cog_ condx",-1,3,0);
	vcdp->declBit  (c+4332,"top_veri core coggen[6] cog_ dz",-1);
	vcdp->declBus  (c+652,"top_veri core coggen[6] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+653,"top_veri core coggen[6] cog_ jump",-1);
	vcdp->declBit  (c+1047,"top_veri core coggen[6] cog_ match",-1);
	vcdp->declBit  (c+245,"top_veri core coggen[6] cog_ waitx",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[6] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+651,"top_veri core coggen[6] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+513,"top_veri core coggen[6] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+43,"top_veri core coggen[6] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+732,"top_veri core coggen[6] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+4328,"top_veri core coggen[6] cog_ cog_ram_ q",-1,31,0);
	vcdp->declArray(c+4333,"top_veri core coggen[6] cog_ cog_ram_ r",-1,16383,0);
	vcdp->declBit  (c+76,"top_veri core coggen[6] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[6] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+548,"top_veri core coggen[6] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+505,"top_veri core coggen[6] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+507,"top_veri core coggen[6] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+730,"top_veri core coggen[6] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+732,"top_veri core coggen[6] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[6] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+840,"top_veri core coggen[6] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+320,"top_veri core coggen[6] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+367,"top_veri core coggen[6] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1077,"top_veri core coggen[6] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1048,"top_veri core coggen[6] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+846,"top_veri core coggen[6] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+119,"top_veri core coggen[6] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1078,"top_veri core coggen[6] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+369,"top_veri core coggen[6] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+91,"top_veri core coggen[6] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+322,"top_veri core coggen[6] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+323,"top_veri core coggen[6] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+989,"top_veri core coggen[6] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+991,"top_veri core coggen[6] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[6] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[6] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+548,"top_veri core coggen[6] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+506,"top_veri core coggen[6] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+508,"top_veri core coggen[6] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+731,"top_veri core coggen[6] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+732,"top_veri core coggen[6] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[6] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+842,"top_veri core coggen[6] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+321,"top_veri core coggen[6] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+368,"top_veri core coggen[6] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1079,"top_veri core coggen[6] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1049,"top_veri core coggen[6] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+847,"top_veri core coggen[6] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+121,"top_veri core coggen[6] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1080,"top_veri core coggen[6] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+370,"top_veri core coggen[6] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+92,"top_veri core coggen[6] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+324,"top_veri core coggen[6] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+325,"top_veri core coggen[6] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+992,"top_veri core coggen[6] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+994,"top_veri core coggen[6] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[6] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+367,"top_veri core coggen[6] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+548,"top_veri core coggen[6] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+509,"top_veri core coggen[6] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+510,"top_veri core coggen[6] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+732,"top_veri core coggen[6] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+4330,"top_veri core coggen[6] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+4331,"top_veri core coggen[6] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[6] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+368,"top_veri core coggen[6] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+4329,"top_veri core coggen[6] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+72,"top_veri core coggen[6] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+5393,"top_veri core coggen[6] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+4845,"top_veri core coggen[6] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1165,"top_veri core coggen[6] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1166,"top_veri core coggen[6] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1167,"top_veri core coggen[6] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1168,"top_veri core coggen[6] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1169,"top_veri core coggen[6] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+5394,"top_veri core coggen[6] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+45,"top_veri core coggen[6] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1170,"top_veri core coggen[6] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1171,"top_veri core coggen[6] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1164,"top_veri core coggen[6] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+4846,"top_veri core coggen[6] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1172,"top_veri core coggen[6] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1176,"top_veri core coggen[6] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1173,"top_veri core coggen[6] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1174,"top_veri core coggen[6] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+390,"top_veri core coggen[6] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+556,"top_veri core coggen[6] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1175,"top_veri core coggen[6] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+5427,"top_veri core coggen[6] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+46,"top_veri core coggen[6] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+73,"top_veri core coggen[6] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+502,"top_veri core coggen[6] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+4330,"top_veri core coggen[6] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+4331,"top_veri core coggen[6] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+931,"top_veri core coggen[6] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+930,"top_veri core coggen[6] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+932,"top_veri core coggen[6] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+933,"top_veri core coggen[6] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+771,"top_veri core coggen[6] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[6] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+512,"top_veri core coggen[6] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+732,"top_veri core coggen[6] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+282,"top_veri core coggen[6] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+211,"top_veri core coggen[6] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+398,"top_veri core coggen[6] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+201,"top_veri core coggen[6] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+654,"top_veri core coggen[6] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+656,"top_veri core coggen[6] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+511,"top_veri core coggen[6] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+412,"top_veri core coggen[6] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+209,"top_veri core coggen[6] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+4847,"top_veri core coggen[6] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+936,"top_veri core coggen[6] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+657,"top_veri core coggen[6] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+658,"top_veri core coggen[6] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+940,"top_veri core coggen[6] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+659,"top_veri core coggen[6] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+210,"top_veri core coggen[6] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+660,"top_veri core coggen[6] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+661,"top_veri core coggen[6] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+733,"top_veri core coggen[6] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+735,"top_veri core coggen[6] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+736,"top_veri core coggen[6] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+737,"top_veri core coggen[6] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+738,"top_veri core coggen[6] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+413,"top_veri core coggen[6] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1020,"top_veri core coggen[7] cog_ nres",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[7] cog_ clk_pll",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[7] cog_ clk_cog",-1);
	vcdp->declBit  (c+1085,"top_veri core coggen[7] cog_ ena_bus",-1);
	vcdp->declBit  (c+383,"top_veri core coggen[7] cog_ ptr_w",-1);
	vcdp->declBus  (c+1023,"top_veri core coggen[7] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+549,"top_veri core coggen[7] cog_ ena",-1);
	vcdp->declBit  (c+1011,"top_veri core coggen[7] cog_ bus_sel",-1);
	vcdp->declBit  (c+947,"top_veri core coggen[7] cog_ bus_r",-1);
	vcdp->declBit  (c+270,"top_veri core coggen[7] cog_ bus_e",-1);
	vcdp->declBit  (c+271,"top_veri core coggen[7] cog_ bus_w",-1);
	vcdp->declBus  (c+272,"top_veri core coggen[7] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+770,"top_veri core coggen[7] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+1019,"top_veri core coggen[7] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+771,"top_veri core coggen[7] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[7] cog_ bus_c",-1);
	vcdp->declBit  (c+232,"top_veri core coggen[7] cog_ bus_ack",-1);
	vcdp->declBus  (c+1021,"top_veri core coggen[7] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[7] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+371,"top_veri core coggen[7] cog_ pll_out",-1);
	vcdp->declBus  (c+3,"top_veri core coggen[7] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+59,"top_veri core coggen[7] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+941,"top_veri core coggen[7] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+5417,"top_veri core coggen[7] cog_ oh",-1,31,0);
	vcdp->declBus  (c+5418,"top_veri core coggen[7] cog_ ol",-1,31,0);
	vcdp->declBus  (c+5419,"top_veri core coggen[7] cog_ wz",-1,31,0);
	vcdp->declBus  (c+5420,"top_veri core coggen[7] cog_ wc",-1,31,0);
	vcdp->declBus  (c+5421,"top_veri core coggen[7] cog_ wr",-1,31,0);
	vcdp->declBus  (c+5422,"top_veri core coggen[7] cog_ im",-1,31,0);
	vcdp->declBus  (c+5423,"top_veri core coggen[7] cog_ ch",-1,31,0);
	vcdp->declBus  (c+5424,"top_veri core coggen[7] cog_ cl",-1,31,0);
	vcdp->declBus  (c+5425,"top_veri core coggen[7] cog_ dh",-1,31,0);
	vcdp->declBus  (c+5426,"top_veri core coggen[7] cog_ dl",-1,31,0);
	vcdp->declBus  (c+5404,"top_veri core coggen[7] cog_ sh",-1,31,0);
	vcdp->declBus  (c+5416,"top_veri core coggen[7] cog_ sl",-1,31,0);
	vcdp->declBus  (c+762,"top_veri core coggen[7] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+5395,"top_veri core coggen[7] cog_ m",-1,4,0);
	vcdp->declBit  (c+248,"top_veri core coggen[7] cog_ waiti",-1);
	vcdp->declBit  (c+942,"top_veri core coggen[7] cog_ run",-1);
	vcdp->declBus  (c+47,"top_veri core coggen[7] cog_ px",-1,8,0);
	vcdp->declBus  (c+943,"top_veri core coggen[7] cog_ p",-1,8,0);
	vcdp->declBit  (c+944,"top_veri core coggen[7] cog_ c",-1);
	vcdp->declBit  (c+945,"top_veri core coggen[7] cog_ z",-1);
	vcdp->declBus  (c+514,"top_veri core coggen[7] cog_ i",-1,31,0);
	vcdp->declBit  (c+662,"top_veri core coggen[7] cog_ cond",-1);
	vcdp->declBit  (c+663,"top_veri core coggen[7] cog_ jump_cancel",-1);
	vcdp->declBit  (c+283,"top_veri core coggen[7] cog_ alu_co",-1);
	vcdp->declBit  (c+222,"top_veri core coggen[7] cog_ alu_zo",-1);
	vcdp->declBit  (c+664,"top_veri core coggen[7] cog_ wio",-1);
	vcdp->declBit  (c+517,"top_veri core coggen[7] cog_ setouta",-1);
	vcdp->declBit  (c+518,"top_veri core coggen[7] cog_ setdira",-1);
	vcdp->declBit  (c+519,"top_veri core coggen[7] cog_ setctra",-1);
	vcdp->declBit  (c+520,"top_veri core coggen[7] cog_ setctrb",-1);
	vcdp->declBit  (c+521,"top_veri core coggen[7] cog_ setfrqa",-1);
	vcdp->declBit  (c+522,"top_veri core coggen[7] cog_ setfrqb",-1);
	vcdp->declBit  (c+739,"top_veri core coggen[7] cog_ setphsa",-1);
	vcdp->declBit  (c+740,"top_veri core coggen[7] cog_ setphsb",-1);
	vcdp->declBit  (c+523,"top_veri core coggen[7] cog_ setvid",-1);
	vcdp->declBit  (c+524,"top_veri core coggen[7] cog_ setscl",-1);
	vcdp->declBit  (c+526,"top_veri core coggen[7] cog_ alu_wr",-1);
	vcdp->declBit  (c+665,"top_veri core coggen[7] cog_ ram_ena",-1);
	vcdp->declBit  (c+527,"top_veri core coggen[7] cog_ ram_w",-1);
	vcdp->declBus  (c+48,"top_veri core coggen[7] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+4851,"top_veri core coggen[7] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+741,"top_veri core coggen[7] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+848,"top_veri core coggen[7] cog_ outa",-1,31,0);
	vcdp->declBus  (c+941,"top_veri core coggen[7] cog_ dira",-1,31,0);
	vcdp->declQuad (c+849,"top_veri core coggen[7] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+326,"top_veri core coggen[7] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+371,"top_veri core coggen[7] cog_ plla",-1);
	vcdp->declQuad (c+851,"top_veri core coggen[7] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+327,"top_veri core coggen[7] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+372,"top_veri core coggen[7] cog_ pllb",-1);
	vcdp->declBit  (c+4852,"top_veri core coggen[7] cog_ vidack",-1);
	vcdp->declBus  (c+74,"top_veri core coggen[7] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+4853,"top_veri core coggen[7] cog_ s",-1,31,0);
	vcdp->declBus  (c+4854,"top_veri core coggen[7] cog_ d",-1,31,0);
	vcdp->declBus  (c+853,"top_veri core coggen[7] cog_ ix",-1,31,0);
	vcdp->declBus  (c+854,"top_veri core coggen[7] cog_ sy",-1,31,0);
	vcdp->declBus  (c+49,"top_veri core coggen[7] cog_ sx",-1,31,0);
	vcdp->declBit  (c+946,"top_veri core coggen[7] cog_ cancel",-1);
	vcdp->declBus  (c+515,"top_veri core coggen[7] cog_ condx",-1,3,0);
	vcdp->declBit  (c+4855,"top_veri core coggen[7] cog_ dz",-1);
	vcdp->declBus  (c+666,"top_veri core coggen[7] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+667,"top_veri core coggen[7] cog_ jump",-1);
	vcdp->declBit  (c+1050,"top_veri core coggen[7] cog_ match",-1);
	vcdp->declBit  (c+247,"top_veri core coggen[7] cog_ waitx",-1);
	vcdp->declBit  (c+76,"top_veri core coggen[7] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+665,"top_veri core coggen[7] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+527,"top_veri core coggen[7] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+48,"top_veri core coggen[7] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+741,"top_veri core coggen[7] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+4851,"top_veri core coggen[7] cog_ cog_ram_ q",-1,31,0);
	vcdp->declArray(c+4856,"top_veri core coggen[7] cog_ cog_ram_ r",-1,16383,0);
	vcdp->declBit  (c+76,"top_veri core coggen[7] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[7] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+549,"top_veri core coggen[7] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+519,"top_veri core coggen[7] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+521,"top_veri core coggen[7] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+739,"top_veri core coggen[7] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+741,"top_veri core coggen[7] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[7] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+849,"top_veri core coggen[7] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+326,"top_veri core coggen[7] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+371,"top_veri core coggen[7] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1081,"top_veri core coggen[7] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1051,"top_veri core coggen[7] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+855,"top_veri core coggen[7] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+123,"top_veri core coggen[7] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1082,"top_veri core coggen[7] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+373,"top_veri core coggen[7] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+93,"top_veri core coggen[7] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+328,"top_veri core coggen[7] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+329,"top_veri core coggen[7] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+995,"top_veri core coggen[7] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+997,"top_veri core coggen[7] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[7] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+2,"top_veri core coggen[7] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+549,"top_veri core coggen[7] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+520,"top_veri core coggen[7] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+522,"top_veri core coggen[7] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+740,"top_veri core coggen[7] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+741,"top_veri core coggen[7] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+3,"top_veri core coggen[7] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+851,"top_veri core coggen[7] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+327,"top_veri core coggen[7] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+372,"top_veri core coggen[7] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1083,"top_veri core coggen[7] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1052,"top_veri core coggen[7] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+856,"top_veri core coggen[7] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+125,"top_veri core coggen[7] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1084,"top_veri core coggen[7] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+374,"top_veri core coggen[7] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+94,"top_veri core coggen[7] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+330,"top_veri core coggen[7] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+331,"top_veri core coggen[7] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+998,"top_veri core coggen[7] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+1000,"top_veri core coggen[7] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+76,"top_veri core coggen[7] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+371,"top_veri core coggen[7] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+549,"top_veri core coggen[7] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+523,"top_veri core coggen[7] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+524,"top_veri core coggen[7] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+741,"top_veri core coggen[7] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+4853,"top_veri core coggen[7] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+4854,"top_veri core coggen[7] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+346,"top_veri core coggen[7] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+372,"top_veri core coggen[7] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+4852,"top_veri core coggen[7] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+74,"top_veri core coggen[7] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+5396,"top_veri core coggen[7] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+5368,"top_veri core coggen[7] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1178,"top_veri core coggen[7] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1179,"top_veri core coggen[7] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1180,"top_veri core coggen[7] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1181,"top_veri core coggen[7] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1182,"top_veri core coggen[7] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+5397,"top_veri core coggen[7] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+50,"top_veri core coggen[7] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1183,"top_veri core coggen[7] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1184,"top_veri core coggen[7] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1177,"top_veri core coggen[7] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+5369,"top_veri core coggen[7] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1185,"top_veri core coggen[7] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1189,"top_veri core coggen[7] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1186,"top_veri core coggen[7] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1187,"top_veri core coggen[7] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+391,"top_veri core coggen[7] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+557,"top_veri core coggen[7] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1188,"top_veri core coggen[7] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+5427,"top_veri core coggen[7] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+51,"top_veri core coggen[7] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+75,"top_veri core coggen[7] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+516,"top_veri core coggen[7] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+4853,"top_veri core coggen[7] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+4854,"top_veri core coggen[7] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+943,"top_veri core coggen[7] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+942,"top_veri core coggen[7] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+944,"top_veri core coggen[7] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+945,"top_veri core coggen[7] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+771,"top_veri core coggen[7] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1022,"top_veri core coggen[7] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+526,"top_veri core coggen[7] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+741,"top_veri core coggen[7] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+283,"top_veri core coggen[7] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+222,"top_veri core coggen[7] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+399,"top_veri core coggen[7] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+212,"top_veri core coggen[7] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+668,"top_veri core coggen[7] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+670,"top_veri core coggen[7] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+525,"top_veri core coggen[7] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+414,"top_veri core coggen[7] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+220,"top_veri core coggen[7] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+5370,"top_veri core coggen[7] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+948,"top_veri core coggen[7] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+671,"top_veri core coggen[7] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+672,"top_veri core coggen[7] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+952,"top_veri core coggen[7] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+673,"top_veri core coggen[7] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+221,"top_veri core coggen[7] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+674,"top_veri core coggen[7] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+675,"top_veri core coggen[7] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+742,"top_veri core coggen[7] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+744,"top_veri core coggen[7] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+745,"top_veri core coggen[7] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+746,"top_veri core coggen[7] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+747,"top_veri core coggen[7] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+415,"top_veri core coggen[7] cog_ cog_alu_ add_c",-1);
	vcdp->declBus  (c+5404,"$unit HUB_RAM_KL",-1,31,0);
	vcdp->declBus  (c+5404,"$unit HUB_ROM_KL",-1,31,0);
	vcdp->declArray(c+5405,"$unit HUB_ROM_INIT",-1,271,0);
    }
}

void Vtop_veri::traceFullThis__1(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp130,127,0,4);
    VL_SIGW(__Vtemp133,255,0,8);
    VL_SIGW(__Vtemp134,127,0,4);
    VL_SIGW(__Vtemp137,255,0,8);
    VL_SIGW(__Vtemp138,127,0,4);
    VL_SIGW(__Vtemp141,255,0,8);
    VL_SIGW(__Vtemp142,127,0,4);
    VL_SIGW(__Vtemp145,255,0,8);
    VL_SIGW(__Vtemp146,127,0,4);
    VL_SIGW(__Vtemp149,255,0,8);
    VL_SIGW(__Vtemp150,127,0,4);
    VL_SIGW(__Vtemp153,255,0,8);
    VL_SIGW(__Vtemp154,127,0,4);
    VL_SIGW(__Vtemp157,255,0,8);
    VL_SIGW(__Vtemp158,127,0,4);
    VL_SIGW(__Vtemp161,255,0,8);
    VL_SIGW(__Vtemp163,127,0,4);
    VL_SIGW(__Vtemp165,127,0,4);
    VL_SIGW(__Vtemp167,127,0,4);
    VL_SIGW(__Vtemp169,127,0,4);
    VL_SIGW(__Vtemp171,127,0,4);
    VL_SIGW(__Vtemp173,127,0,4);
    VL_SIGW(__Vtemp175,127,0,4);
    VL_SIGW(__Vtemp177,127,0,4);
    VL_SIGW(__Vtemp179,127,0,4);
    VL_SIGW(__Vtemp181,127,0,4);
    VL_SIGW(__Vtemp183,127,0,4);
    VL_SIGW(__Vtemp185,127,0,4);
    VL_SIGW(__Vtemp187,127,0,4);
    VL_SIGW(__Vtemp189,127,0,4);
    VL_SIGW(__Vtemp191,127,0,4);
    VL_SIGW(__Vtemp193,127,0,4);
    VL_SIGW(__Vtemp194,287,0,9);
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->top_veri__DOT__pin_out),32);
	vcdp->fullBit  (c+2,(vlTOPp->top_veri__DOT__clk_pll));
	vcdp->fullBus  (c+3,(vlTOPp->top_veri__DOT__pin_in),32);
	vcdp->fullArray(c+4,(vlTOPp->top_veri__DOT__core__DOT__outx),256);
	vcdp->fullBus  (c+12,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+13,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+14,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+15,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+16,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+17,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+18,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+19,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+20,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+21,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+22,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+23,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+24,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+25,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+26,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+27,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+28,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+29,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+30,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+31,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+32,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+33,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+34,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+35,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+36,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+37,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+38,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+39,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+40,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+41,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+42,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+43,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+44,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+45,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+46,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+47,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+48,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+49,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+50,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+51,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+52,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+53,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+54,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+55,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+56,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+57,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+58,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+59,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+60,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+61,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+62,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+63,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+64,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+65,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+66,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+67,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+68,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+69,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+70,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+71,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+72,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+73,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+74,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+75,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBit  (c+76,(vlTOPp->top_veri__DOT__clk_cog));
	vcdp->fullBus  (c+77,(vlTOPp->top_veri__DOT__clkgen__DOT__clksel),5);
	vcdp->fullBus  (c+78,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__mem_q),32);
	vcdp->fullBit  (c+79,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+80,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+81,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+82,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+83,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+84,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+85,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+86,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+87,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+88,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+89,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+90,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+91,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+92,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+93,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+94,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullQuad (c+95,((((QData)((IData)((0x92U 
						 | (((2U 
						      == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						     << 0x1fU) 
						    | ((0x40000000U 
							& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							   << 0x1eU)) 
						       | (((2U 
							    == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							   << 0x1cU) 
							  | ((0x2000000U 
							      & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								 << 0x19U)) 
							     | ((0x1000000U 
								 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0x18U)) 
								| ((0x400000U 
								    & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								       << 0x16U)) 
								   | (((1U 
									== (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								       << 0x13U) 
								      | ((0x40000U 
									  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									     << 0x12U)) 
									 | (((1U 
									      == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									     << 0x10U) 
									    | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
									       | ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				<< 0x10U) | (QData)((IData)(
							    (0x4920U 
							     | ((0x8000U 
								 & ((IData)(
									    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
									     >> 0x1fU)) 
								    << 0xfU)) 
								| ((0x1000U 
								    & ((IData)(
									       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
								       << 0xcU)) 
								   | ((0x400U 
								       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla)) 
									  << 0xaU)) 
								      | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla) 
									  << 9U) 
									 | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla) 
									    << 6U)))))))))),48);
	vcdp->fullQuad (c+97,((((QData)((IData)((0x92U 
						 | (((2U 
						      == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						     << 0x1fU) 
						    | ((0x40000000U 
							& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							   << 0x1eU)) 
						       | (((2U 
							    == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							   << 0x1cU) 
							  | ((0x2000000U 
							      & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								 << 0x19U)) 
							     | ((0x1000000U 
								 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0x18U)) 
								| ((0x400000U 
								    & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								       << 0x16U)) 
								   | (((1U 
									== (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								       << 0x13U) 
								      | ((0x40000U 
									  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									     << 0x12U)) 
									 | (((1U 
									      == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									     << 0x10U) 
									    | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
									       | ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				<< 0x10U) | (QData)((IData)(
							    (0x4920U 
							     | ((0x8000U 
								 & ((IData)(
									    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
									     >> 0x1fU)) 
								    << 0xfU)) 
								| ((0x1000U 
								    & ((IData)(
									       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
								       << 0xcU)) 
								   | ((0x400U 
								       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb)) 
									  << 0xaU)) 
								      | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb) 
									  << 9U) 
									 | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb) 
									    << 6U)))))))))),48);
	vcdp->fullQuad (c+99,((((QData)((IData)((0x92U 
						 | (((2U 
						      == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						     << 0x1fU) 
						    | ((0x40000000U 
							& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							   << 0x1eU)) 
						       | (((2U 
							    == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							   << 0x1cU) 
							  | ((0x2000000U 
							      & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								 << 0x19U)) 
							     | ((0x1000000U 
								 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0x18U)) 
								| ((0x400000U 
								    & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								       << 0x16U)) 
								   | (((1U 
									== (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								       << 0x13U) 
								      | ((0x40000U 
									  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									     << 0x12U)) 
									 | (((1U 
									      == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									     << 0x10U) 
									    | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
									       | ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				<< 0x10U) | (QData)((IData)(
							    (0x4920U 
							     | ((0x8000U 
								 & ((IData)(
									    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
									     >> 0x1fU)) 
								    << 0xfU)) 
								| ((0x1000U 
								    & ((IData)(
									       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
								       << 0xcU)) 
								   | ((0x400U 
								       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla)) 
									  << 0xaU)) 
								      | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla) 
									  << 9U) 
									 | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla) 
									    << 6U)))))))))),48);
	vcdp->fullQuad (c+101,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+103,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+105,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+107,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+109,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+111,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+113,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+115,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+117,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+119,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+121,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+123,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+125,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullArray(c+127,(vlTOPp->top_veri__DOT__core__DOT__dirx),256);
	VL_EXTEND_WQ(124,62, __Vtemp130, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)))));
	__Vtemp133[0U] = __Vtemp130[0U];
	__Vtemp133[1U] = __Vtemp130[1U];
	__Vtemp133[2U] = __Vtemp130[2U];
	__Vtemp133[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp130[3U]);
	__Vtemp133[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp133[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp133[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp133[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+135,(__Vtemp133),248);
	vcdp->fullBus  (c+143,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+144,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+145,((1U & ((~ (IData)((0U 
						  != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp134, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)))));
	__Vtemp137[0U] = __Vtemp134[0U];
	__Vtemp137[1U] = __Vtemp134[1U];
	__Vtemp137[2U] = __Vtemp134[2U];
	__Vtemp137[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp134[3U]);
	__Vtemp137[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp137[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp137[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp137[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+146,(__Vtemp137),248);
	vcdp->fullBus  (c+154,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+155,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+156,((1U & ((~ (IData)((0U 
						  != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp138, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)))));
	__Vtemp141[0U] = __Vtemp138[0U];
	__Vtemp141[1U] = __Vtemp138[1U];
	__Vtemp141[2U] = __Vtemp138[2U];
	__Vtemp141[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp138[3U]);
	__Vtemp141[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp141[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp141[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp141[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+157,(__Vtemp141),248);
	vcdp->fullBus  (c+165,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+166,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+167,((1U & ((~ (IData)((0U 
						  != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp142, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)))));
	__Vtemp145[0U] = __Vtemp142[0U];
	__Vtemp145[1U] = __Vtemp142[1U];
	__Vtemp145[2U] = __Vtemp142[2U];
	__Vtemp145[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp142[3U]);
	__Vtemp145[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp145[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp145[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp145[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+168,(__Vtemp145),248);
	vcdp->fullBus  (c+176,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+177,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+178,((1U & ((~ (IData)((0U 
						  != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp146, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)))));
	__Vtemp149[0U] = __Vtemp146[0U];
	__Vtemp149[1U] = __Vtemp146[1U];
	__Vtemp149[2U] = __Vtemp146[2U];
	__Vtemp149[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp146[3U]);
	__Vtemp149[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp149[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp149[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp149[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+179,(__Vtemp149),248);
	vcdp->fullBus  (c+187,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+188,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+189,((1U & ((~ (IData)((0U 
						  != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp150, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)))));
	__Vtemp153[0U] = __Vtemp150[0U];
	__Vtemp153[1U] = __Vtemp150[1U];
	__Vtemp153[2U] = __Vtemp150[2U];
	__Vtemp153[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp150[3U]);
	__Vtemp153[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp153[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp153[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp153[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+190,(__Vtemp153),248);
	vcdp->fullBus  (c+198,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+199,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+200,((1U & ((~ (IData)((0U 
						  != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp154, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)))));
	__Vtemp157[0U] = __Vtemp154[0U];
	__Vtemp157[1U] = __Vtemp154[1U];
	__Vtemp157[2U] = __Vtemp154[2U];
	__Vtemp157[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp154[3U]);
	__Vtemp157[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp157[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp157[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp157[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+201,(__Vtemp157),248);
	vcdp->fullBus  (c+209,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+210,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+211,((1U & ((~ (IData)((0U 
						  != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp158, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)))));
	__Vtemp161[0U] = __Vtemp158[0U];
	__Vtemp161[1U] = __Vtemp158[1U];
	__Vtemp161[2U] = __Vtemp158[2U];
	__Vtemp161[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp158[3U]);
	__Vtemp161[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp161[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp161[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp161[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+212,(__Vtemp161),248);
	vcdp->fullBus  (c+220,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+221,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+222,((1U & ((~ (IData)((0U 
						  != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	vcdp->fullBus  (c+223,(vlTOPp->top_veri__DOT__core__DOT__bus_ack),8);
	vcdp->fullBit  (c+224,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__mem_w));
	vcdp->fullBit  (c+225,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack))));
	vcdp->fullBit  (c+226,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				      >> 1U))));
	vcdp->fullBit  (c+227,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				      >> 2U))));
	vcdp->fullBit  (c+228,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				      >> 3U))));
	vcdp->fullBit  (c+229,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				      >> 4U))));
	vcdp->fullBit  (c+230,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				      >> 5U))));
	vcdp->fullBit  (c+231,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				      >> 6U))));
	vcdp->fullBit  (c+232,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				      >> 7U))));
	vcdp->fullBit  (c+233,((1U & ((0U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+234,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack))
				    : ((0x1eU == (0x1fU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))
				        ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
				        : ((0x3eU == 
					    (0x3fU 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
					    ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
					    : ((0x3fU 
						== 
						(0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					       & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+235,((1U & ((0U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					     >> 1U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+236,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					  >> 1U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+237,((1U & ((0U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					     >> 2U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+238,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					  >> 2U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+239,((1U & ((0U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					     >> 3U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+240,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					  >> 3U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+241,((1U & ((0U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					     >> 4U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+242,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					  >> 4U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+243,((1U & ((0U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					     >> 5U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+244,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					  >> 5U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+245,((1U & ((0U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					     >> 6U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+246,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					  >> 6U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+247,((1U & ((0U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					     >> 7U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+248,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
					  >> 7U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+249,(((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				& ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1cU))) 
				   & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m) 
				      >> 4U)))));
	vcdp->fullBit  (c+250,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      & (~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					    >> 0x17U))))));
	vcdp->fullBus  (c+251,((3U & ((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				       ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+252,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 1U) & ((0U == (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+253,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 1U) & (~ 
						 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+254,((3U & ((2U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				       ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+255,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 2U) & ((0U == (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+256,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 2U) & (~ 
						 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+257,((3U & ((4U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				       ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+258,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 3U) & ((0U == (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+259,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 3U) & (~ 
						 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+260,((3U & ((8U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				       ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+261,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 4U) & ((0U == (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+262,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 4U) & (~ 
						 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+263,((3U & ((0x10U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				       ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+264,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 5U) & ((0U == (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+265,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 5U) & (~ 
						 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+266,((3U & ((0x20U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				       ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+267,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 6U) & ((0U == (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+268,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 6U) & (~ 
						 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+269,((3U & ((0x40U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				       ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+270,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 7U) & ((0U == (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+271,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 7U) & (~ 
						 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+272,((3U & ((0x80U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				       ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBus  (c+273,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__mem_wb),4);
	vcdp->fullBus  (c+274,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__mem_d),32);
	vcdp->fullBus  (c+275,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ramq),32);
	vcdp->fullBit  (c+276,((1U & ((0U == (7U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+277,((1U & ((0U == (7U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+278,((1U & ((0U == (7U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+279,((1U & ((0U == (7U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+280,((1U & ((0U == (7U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+281,((1U & ((0U == (7U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+282,((1U & ((0U == (7U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+283,((1U & ((0U == (7U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBus  (c+284,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+285,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+286,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+287,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+288,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+289,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+290,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+291,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+292,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+293,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+294,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+295,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+296,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+297,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+298,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+299,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+300,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+301,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+302,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+303,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+304,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+305,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+306,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+307,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+308,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+309,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+310,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+311,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+312,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+313,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+314,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+315,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+316,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+317,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+318,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+319,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+320,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+321,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+322,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+323,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+324,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+325,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+326,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+327,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+328,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+329,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+330,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+331,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+332,(vlTOPp->top_veri__DOT__pin_dir),32);
	vcdp->fullBus  (c+333,(vlTOPp->top_veri__DOT__core__DOT__bus_r),8);
	vcdp->fullBit  (c+334,((0U != (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_r))));
	vcdp->fullBit  (c+335,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys));
	vcdp->fullBus  (c+336,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc),8);
	vcdp->fullBit  (c+337,((0xffU == (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc))));
	vcdp->fullBus  (c+338,(((0xfU == (0xfU & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc)))
				 ? ((3U == (3U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc) 
						  >> 4U)))
				     ? ((0x40U & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc))
					 ? 7U : 6U)
				     : ((0x10U & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc))
					 ? 5U : 4U))
				 : ((3U == (3U & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc)))
				     ? ((4U & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc))
					 ? 3U : 2U)
				     : ((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc))
					 ? 1U : 0U)))),3);
	vcdp->fullBus  (c+339,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__num),3);
	vcdp->fullBus  (c+340,((0xffU & ((IData)(1U) 
					 << (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__num)))),8);
	vcdp->fullBit  (c+341,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__cog_start));
	vcdp->fullBit  (c+342,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+343,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+344,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+345,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBus  (c+346,(vlTOPp->top_veri__DOT__core__DOT__pll),8);
	vcdp->fullBit  (c+347,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+348,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+349,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+350,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+351,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+352,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+353,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+354,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+355,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+356,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+357,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+358,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+359,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+360,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+361,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+362,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+363,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+364,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+365,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+366,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+367,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+368,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+369,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+370,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+371,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+372,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+373,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+374,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBus  (c+375,(vlTOPp->top_veri__DOT__core__DOT__ptr_w),8);
	vcdp->fullBit  (c+376,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w))));
	vcdp->fullBit  (c+377,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				      >> 1U))));
	vcdp->fullBit  (c+378,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				      >> 2U))));
	vcdp->fullBit  (c+379,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				      >> 3U))));
	vcdp->fullBit  (c+380,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				      >> 4U))));
	vcdp->fullBit  (c+381,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				      >> 5U))));
	vcdp->fullBit  (c+382,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				      >> 6U))));
	vcdp->fullBit  (c+383,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				      >> 7U))));
	vcdp->fullBus  (c+384,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+385,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+386,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+387,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+388,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+389,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+390,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+391,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+392,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+393,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+394,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+395,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+396,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+397,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+398,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+399,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBit  (c+400,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+401,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+402,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+403,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+404,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+405,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+406,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+407,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+408,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+409,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+410,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+411,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+412,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+413,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+414,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+415,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBus  (c+416,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+417,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+418,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+419,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+420,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+421,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+422,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+423,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+424,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+425,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+426,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+427,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+428,((1U & ((4U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+429,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+430,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+431,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+432,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+433,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+434,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+435,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+436,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+437,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+438,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+439,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+440,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+441,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+442,((1U & ((4U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+443,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+444,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+445,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+446,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+447,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+448,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+449,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+450,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+451,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+452,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+453,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+454,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+455,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+456,((1U & ((4U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+457,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+458,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+459,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+460,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+461,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+462,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+463,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+464,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+465,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+466,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+467,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+468,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+469,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+470,((1U & ((4U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+471,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+472,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+473,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+474,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+475,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+476,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+477,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+478,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+479,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+480,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+481,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+482,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+483,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+484,((1U & ((4U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+485,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+486,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+487,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+488,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+489,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+490,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+491,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+492,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+493,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+494,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+495,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+496,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+497,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+498,((1U & ((4U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+499,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+500,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+501,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+502,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+503,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+504,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+505,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+506,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+507,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+508,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+509,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+510,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+511,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+512,((1U & ((4U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+513,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+514,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+515,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+516,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+517,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+518,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+519,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+520,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+521,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+522,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+523,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+524,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+525,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+526,((1U & ((4U == (0xfU 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+527,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullArray(c+528,(vlTOPp->top_veri__DOT__core__DOT__bus_a),128);
	vcdp->fullBus  (c+532,((0xffffU & ((((((((vlTOPp->top_veri__DOT__core__DOT__bus_a[3U] 
						  >> 0x10U) 
						 | vlTOPp->top_veri__DOT__core__DOT__bus_a[3U]) 
						| ((vlTOPp->top_veri__DOT__core__DOT__bus_a[3U] 
						    << 0x10U) 
						   | (vlTOPp->top_veri__DOT__core__DOT__bus_a[2U] 
						      >> 0x10U))) 
					       | vlTOPp->top_veri__DOT__core__DOT__bus_a[2U]) 
					      | ((vlTOPp->top_veri__DOT__core__DOT__bus_a[2U] 
						  << 0x10U) 
						 | (vlTOPp->top_veri__DOT__core__DOT__bus_a[1U] 
						    >> 0x10U))) 
					     | vlTOPp->top_veri__DOT__core__DOT__bus_a[1U]) 
					    | ((vlTOPp->top_veri__DOT__core__DOT__bus_a[1U] 
						<< 0x10U) 
					       | (vlTOPp->top_veri__DOT__core__DOT__bus_a[0U] 
						  >> 0x10U))) 
					   | vlTOPp->top_veri__DOT__core__DOT__bus_a[0U]))),16);
	vcdp->fullArray(c+533,(vlTOPp->top_veri__DOT__core__DOT__bus_d),256);
	vcdp->fullBus  (c+541,((((((((vlTOPp->top_veri__DOT__core__DOT__bus_d[7U] 
				      | vlTOPp->top_veri__DOT__core__DOT__bus_d[6U]) 
				     | vlTOPp->top_veri__DOT__core__DOT__bus_d[5U]) 
				    | vlTOPp->top_veri__DOT__core__DOT__bus_d[4U]) 
				   | vlTOPp->top_veri__DOT__core__DOT__bus_d[3U]) 
				  | vlTOPp->top_veri__DOT__core__DOT__bus_d[2U]) 
				 | vlTOPp->top_veri__DOT__core__DOT__bus_d[1U]) 
				| vlTOPp->top_veri__DOT__core__DOT__bus_d[0U])),32);
	vcdp->fullBit  (c+542,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+543,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+544,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+545,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+546,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+547,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+548,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+549,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBus  (c+550,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+551,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+552,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+553,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+554,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+555,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+556,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+557,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+558,(vlTOPp->top_veri__DOT__core__DOT__bus_e),8);
	vcdp->fullBus  (c+559,(vlTOPp->top_veri__DOT__core__DOT__bus_w),8);
	vcdp->fullBus  (c+560,(vlTOPp->top_veri__DOT__core__DOT__bus_s),16);
	vcdp->fullBit  (c+561,((0U != (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_e))));
	vcdp->fullBit  (c+562,((0U != (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_w))));
	vcdp->fullBus  (c+563,((3U & (((((((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s) 
					     >> 0xeU) 
					    | ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s) 
					       >> 0xcU)) 
					   | ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s) 
					      >> 0xaU)) 
					  | ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s) 
					     >> 8U)) 
					 | ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s) 
					    >> 6U)) 
					| ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s) 
					   >> 4U)) 
				       | ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s) 
					  >> 2U)) | (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s)))),2);
	vcdp->fullBit  (c+564,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+565,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+566,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+567,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+568,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+569,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+570,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+572,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+573,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+574,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+575,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+576,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+577,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+578,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+579,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+580,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+581,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+582,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+583,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+584,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+586,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+587,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+588,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+589,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+590,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+591,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+592,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+593,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+594,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+595,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+596,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+597,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+598,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+600,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+601,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+602,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+603,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+604,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+605,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+606,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+607,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+608,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+609,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+610,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+611,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+612,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+614,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+615,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+616,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+617,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+618,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+619,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+620,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+621,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+622,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+623,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+624,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+625,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+626,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+628,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+629,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+630,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+631,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+632,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+633,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+634,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+635,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+636,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+637,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+638,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+639,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+640,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+642,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+643,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+644,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+645,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+646,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+647,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+648,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+649,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+650,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+651,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+652,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+653,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+654,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+656,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+657,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+658,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+659,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+660,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+661,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+662,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+663,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+664,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+665,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+666,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+667,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+668,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+670,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+671,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+672,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+673,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+674,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+675,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+676,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+677,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+678,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+679,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+681,(((0x80000000U & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+682,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+683,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+684,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+685,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+686,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+687,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+688,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+690,(((0x80000000U & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+691,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+692,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+693,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+694,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+695,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+696,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+697,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+699,(((0x80000000U & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+700,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+701,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+702,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+703,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+704,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+705,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+706,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+708,(((0x80000000U & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+709,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+710,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+711,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+712,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+713,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+714,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+715,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+717,(((0x80000000U & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+718,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+719,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+720,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+721,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+722,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+723,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+724,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+726,(((0x80000000U & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+727,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+728,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+729,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+730,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+731,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+732,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+733,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+735,(((0x80000000U & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+736,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+737,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+738,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+739,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+740,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+741,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+742,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+744,(((0x80000000U & ((IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+745,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+746,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+747,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBus  (c+748,(vlTOPp->top_veri__DOT__clkgen__DOT__cfgx),7);
	vcdp->fullBus  (c+749,(vlTOPp->top_veri__DOT__clkgen__DOT__divide),13);
	vcdp->fullBus  (c+750,(vlTOPp->top_veri__DOT__core__DOT__cog_ena),8);
	vcdp->fullBit  (c+751,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ec));
	vcdp->fullBit  (c+752,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ed));
	vcdp->fullBus  (c+753,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__cog_e),8);
	vcdp->fullBus  (c+754,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__lock_e),8);
	vcdp->fullBus  (c+755,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+756,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+757,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+758,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+759,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+760,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+761,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+762,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+763,((0xffffU & ((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					    ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run)
					        ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBus  (c+764,((0xffffU & ((2U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					    ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run)
					        ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBus  (c+765,((0xffffU & ((4U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					    ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run)
					        ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBus  (c+766,((0xffffU & ((8U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					    ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run)
					        ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBus  (c+767,((0xffffU & ((0x10U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					    ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run)
					        ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBus  (c+768,((0xffffU & ((0x20U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					    ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run)
					        ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBus  (c+769,((0xffffU & ((0x40U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					    ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run)
					        ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBus  (c+770,((0xffffU & ((0x80U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					    ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run)
					        ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBus  (c+771,(vlTOPp->top_veri__DOT__core__DOT__bus_q),32);
	vcdp->fullBit  (c+772,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__rc));
	vcdp->fullBit  (c+773,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__wc));
	vcdp->fullBus  (c+774,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sc),2);
	vcdp->fullBit  (c+775,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__rd));
	vcdp->fullBus  (c+776,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sd),2);
	vcdp->fullBus  (c+777,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ad),2);
	vcdp->fullBus  (c+778,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_q),3);
	vcdp->fullBus  (c+779,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__ram_q3),8);
	vcdp->fullBus  (c+780,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__ram_q2),8);
	vcdp->fullBus  (c+781,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__ram_q1),8);
	vcdp->fullBus  (c+782,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__ram_q0),8);
	vcdp->fullBus  (c+783,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__rom_q),32);
	vcdp->fullBus  (c+784,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__mem),2);
	vcdp->fullBus  (c+785,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+786,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+788,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+790,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+791,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+792,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+793,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+794,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+795,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+797,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+799,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+800,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+801,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+802,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+803,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+804,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+806,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+808,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+809,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+810,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+811,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+812,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+813,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+815,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+817,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+818,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+819,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+820,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+821,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+822,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+824,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+826,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+827,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+828,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+829,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+830,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+831,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+833,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+835,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+836,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+837,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+838,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+839,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+840,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+842,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+844,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+845,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+846,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+847,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+848,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+849,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+851,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+853,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+854,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+855,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+856,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+857,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+858,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+859,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+860,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+861,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+862,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cancel));
	vcdp->fullBit  (c+863,(((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				& (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run))));
	__Vtemp163[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s));
	__Vtemp163[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)));
	__Vtemp163[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))))));
	__Vtemp163[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+864,(__Vtemp163),128);
	vcdp->fullBus  (c+868,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+869,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+870,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+871,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+872,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+873,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+874,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cancel));
	vcdp->fullBit  (c+875,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 1U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run))));
	__Vtemp165[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s));
	__Vtemp165[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)));
	__Vtemp165[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))))));
	__Vtemp165[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+876,(__Vtemp165),128);
	vcdp->fullBus  (c+880,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+881,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+882,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+883,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+884,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+885,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+886,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cancel));
	vcdp->fullBit  (c+887,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 2U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run))));
	__Vtemp167[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s));
	__Vtemp167[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)));
	__Vtemp167[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))))));
	__Vtemp167[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+888,(__Vtemp167),128);
	vcdp->fullBus  (c+892,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+893,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+894,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+895,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+896,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+897,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+898,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cancel));
	vcdp->fullBit  (c+899,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 3U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run))));
	__Vtemp169[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s));
	__Vtemp169[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)));
	__Vtemp169[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))))));
	__Vtemp169[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+900,(__Vtemp169),128);
	vcdp->fullBus  (c+904,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+905,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+906,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+907,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+908,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+909,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+910,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cancel));
	vcdp->fullBit  (c+911,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 4U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run))));
	__Vtemp171[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s));
	__Vtemp171[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)));
	__Vtemp171[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))))));
	__Vtemp171[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+912,(__Vtemp171),128);
	vcdp->fullBus  (c+916,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+917,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+918,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+919,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+920,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+921,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+922,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cancel));
	vcdp->fullBit  (c+923,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 5U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run))));
	__Vtemp173[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s));
	__Vtemp173[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)));
	__Vtemp173[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))))));
	__Vtemp173[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+924,(__Vtemp173),128);
	vcdp->fullBus  (c+928,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+929,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+930,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+931,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+932,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+933,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+934,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cancel));
	vcdp->fullBit  (c+935,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 6U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run))));
	__Vtemp175[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s));
	__Vtemp175[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)));
	__Vtemp175[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))))));
	__Vtemp175[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+936,(__Vtemp175),128);
	vcdp->fullBus  (c+940,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+941,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+942,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+943,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+944,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+945,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+946,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cancel));
	vcdp->fullBit  (c+947,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				 >> 7U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run))));
	__Vtemp177[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s));
	__Vtemp177[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)));
	__Vtemp177[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))))));
	__Vtemp177[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+948,(__Vtemp177),128);
	vcdp->fullBus  (c+952,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullQuad (c+953,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+955,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+956,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+958,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+959,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+961,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+962,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+964,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+965,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+967,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+968,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+970,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+971,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+973,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+974,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+976,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+977,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+979,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+980,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+982,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+983,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+985,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+986,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+988,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+989,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+991,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+992,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+994,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+995,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+997,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+998,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+1000,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						  >> 0x1cU)))),8);
	vcdp->fullBus  (c+1001,(vlTOPp->top_veri__DOT__cfg),8);
	vcdp->fullBus  (c+1002,((0x7fU & (IData)(vlTOPp->top_veri__DOT__cfg))),7);
	vcdp->fullBus  (c+1003,(vlTOPp->top_veri__DOT__core__DOT__bus_sel),8);
	vcdp->fullBit  (c+1004,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))));
	vcdp->fullBit  (c+1005,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 1U))));
	vcdp->fullBit  (c+1006,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 2U))));
	vcdp->fullBit  (c+1007,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 3U))));
	vcdp->fullBit  (c+1008,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 4U))));
	vcdp->fullBit  (c+1009,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 5U))));
	vcdp->fullBit  (c+1010,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 6U))));
	vcdp->fullBit  (c+1011,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				       >> 7U))));
	vcdp->fullBus  (c+1012,(((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				  ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d
				  : 0U)),32);
	vcdp->fullBus  (c+1013,(((2U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				  ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d
				  : 0U)),32);
	vcdp->fullBus  (c+1014,(((4U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				  ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d
				  : 0U)),32);
	vcdp->fullBus  (c+1015,(((8U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				  ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d
				  : 0U)),32);
	vcdp->fullBus  (c+1016,(((0x10U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				  ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d
				  : 0U)),32);
	vcdp->fullBus  (c+1017,(((0x20U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				  ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d
				  : 0U)),32);
	vcdp->fullBus  (c+1018,(((0x40U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				  ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d
				  : 0U)),32);
	vcdp->fullBus  (c+1019,(((0x80U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				  ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d
				  : 0U)),32);
	vcdp->fullBit  (c+1020,(vlTOPp->top_veri__DOT__nres));
	vcdp->fullBus  (c+1021,(vlTOPp->top_veri__DOT__core__DOT__cnt),32);
	vcdp->fullBit  (c+1022,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_c));
	vcdp->fullBus  (c+1023,((0xfffffffU & (vlTOPp->top_veri__DOT__core__DOT__hub___DOT__dc 
					       >> 4U))),28);
	vcdp->fullBus  (c+1024,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ac),16);
	vcdp->fullBus  (c+1025,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__dc),32);
	vcdp->fullBus  (c+1026,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__lock_state),8);
	vcdp->fullBit  (c+1027,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__lock_state) 
				       >> (7U & vlTOPp->top_veri__DOT__core__DOT__hub___DOT__dc)))));
	vcdp->fullBus  (c+1028,((0x3fffU & ((IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ac) 
					    >> 2U))),14);
	vcdp->fullBit  (c+1029,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1030,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1031,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1032,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1033,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1034,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1035,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1036,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1037,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1038,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1039,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1040,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1041,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1042,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1043,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1044,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1045,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1046,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1047,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1048,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1049,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1050,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1051,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1052,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBus  (c+1053,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1054,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1055,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1056,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1057,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1058,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1059,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1060,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1061,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1062,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1063,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1064,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1065,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1066,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1067,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1068,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1069,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1070,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1071,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1072,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1073,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1074,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1075,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1076,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1077,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1078,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1079,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1080,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1081,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1082,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1083,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1084,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBit  (c+1085,(vlTOPp->top_veri__DOT__core__DOT__ena_bus));
	vcdp->fullBit  (c+1086,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1087,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1088,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1089,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1090,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1091,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1092,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1093,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1094,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1095,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1096,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1097,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1098,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1099,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1100,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1101,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1102,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1103,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1104,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1105,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1106,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1107,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1108,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1109,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1110,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1111,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1112,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1113,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1114,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1115,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1116,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1117,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1118,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1119,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1120,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1121,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1122,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1123,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1124,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1125,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1126,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1127,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1128,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1129,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1130,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1131,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1132,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1133,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1134,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1135,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1136,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1137,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1138,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1139,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1140,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1141,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1142,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1143,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1144,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1145,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1146,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1147,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1148,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1149,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1150,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1151,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1152,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1153,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1154,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1155,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1156,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1157,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1158,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1159,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1160,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1161,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1162,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1163,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1164,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1165,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1166,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1167,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1168,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1169,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1170,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1171,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1172,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1173,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1174,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1175,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1176,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1177,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1178,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1179,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1180,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1181,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1182,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1183,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1184,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1185,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1186,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1187,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1188,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1189,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBus  (c+1190,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+1191,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+1192,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+1193,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+1194,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullArray(c+1195,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->fullBus  (c+1707,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+1708,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp179[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s));
	__Vtemp179[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s);
	__Vtemp179[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))));
	__Vtemp179[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+1709,(__Vtemp179),128);
	vcdp->fullBus  (c+1713,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+1714,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+1715,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+1716,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+1717,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullArray(c+1718,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->fullBus  (c+2230,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+2231,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp181[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s));
	__Vtemp181[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s);
	__Vtemp181[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))));
	__Vtemp181[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+2232,(__Vtemp181),128);
	vcdp->fullBus  (c+2236,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+2237,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+2238,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+2239,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+2240,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullArray(c+2241,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->fullBus  (c+2753,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+2754,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp183[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s));
	__Vtemp183[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s);
	__Vtemp183[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))));
	__Vtemp183[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+2755,(__Vtemp183),128);
	vcdp->fullBus  (c+2759,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+2760,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+2761,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+2762,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+2763,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullArray(c+2764,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->fullBus  (c+3276,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+3277,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp185[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s));
	__Vtemp185[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s);
	__Vtemp185[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))));
	__Vtemp185[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+3278,(__Vtemp185),128);
	vcdp->fullBus  (c+3282,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+3283,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+3284,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+3285,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+3286,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullArray(c+3287,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->fullBus  (c+3799,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+3800,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp187[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s));
	__Vtemp187[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s);
	__Vtemp187[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))));
	__Vtemp187[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+3801,(__Vtemp187),128);
	vcdp->fullBus  (c+3805,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+3806,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+3807,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+3808,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+3809,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullArray(c+3810,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->fullBus  (c+4322,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+4323,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp189[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s));
	__Vtemp189[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s);
	__Vtemp189[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))));
	__Vtemp189[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+4324,(__Vtemp189),128);
	vcdp->fullBus  (c+4328,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+4329,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+4330,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+4331,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+4332,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullArray(c+4333,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->fullBus  (c+4845,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+4846,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp191[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s));
	__Vtemp191[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s);
	__Vtemp191[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))));
	__Vtemp191[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+4847,(__Vtemp191),128);
	vcdp->fullBus  (c+4851,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+4852,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+4853,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+4854,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+4855,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullArray(c+4856,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->fullBus  (c+5368,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+5369,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp193[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s));
	__Vtemp193[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s);
	__Vtemp193[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))));
	__Vtemp193[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+5370,(__Vtemp193),128);
	vcdp->fullBus  (c+5374,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+5375,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+5376,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+5377,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+5378,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+5379,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+5380,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+5381,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+5382,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+5383,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+5384,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+5385,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+5386,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+5387,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+5388,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+5389,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+5390,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+5391,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+5392,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+5393,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+5394,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+5395,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+5396,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+5397,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBit  (c+5398,(vlTOPp->clock));
	vcdp->fullBit  (c+5399,(vlTOPp->inp_resn));
	vcdp->fullBus  (c+5400,(vlTOPp->io),32);
	vcdp->fullBit  (c+5401,(vlTOPp->sda_in));
	vcdp->fullBus  (c+5402,(vlTOPp->ledg),8);
	vcdp->fullBit  (c+5403,((1U & (~ (IData)(vlTOPp->inp_resn)))));
	vcdp->fullBus  (c+5404,(8U),32);
	__Vtemp194[0U] = 0x2e686578U;
	__Vtemp194[1U] = 0x626c6564U;
	__Vtemp194[2U] = 0x6372616dU;
	__Vtemp194[3U] = 0x66665f73U;
	__Vtemp194[4U] = 0x305f6666U;
	__Vtemp194[5U] = 0x5f383030U;
	__Vtemp194[6U] = 0x2f726f6dU;
	__Vtemp194[7U] = 0x2f48444cU;
	__Vtemp194[8U] = 0x2e2eU;
	vcdp->fullArray(c+5405,(__Vtemp194),272);
	vcdp->fullBus  (c+5414,(vlTOPp->top_veri__DOT__reset_cnt),24);
	vcdp->fullBit  (c+5415,(vlTOPp->top_veri__DOT__reset_to));
	vcdp->fullBus  (c+5416,(0U),32);
	vcdp->fullBus  (c+5417,(0x1fU),32);
	vcdp->fullBus  (c+5418,(0x1aU),32);
	vcdp->fullBus  (c+5419,(0x19U),32);
	vcdp->fullBus  (c+5420,(0x18U),32);
	vcdp->fullBus  (c+5421,(0x17U),32);
	vcdp->fullBus  (c+5422,(0x16U),32);
	vcdp->fullBus  (c+5423,(0x15U),32);
	vcdp->fullBus  (c+5424,(0x12U),32);
	vcdp->fullBus  (c+5425,(0x11U),32);
	vcdp->fullBus  (c+5426,(9U),32);
	vcdp->fullQuad (c+5427,(VL_ULL(0x725bb76d2240)),48);
    }
}
