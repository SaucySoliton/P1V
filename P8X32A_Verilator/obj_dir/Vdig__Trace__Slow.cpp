// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdig__Syms.h"


//======================

void Vdig::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vdig::traceInit, &Vdig::traceFull, &Vdig::traceChg, this);
}
void Vdig::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vdig* t=(Vdig*)userthis;
    Vdig__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vdig::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vdig* t=(Vdig*)userthis;
    Vdig__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vdig::traceInitThis(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vdig::traceFullThis(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vdig::traceInitThis__1(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1291,"nres",-1);
	vcdp->declBus  (c+1292,"cfg",-1,7,0);
	vcdp->declBit  (c+1293,"clk_cog",-1);
	vcdp->declBit  (c+1294,"clk_pll",-1);
	vcdp->declBus  (c+1295,"pin_in",-1,31,0);
	vcdp->declBus  (c+1296,"pin_out",-1,31,0);
	vcdp->declBus  (c+1297,"pin_dir",-1,31,0);
	vcdp->declBus  (c+1298,"cog_led",-1,7,0);
	vcdp->declBit  (c+1291,"dig nres",-1);
	vcdp->declBus  (c+1292,"dig cfg",-1,7,0);
	vcdp->declBit  (c+1293,"dig clk_cog",-1);
	vcdp->declBit  (c+1294,"dig clk_pll",-1);
	vcdp->declBus  (c+1295,"dig pin_in",-1,31,0);
	vcdp->declBus  (c+1296,"dig pin_out",-1,31,0);
	vcdp->declBus  (c+1297,"dig pin_dir",-1,31,0);
	vcdp->declBus  (c+1298,"dig cog_led",-1,7,0);
	vcdp->declBus  (c+1299,"dig INVERT_COG_LEDS",-1,31,0);
	vcdp->declBus  (c+1300,"dig NUMCOGS",-1,31,0);
	vcdp->declBus  (c+1010,"dig cnt",-1,31,0);
	vcdp->declBit  (c+1074,"dig ena_bus",-1);
	vcdp->declBus  (c+828,"dig bus_sel",-1,7,0);
	vcdp->declBus  (c+279,"dig bus_r",-1,7,0);
	vcdp->declBus  (c+552,"dig bus_e",-1,7,0);
	vcdp->declBus  (c+553,"dig bus_w",-1,7,0);
	vcdp->declBus  (c+554,"dig bus_s",-1,15,0);
	vcdp->declArray(c+522,"dig bus_a",-1,127,0);
	vcdp->declArray(c+527,"dig bus_d",-1,255,0);
	vcdp->declBus  (c+742,"dig bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig bus_c",-1);
	vcdp->declBus  (c+243,"dig bus_ack",-1,7,0);
	vcdp->declBus  (c+337,"dig pll",-1,7,0);
	vcdp->declArray(c+1,"dig outx",-1,255,0);
	vcdp->declArray(c+147,"dig dirx",-1,255,0);
	vcdp->declBus  (c+366,"dig ptr_w",-1,7,0);
	vcdp->declBus  (c+1012,"dig ptr_d",-1,27,0);
	vcdp->declBus  (c+829,"dig cog_ena",-1,7,0);
	// Tracing: dig i // Ignored: Verilator trace_off at ../HDL/../HDL/dig.v:95
	vcdp->declBit  (c+280,"dig hub_bus_r",-1);
	vcdp->declBit  (c+555,"dig hub_bus_e",-1);
	vcdp->declBit  (c+556,"dig hub_bus_w",-1);
	vcdp->declBus  (c+557,"dig hub_bus_s",-1,1,0);
	vcdp->declBus  (c+526,"dig hub_bus_a",-1,15,0);
	vcdp->declBus  (c+535,"dig hub_bus_d",-1,31,0);
	vcdp->declBit  (c+1293,"dig hub_ clk_cog",-1);
	vcdp->declBit  (c+1074,"dig hub_ ena_bus",-1);
	vcdp->declBit  (c+1291,"dig hub_ nres",-1);
	vcdp->declBus  (c+828,"dig hub_ bus_sel",-1,7,0);
	vcdp->declBit  (c+280,"dig hub_ bus_r",-1);
	vcdp->declBit  (c+555,"dig hub_ bus_e",-1);
	vcdp->declBit  (c+556,"dig hub_ bus_w",-1);
	vcdp->declBus  (c+557,"dig hub_ bus_s",-1,1,0);
	vcdp->declBus  (c+526,"dig hub_ bus_a",-1,15,0);
	vcdp->declBus  (c+535,"dig hub_ bus_d",-1,31,0);
	vcdp->declBus  (c+742,"dig hub_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig hub_ bus_c",-1);
	vcdp->declBus  (c+243,"dig hub_ bus_ack",-1,7,0);
	vcdp->declBus  (c+829,"dig hub_ cog_ena",-1,7,0);
	vcdp->declBus  (c+366,"dig hub_ ptr_w",-1,7,0);
	vcdp->declBus  (c+1012,"dig hub_ ptr_d",-1,27,0);
	vcdp->declBus  (c+1292,"dig hub_ cfg",-1,7,0);
	vcdp->declBit  (c+743,"dig hub_ rc",-1);
	vcdp->declBit  (c+830,"dig hub_ ec",-1);
	vcdp->declBit  (c+744,"dig hub_ wc",-1);
	vcdp->declBus  (c+745,"dig hub_ sc",-1,1,0);
	vcdp->declBus  (c+1013,"dig hub_ ac",-1,15,0);
	vcdp->declBus  (c+1014,"dig hub_ dc",-1,31,0);
	vcdp->declBit  (c+122,"dig hub_ mem_w",-1);
	vcdp->declBus  (c+268,"dig hub_ mem_wb",-1,3,0);
	vcdp->declBus  (c+269,"dig hub_ mem_d",-1,31,0);
	vcdp->declBus  (c+73,"dig hub_ mem_q",-1,31,0);
	vcdp->declBit  (c+746,"dig hub_ rd",-1);
	vcdp->declBit  (c+831,"dig hub_ ed",-1);
	vcdp->declBus  (c+747,"dig hub_ sd",-1,1,0);
	vcdp->declBus  (c+748,"dig hub_ ad",-1,1,0);
	vcdp->declBus  (c+749,"dig hub_ sys_q",-1,2,0);
	vcdp->declBit  (c+1011,"dig hub_ sys_c",-1);
	vcdp->declBus  (c+270,"dig hub_ ramq",-1,31,0);
	vcdp->declBus  (c+832,"dig hub_ cog_e",-1,7,0);
	vcdp->declBus  (c+833,"dig hub_ lock_e",-1,7,0);
	vcdp->declBit  (c+329,"dig hub_ sys",-1);
	vcdp->declBus  (c+330,"dig hub_ enc",-1,7,0);
	vcdp->declBit  (c+331,"dig hub_ all",-1);
	vcdp->declBus  (c+332,"dig hub_ newx",-1,2,0);
	vcdp->declBus  (c+367,"dig hub_ num",-1,2,0);
	vcdp->declBus  (c+368,"dig hub_ num_dcd",-1,7,0);
	vcdp->declBit  (c+369,"dig hub_ cog_start",-1);
	vcdp->declBus  (c+1015,"dig hub_ lock_state",-1,7,0);
	vcdp->declBit  (c+1016,"dig hub_ lock_mux",-1);
	vcdp->declBit  (c+1293,"dig hub_ hub_mem_ clk_cog",-1);
	vcdp->declBit  (c+1074,"dig hub_ hub_mem_ ena_bus",-1);
	vcdp->declBit  (c+122,"dig hub_ hub_mem_ w",-1);
	vcdp->declBus  (c+268,"dig hub_ hub_mem_ wb",-1,3,0);
	vcdp->declBus  (c+1017,"dig hub_ hub_mem_ a",-1,13,0);
	vcdp->declBus  (c+269,"dig hub_ hub_mem_ d",-1,31,0);
	vcdp->declBus  (c+73,"dig hub_ hub_mem_ q",-1,31,0);
	// Tracing: dig hub_ hub_mem_ ram3 // Ignored: Wide memory > --trace-max-array ents at ../HDL/hub_mem.v:42
	// Tracing: dig hub_ hub_mem_ ram2 // Ignored: Wide memory > --trace-max-array ents at ../HDL/hub_mem.v:43
	// Tracing: dig hub_ hub_mem_ ram1 // Ignored: Wide memory > --trace-max-array ents at ../HDL/hub_mem.v:44
	// Tracing: dig hub_ hub_mem_ ram0 // Ignored: Wide memory > --trace-max-array ents at ../HDL/hub_mem.v:45
	vcdp->declBus  (c+750,"dig hub_ hub_mem_ ram_q3",-1,7,0);
	vcdp->declBus  (c+751,"dig hub_ hub_mem_ ram_q2",-1,7,0);
	vcdp->declBus  (c+752,"dig hub_ hub_mem_ ram_q1",-1,7,0);
	vcdp->declBus  (c+753,"dig hub_ hub_mem_ ram_q0",-1,7,0);
	// Tracing: dig hub_ hub_mem_ rom // Ignored: Wide memory > --trace-max-array ents at ../HDL/hub_mem.v:96
	vcdp->declBus  (c+754,"dig hub_ hub_mem_ rom_q",-1,31,0);
	vcdp->declBus  (c+755,"dig hub_ hub_mem_ mem",-1,1,0);
	vcdp->declBit  (c+1291,"dig coggen[0] cog_ nres",-1);
	vcdp->declBit  (c+1294,"dig coggen[0] cog_ clk_pll",-1);
	vcdp->declBit  (c+1293,"dig coggen[0] cog_ clk_cog",-1);
	vcdp->declBit  (c+1074,"dig coggen[0] cog_ ena_bus",-1);
	vcdp->declBit  (c+370,"dig coggen[0] cog_ ptr_w",-1);
	vcdp->declBus  (c+1012,"dig coggen[0] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+536,"dig coggen[0] cog_ ena",-1);
	vcdp->declBit  (c+834,"dig coggen[0] cog_ bus_sel",-1);
	vcdp->declBit  (c+842,"dig coggen[0] cog_ bus_r",-1);
	vcdp->declBit  (c+123,"dig coggen[0] cog_ bus_e",-1);
	vcdp->declBit  (c+124,"dig coggen[0] cog_ bus_w",-1);
	vcdp->declBus  (c+125,"dig coggen[0] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+843,"dig coggen[0] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+858,"dig coggen[0] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+742,"dig coggen[0] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[0] cog_ bus_c",-1);
	vcdp->declBit  (c+244,"dig coggen[0] cog_ bus_ack",-1);
	vcdp->declBus  (c+1010,"dig coggen[0] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[0] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+333,"dig coggen[0] cog_ pll_out",-1);
	vcdp->declBus  (c+1295,"dig coggen[0] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+49,"dig coggen[0] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+866,"dig coggen[0] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+1301,"dig coggen[0] cog_ oh",-1,31,0);
	vcdp->declBus  (c+1302,"dig coggen[0] cog_ ol",-1,31,0);
	vcdp->declBus  (c+1303,"dig coggen[0] cog_ wz",-1,31,0);
	vcdp->declBus  (c+1304,"dig coggen[0] cog_ wc",-1,31,0);
	vcdp->declBus  (c+1305,"dig coggen[0] cog_ wr",-1,31,0);
	vcdp->declBus  (c+1306,"dig coggen[0] cog_ im",-1,31,0);
	vcdp->declBus  (c+1307,"dig coggen[0] cog_ ch",-1,31,0);
	vcdp->declBus  (c+1308,"dig coggen[0] cog_ cl",-1,31,0);
	vcdp->declBus  (c+1309,"dig coggen[0] cog_ dh",-1,31,0);
	vcdp->declBus  (c+1310,"dig coggen[0] cog_ dl",-1,31,0);
	vcdp->declBus  (c+1300,"dig coggen[0] cog_ sh",-1,31,0);
	vcdp->declBus  (c+1299,"dig coggen[0] cog_ sl",-1,31,0);
	vcdp->declBus  (c+1002,"dig coggen[0] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+1267,"dig coggen[0] cog_ m",-1,4,0);
	vcdp->declBit  (c+253,"dig coggen[0] cog_ waiti",-1);
	vcdp->declBit  (c+867,"dig coggen[0] cog_ run",-1);
	vcdp->declBus  (c+9,"dig coggen[0] cog_ px",-1,8,0);
	vcdp->declBus  (c+868,"dig coggen[0] cog_ p",-1,8,0);
	vcdp->declBit  (c+869,"dig coggen[0] cog_ c",-1);
	vcdp->declBit  (c+870,"dig coggen[0] cog_ z",-1);
	vcdp->declBus  (c+410,"dig coggen[0] cog_ i",-1,31,0);
	vcdp->declBit  (c+558,"dig coggen[0] cog_ cond",-1);
	vcdp->declBit  (c+559,"dig coggen[0] cog_ jump_cancel",-1);
	vcdp->declBit  (c+271,"dig coggen[0] cog_ alu_co",-1);
	vcdp->declBit  (c+165,"dig coggen[0] cog_ alu_zo",-1);
	vcdp->declBit  (c+560,"dig coggen[0] cog_ wio",-1);
	vcdp->declBit  (c+413,"dig coggen[0] cog_ setouta",-1);
	vcdp->declBit  (c+414,"dig coggen[0] cog_ setdira",-1);
	vcdp->declBit  (c+415,"dig coggen[0] cog_ setctra",-1);
	vcdp->declBit  (c+416,"dig coggen[0] cog_ setctrb",-1);
	vcdp->declBit  (c+417,"dig coggen[0] cog_ setfrqa",-1);
	vcdp->declBit  (c+418,"dig coggen[0] cog_ setfrqb",-1);
	vcdp->declBit  (c+670,"dig coggen[0] cog_ setphsa",-1);
	vcdp->declBit  (c+671,"dig coggen[0] cog_ setphsb",-1);
	vcdp->declBit  (c+419,"dig coggen[0] cog_ setvid",-1);
	vcdp->declBit  (c+420,"dig coggen[0] cog_ setscl",-1);
	vcdp->declBit  (c+422,"dig coggen[0] cog_ alu_wr",-1);
	vcdp->declBit  (c+561,"dig coggen[0] cog_ ram_ena",-1);
	vcdp->declBit  (c+423,"dig coggen[0] cog_ ram_w",-1);
	vcdp->declBus  (c+10,"dig coggen[0] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+1179,"dig coggen[0] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+672,"dig coggen[0] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+756,"dig coggen[0] cog_ outa",-1,31,0);
	vcdp->declBus  (c+866,"dig coggen[0] cog_ dira",-1,31,0);
	vcdp->declQuad (c+757,"dig coggen[0] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+281,"dig coggen[0] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+333,"dig coggen[0] cog_ plla",-1);
	vcdp->declQuad (c+759,"dig coggen[0] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+282,"dig coggen[0] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+334,"dig coggen[0] cog_ pllb",-1);
	vcdp->declBit  (c+1180,"dig coggen[0] cog_ vidack",-1);
	vcdp->declBus  (c+57,"dig coggen[0] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+1181,"dig coggen[0] cog_ s",-1,31,0);
	vcdp->declBus  (c+1182,"dig coggen[0] cog_ d",-1,31,0);
	vcdp->declBus  (c+761,"dig coggen[0] cog_ ix",-1,31,0);
	vcdp->declBus  (c+762,"dig coggen[0] cog_ sy",-1,31,0);
	vcdp->declBus  (c+11,"dig coggen[0] cog_ sx",-1,31,0);
	vcdp->declBit  (c+871,"dig coggen[0] cog_ cancel",-1);
	vcdp->declBus  (c+411,"dig coggen[0] cog_ condx",-1,3,0);
	vcdp->declBit  (c+1183,"dig coggen[0] cog_ dz",-1);
	vcdp->declBus  (c+562,"dig coggen[0] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+563,"dig coggen[0] cog_ jump",-1);
	vcdp->declBit  (c+1018,"dig coggen[0] cog_ match",-1);
	vcdp->declBit  (c+252,"dig coggen[0] cog_ waitx",-1);
	vcdp->declBit  (c+1293,"dig coggen[0] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+561,"dig coggen[0] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+423,"dig coggen[0] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+10,"dig coggen[0] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+672,"dig coggen[0] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+1179,"dig coggen[0] cog_ cog_ram_ q",-1,31,0);
	// Tracing: dig coggen[0] cog_ cog_ram_ r // Ignored: Wide memory > --trace-max-array ents at ../HDL/cog_ram.v:40
	vcdp->declBit  (c+1293,"dig coggen[0] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[0] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+536,"dig coggen[0] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+415,"dig coggen[0] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+417,"dig coggen[0] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+670,"dig coggen[0] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+672,"dig coggen[0] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[0] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+757,"dig coggen[0] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+281,"dig coggen[0] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+333,"dig coggen[0] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1042,"dig coggen[0] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1019,"dig coggen[0] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+763,"dig coggen[0] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+90,"dig coggen[0] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1043,"dig coggen[0] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+335,"dig coggen[0] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+74,"dig coggen[0] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+283,"dig coggen[0] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+284,"dig coggen[0] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+954,"dig coggen[0] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+956,"dig coggen[0] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[0] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[0] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+536,"dig coggen[0] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+416,"dig coggen[0] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+418,"dig coggen[0] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+671,"dig coggen[0] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+672,"dig coggen[0] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[0] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+759,"dig coggen[0] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+282,"dig coggen[0] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+334,"dig coggen[0] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1044,"dig coggen[0] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1020,"dig coggen[0] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+764,"dig coggen[0] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+92,"dig coggen[0] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1045,"dig coggen[0] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+336,"dig coggen[0] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+75,"dig coggen[0] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+285,"dig coggen[0] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+286,"dig coggen[0] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+957,"dig coggen[0] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+959,"dig coggen[0] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[0] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+333,"dig coggen[0] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+536,"dig coggen[0] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+419,"dig coggen[0] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+420,"dig coggen[0] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+672,"dig coggen[0] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+1181,"dig coggen[0] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+1182,"dig coggen[0] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[0] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+334,"dig coggen[0] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+1180,"dig coggen[0] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+57,"dig coggen[0] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+1268,"dig coggen[0] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+1184,"dig coggen[0] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1076,"dig coggen[0] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1077,"dig coggen[0] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1078,"dig coggen[0] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1079,"dig coggen[0] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1080,"dig coggen[0] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+1269,"dig coggen[0] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+12,"dig coggen[0] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1081,"dig coggen[0] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1082,"dig coggen[0] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1075,"dig coggen[0] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+1185,"dig coggen[0] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1083,"dig coggen[0] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1087,"dig coggen[0] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1084,"dig coggen[0] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1085,"dig coggen[0] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+378,"dig coggen[0] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+544,"dig coggen[0] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1086,"dig coggen[0] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+1311,"dig coggen[0] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+13,"dig coggen[0] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+58,"dig coggen[0] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+412,"dig coggen[0] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+1181,"dig coggen[0] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+1182,"dig coggen[0] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+868,"dig coggen[0] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+867,"dig coggen[0] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+869,"dig coggen[0] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+870,"dig coggen[0] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+742,"dig coggen[0] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[0] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+422,"dig coggen[0] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+672,"dig coggen[0] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+271,"dig coggen[0] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+165,"dig coggen[0] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+386,"dig coggen[0] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+155,"dig coggen[0] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+564,"dig coggen[0] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+566,"dig coggen[0] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+421,"dig coggen[0] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+394,"dig coggen[0] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+163,"dig coggen[0] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+1186,"dig coggen[0] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+872,"dig coggen[0] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+567,"dig coggen[0] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+568,"dig coggen[0] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+876,"dig coggen[0] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+569,"dig coggen[0] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+164,"dig coggen[0] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+570,"dig coggen[0] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+571,"dig coggen[0] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+673,"dig coggen[0] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+675,"dig coggen[0] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+676,"dig coggen[0] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+677,"dig coggen[0] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+678,"dig coggen[0] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+395,"dig coggen[0] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1291,"dig coggen[1] cog_ nres",-1);
	vcdp->declBit  (c+1294,"dig coggen[1] cog_ clk_pll",-1);
	vcdp->declBit  (c+1293,"dig coggen[1] cog_ clk_cog",-1);
	vcdp->declBit  (c+1074,"dig coggen[1] cog_ ena_bus",-1);
	vcdp->declBit  (c+371,"dig coggen[1] cog_ ptr_w",-1);
	vcdp->declBus  (c+1012,"dig coggen[1] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+537,"dig coggen[1] cog_ ena",-1);
	vcdp->declBit  (c+835,"dig coggen[1] cog_ bus_sel",-1);
	vcdp->declBit  (c+844,"dig coggen[1] cog_ bus_r",-1);
	vcdp->declBit  (c+126,"dig coggen[1] cog_ bus_e",-1);
	vcdp->declBit  (c+127,"dig coggen[1] cog_ bus_w",-1);
	vcdp->declBus  (c+128,"dig coggen[1] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+845,"dig coggen[1] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+859,"dig coggen[1] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+742,"dig coggen[1] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[1] cog_ bus_c",-1);
	vcdp->declBit  (c+245,"dig coggen[1] cog_ bus_ack",-1);
	vcdp->declBus  (c+1010,"dig coggen[1] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[1] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+338,"dig coggen[1] cog_ pll_out",-1);
	vcdp->declBus  (c+1295,"dig coggen[1] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+50,"dig coggen[1] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+877,"dig coggen[1] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+1301,"dig coggen[1] cog_ oh",-1,31,0);
	vcdp->declBus  (c+1302,"dig coggen[1] cog_ ol",-1,31,0);
	vcdp->declBus  (c+1303,"dig coggen[1] cog_ wz",-1,31,0);
	vcdp->declBus  (c+1304,"dig coggen[1] cog_ wc",-1,31,0);
	vcdp->declBus  (c+1305,"dig coggen[1] cog_ wr",-1,31,0);
	vcdp->declBus  (c+1306,"dig coggen[1] cog_ im",-1,31,0);
	vcdp->declBus  (c+1307,"dig coggen[1] cog_ ch",-1,31,0);
	vcdp->declBus  (c+1308,"dig coggen[1] cog_ cl",-1,31,0);
	vcdp->declBus  (c+1309,"dig coggen[1] cog_ dh",-1,31,0);
	vcdp->declBus  (c+1310,"dig coggen[1] cog_ dl",-1,31,0);
	vcdp->declBus  (c+1300,"dig coggen[1] cog_ sh",-1,31,0);
	vcdp->declBus  (c+1299,"dig coggen[1] cog_ sl",-1,31,0);
	vcdp->declBus  (c+1003,"dig coggen[1] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+1270,"dig coggen[1] cog_ m",-1,4,0);
	vcdp->declBit  (c+255,"dig coggen[1] cog_ waiti",-1);
	vcdp->declBit  (c+878,"dig coggen[1] cog_ run",-1);
	vcdp->declBus  (c+14,"dig coggen[1] cog_ px",-1,8,0);
	vcdp->declBus  (c+879,"dig coggen[1] cog_ p",-1,8,0);
	vcdp->declBit  (c+880,"dig coggen[1] cog_ c",-1);
	vcdp->declBit  (c+881,"dig coggen[1] cog_ z",-1);
	vcdp->declBus  (c+424,"dig coggen[1] cog_ i",-1,31,0);
	vcdp->declBit  (c+572,"dig coggen[1] cog_ cond",-1);
	vcdp->declBit  (c+573,"dig coggen[1] cog_ jump_cancel",-1);
	vcdp->declBit  (c+272,"dig coggen[1] cog_ alu_co",-1);
	vcdp->declBit  (c+176,"dig coggen[1] cog_ alu_zo",-1);
	vcdp->declBit  (c+574,"dig coggen[1] cog_ wio",-1);
	vcdp->declBit  (c+427,"dig coggen[1] cog_ setouta",-1);
	vcdp->declBit  (c+428,"dig coggen[1] cog_ setdira",-1);
	vcdp->declBit  (c+429,"dig coggen[1] cog_ setctra",-1);
	vcdp->declBit  (c+430,"dig coggen[1] cog_ setctrb",-1);
	vcdp->declBit  (c+431,"dig coggen[1] cog_ setfrqa",-1);
	vcdp->declBit  (c+432,"dig coggen[1] cog_ setfrqb",-1);
	vcdp->declBit  (c+679,"dig coggen[1] cog_ setphsa",-1);
	vcdp->declBit  (c+680,"dig coggen[1] cog_ setphsb",-1);
	vcdp->declBit  (c+433,"dig coggen[1] cog_ setvid",-1);
	vcdp->declBit  (c+434,"dig coggen[1] cog_ setscl",-1);
	vcdp->declBit  (c+436,"dig coggen[1] cog_ alu_wr",-1);
	vcdp->declBit  (c+575,"dig coggen[1] cog_ ram_ena",-1);
	vcdp->declBit  (c+437,"dig coggen[1] cog_ ram_w",-1);
	vcdp->declBus  (c+15,"dig coggen[1] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+1190,"dig coggen[1] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+681,"dig coggen[1] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+765,"dig coggen[1] cog_ outa",-1,31,0);
	vcdp->declBus  (c+877,"dig coggen[1] cog_ dira",-1,31,0);
	vcdp->declQuad (c+766,"dig coggen[1] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+287,"dig coggen[1] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+338,"dig coggen[1] cog_ plla",-1);
	vcdp->declQuad (c+768,"dig coggen[1] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+288,"dig coggen[1] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+339,"dig coggen[1] cog_ pllb",-1);
	vcdp->declBit  (c+1191,"dig coggen[1] cog_ vidack",-1);
	vcdp->declBus  (c+59,"dig coggen[1] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+1192,"dig coggen[1] cog_ s",-1,31,0);
	vcdp->declBus  (c+1193,"dig coggen[1] cog_ d",-1,31,0);
	vcdp->declBus  (c+770,"dig coggen[1] cog_ ix",-1,31,0);
	vcdp->declBus  (c+771,"dig coggen[1] cog_ sy",-1,31,0);
	vcdp->declBus  (c+16,"dig coggen[1] cog_ sx",-1,31,0);
	vcdp->declBit  (c+882,"dig coggen[1] cog_ cancel",-1);
	vcdp->declBus  (c+425,"dig coggen[1] cog_ condx",-1,3,0);
	vcdp->declBit  (c+1194,"dig coggen[1] cog_ dz",-1);
	vcdp->declBus  (c+576,"dig coggen[1] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+577,"dig coggen[1] cog_ jump",-1);
	vcdp->declBit  (c+1021,"dig coggen[1] cog_ match",-1);
	vcdp->declBit  (c+254,"dig coggen[1] cog_ waitx",-1);
	vcdp->declBit  (c+1293,"dig coggen[1] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+575,"dig coggen[1] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+437,"dig coggen[1] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+15,"dig coggen[1] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+681,"dig coggen[1] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+1190,"dig coggen[1] cog_ cog_ram_ q",-1,31,0);
	// Tracing: dig coggen[1] cog_ cog_ram_ r // Ignored: Wide memory > --trace-max-array ents at ../HDL/cog_ram.v:40
	vcdp->declBit  (c+1293,"dig coggen[1] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[1] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+537,"dig coggen[1] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+429,"dig coggen[1] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+431,"dig coggen[1] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+679,"dig coggen[1] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+681,"dig coggen[1] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[1] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+766,"dig coggen[1] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+287,"dig coggen[1] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+338,"dig coggen[1] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1046,"dig coggen[1] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1022,"dig coggen[1] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+772,"dig coggen[1] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+94,"dig coggen[1] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1047,"dig coggen[1] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+340,"dig coggen[1] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+76,"dig coggen[1] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+289,"dig coggen[1] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+290,"dig coggen[1] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+960,"dig coggen[1] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+962,"dig coggen[1] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[1] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[1] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+537,"dig coggen[1] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+430,"dig coggen[1] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+432,"dig coggen[1] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+680,"dig coggen[1] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+681,"dig coggen[1] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[1] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+768,"dig coggen[1] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+288,"dig coggen[1] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+339,"dig coggen[1] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1048,"dig coggen[1] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1023,"dig coggen[1] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+773,"dig coggen[1] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+96,"dig coggen[1] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1049,"dig coggen[1] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+341,"dig coggen[1] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+77,"dig coggen[1] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+291,"dig coggen[1] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+292,"dig coggen[1] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+963,"dig coggen[1] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+965,"dig coggen[1] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[1] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+338,"dig coggen[1] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+537,"dig coggen[1] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+433,"dig coggen[1] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+434,"dig coggen[1] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+681,"dig coggen[1] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+1192,"dig coggen[1] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+1193,"dig coggen[1] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[1] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+339,"dig coggen[1] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+1191,"dig coggen[1] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+59,"dig coggen[1] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+1271,"dig coggen[1] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+1195,"dig coggen[1] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1089,"dig coggen[1] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1090,"dig coggen[1] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1091,"dig coggen[1] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1092,"dig coggen[1] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1093,"dig coggen[1] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+1272,"dig coggen[1] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+17,"dig coggen[1] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1094,"dig coggen[1] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1095,"dig coggen[1] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1088,"dig coggen[1] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+1196,"dig coggen[1] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1096,"dig coggen[1] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1100,"dig coggen[1] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1097,"dig coggen[1] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1098,"dig coggen[1] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+379,"dig coggen[1] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+545,"dig coggen[1] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1099,"dig coggen[1] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+1311,"dig coggen[1] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+18,"dig coggen[1] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+60,"dig coggen[1] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+426,"dig coggen[1] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+1192,"dig coggen[1] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+1193,"dig coggen[1] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+879,"dig coggen[1] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+878,"dig coggen[1] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+880,"dig coggen[1] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+881,"dig coggen[1] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+742,"dig coggen[1] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[1] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+436,"dig coggen[1] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+681,"dig coggen[1] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+272,"dig coggen[1] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+176,"dig coggen[1] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+387,"dig coggen[1] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+166,"dig coggen[1] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+578,"dig coggen[1] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+580,"dig coggen[1] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+435,"dig coggen[1] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+396,"dig coggen[1] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+174,"dig coggen[1] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+1197,"dig coggen[1] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+883,"dig coggen[1] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+581,"dig coggen[1] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+582,"dig coggen[1] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+887,"dig coggen[1] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+583,"dig coggen[1] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+175,"dig coggen[1] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+584,"dig coggen[1] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+585,"dig coggen[1] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+682,"dig coggen[1] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+684,"dig coggen[1] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+685,"dig coggen[1] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+686,"dig coggen[1] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+687,"dig coggen[1] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+397,"dig coggen[1] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1291,"dig coggen[2] cog_ nres",-1);
	vcdp->declBit  (c+1294,"dig coggen[2] cog_ clk_pll",-1);
	vcdp->declBit  (c+1293,"dig coggen[2] cog_ clk_cog",-1);
	vcdp->declBit  (c+1074,"dig coggen[2] cog_ ena_bus",-1);
	vcdp->declBit  (c+372,"dig coggen[2] cog_ ptr_w",-1);
	vcdp->declBus  (c+1012,"dig coggen[2] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+538,"dig coggen[2] cog_ ena",-1);
	vcdp->declBit  (c+836,"dig coggen[2] cog_ bus_sel",-1);
	vcdp->declBit  (c+846,"dig coggen[2] cog_ bus_r",-1);
	vcdp->declBit  (c+129,"dig coggen[2] cog_ bus_e",-1);
	vcdp->declBit  (c+130,"dig coggen[2] cog_ bus_w",-1);
	vcdp->declBus  (c+131,"dig coggen[2] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+847,"dig coggen[2] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+860,"dig coggen[2] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+742,"dig coggen[2] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[2] cog_ bus_c",-1);
	vcdp->declBit  (c+246,"dig coggen[2] cog_ bus_ack",-1);
	vcdp->declBus  (c+1010,"dig coggen[2] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[2] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+342,"dig coggen[2] cog_ pll_out",-1);
	vcdp->declBus  (c+1295,"dig coggen[2] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+51,"dig coggen[2] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+888,"dig coggen[2] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+1301,"dig coggen[2] cog_ oh",-1,31,0);
	vcdp->declBus  (c+1302,"dig coggen[2] cog_ ol",-1,31,0);
	vcdp->declBus  (c+1303,"dig coggen[2] cog_ wz",-1,31,0);
	vcdp->declBus  (c+1304,"dig coggen[2] cog_ wc",-1,31,0);
	vcdp->declBus  (c+1305,"dig coggen[2] cog_ wr",-1,31,0);
	vcdp->declBus  (c+1306,"dig coggen[2] cog_ im",-1,31,0);
	vcdp->declBus  (c+1307,"dig coggen[2] cog_ ch",-1,31,0);
	vcdp->declBus  (c+1308,"dig coggen[2] cog_ cl",-1,31,0);
	vcdp->declBus  (c+1309,"dig coggen[2] cog_ dh",-1,31,0);
	vcdp->declBus  (c+1310,"dig coggen[2] cog_ dl",-1,31,0);
	vcdp->declBus  (c+1300,"dig coggen[2] cog_ sh",-1,31,0);
	vcdp->declBus  (c+1299,"dig coggen[2] cog_ sl",-1,31,0);
	vcdp->declBus  (c+1004,"dig coggen[2] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+1273,"dig coggen[2] cog_ m",-1,4,0);
	vcdp->declBit  (c+257,"dig coggen[2] cog_ waiti",-1);
	vcdp->declBit  (c+889,"dig coggen[2] cog_ run",-1);
	vcdp->declBus  (c+19,"dig coggen[2] cog_ px",-1,8,0);
	vcdp->declBus  (c+890,"dig coggen[2] cog_ p",-1,8,0);
	vcdp->declBit  (c+891,"dig coggen[2] cog_ c",-1);
	vcdp->declBit  (c+892,"dig coggen[2] cog_ z",-1);
	vcdp->declBus  (c+438,"dig coggen[2] cog_ i",-1,31,0);
	vcdp->declBit  (c+586,"dig coggen[2] cog_ cond",-1);
	vcdp->declBit  (c+587,"dig coggen[2] cog_ jump_cancel",-1);
	vcdp->declBit  (c+273,"dig coggen[2] cog_ alu_co",-1);
	vcdp->declBit  (c+187,"dig coggen[2] cog_ alu_zo",-1);
	vcdp->declBit  (c+588,"dig coggen[2] cog_ wio",-1);
	vcdp->declBit  (c+441,"dig coggen[2] cog_ setouta",-1);
	vcdp->declBit  (c+442,"dig coggen[2] cog_ setdira",-1);
	vcdp->declBit  (c+443,"dig coggen[2] cog_ setctra",-1);
	vcdp->declBit  (c+444,"dig coggen[2] cog_ setctrb",-1);
	vcdp->declBit  (c+445,"dig coggen[2] cog_ setfrqa",-1);
	vcdp->declBit  (c+446,"dig coggen[2] cog_ setfrqb",-1);
	vcdp->declBit  (c+688,"dig coggen[2] cog_ setphsa",-1);
	vcdp->declBit  (c+689,"dig coggen[2] cog_ setphsb",-1);
	vcdp->declBit  (c+447,"dig coggen[2] cog_ setvid",-1);
	vcdp->declBit  (c+448,"dig coggen[2] cog_ setscl",-1);
	vcdp->declBit  (c+450,"dig coggen[2] cog_ alu_wr",-1);
	vcdp->declBit  (c+589,"dig coggen[2] cog_ ram_ena",-1);
	vcdp->declBit  (c+451,"dig coggen[2] cog_ ram_w",-1);
	vcdp->declBus  (c+20,"dig coggen[2] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+1201,"dig coggen[2] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+690,"dig coggen[2] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+774,"dig coggen[2] cog_ outa",-1,31,0);
	vcdp->declBus  (c+888,"dig coggen[2] cog_ dira",-1,31,0);
	vcdp->declQuad (c+775,"dig coggen[2] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+293,"dig coggen[2] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+342,"dig coggen[2] cog_ plla",-1);
	vcdp->declQuad (c+777,"dig coggen[2] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+294,"dig coggen[2] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+343,"dig coggen[2] cog_ pllb",-1);
	vcdp->declBit  (c+1202,"dig coggen[2] cog_ vidack",-1);
	vcdp->declBus  (c+61,"dig coggen[2] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+1203,"dig coggen[2] cog_ s",-1,31,0);
	vcdp->declBus  (c+1204,"dig coggen[2] cog_ d",-1,31,0);
	vcdp->declBus  (c+779,"dig coggen[2] cog_ ix",-1,31,0);
	vcdp->declBus  (c+780,"dig coggen[2] cog_ sy",-1,31,0);
	vcdp->declBus  (c+21,"dig coggen[2] cog_ sx",-1,31,0);
	vcdp->declBit  (c+893,"dig coggen[2] cog_ cancel",-1);
	vcdp->declBus  (c+439,"dig coggen[2] cog_ condx",-1,3,0);
	vcdp->declBit  (c+1205,"dig coggen[2] cog_ dz",-1);
	vcdp->declBus  (c+590,"dig coggen[2] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+591,"dig coggen[2] cog_ jump",-1);
	vcdp->declBit  (c+1024,"dig coggen[2] cog_ match",-1);
	vcdp->declBit  (c+256,"dig coggen[2] cog_ waitx",-1);
	vcdp->declBit  (c+1293,"dig coggen[2] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+589,"dig coggen[2] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+451,"dig coggen[2] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+20,"dig coggen[2] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+690,"dig coggen[2] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+1201,"dig coggen[2] cog_ cog_ram_ q",-1,31,0);
	// Tracing: dig coggen[2] cog_ cog_ram_ r // Ignored: Wide memory > --trace-max-array ents at ../HDL/cog_ram.v:40
	vcdp->declBit  (c+1293,"dig coggen[2] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[2] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+538,"dig coggen[2] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+443,"dig coggen[2] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+445,"dig coggen[2] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+688,"dig coggen[2] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+690,"dig coggen[2] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[2] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+775,"dig coggen[2] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+293,"dig coggen[2] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+342,"dig coggen[2] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1050,"dig coggen[2] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1025,"dig coggen[2] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+781,"dig coggen[2] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+98,"dig coggen[2] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1051,"dig coggen[2] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+344,"dig coggen[2] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+78,"dig coggen[2] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+295,"dig coggen[2] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+296,"dig coggen[2] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+966,"dig coggen[2] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+968,"dig coggen[2] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[2] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[2] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+538,"dig coggen[2] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+444,"dig coggen[2] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+446,"dig coggen[2] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+689,"dig coggen[2] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+690,"dig coggen[2] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[2] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+777,"dig coggen[2] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+294,"dig coggen[2] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+343,"dig coggen[2] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1052,"dig coggen[2] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1026,"dig coggen[2] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+782,"dig coggen[2] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+100,"dig coggen[2] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1053,"dig coggen[2] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+345,"dig coggen[2] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+79,"dig coggen[2] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+297,"dig coggen[2] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+298,"dig coggen[2] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+969,"dig coggen[2] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+971,"dig coggen[2] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[2] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+342,"dig coggen[2] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+538,"dig coggen[2] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+447,"dig coggen[2] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+448,"dig coggen[2] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+690,"dig coggen[2] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+1203,"dig coggen[2] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+1204,"dig coggen[2] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[2] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+343,"dig coggen[2] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+1202,"dig coggen[2] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+61,"dig coggen[2] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+1274,"dig coggen[2] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+1206,"dig coggen[2] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1102,"dig coggen[2] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1103,"dig coggen[2] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1104,"dig coggen[2] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1105,"dig coggen[2] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1106,"dig coggen[2] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+1275,"dig coggen[2] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+22,"dig coggen[2] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1107,"dig coggen[2] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1108,"dig coggen[2] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1101,"dig coggen[2] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+1207,"dig coggen[2] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1109,"dig coggen[2] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1113,"dig coggen[2] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1110,"dig coggen[2] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1111,"dig coggen[2] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+380,"dig coggen[2] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+546,"dig coggen[2] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1112,"dig coggen[2] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+1311,"dig coggen[2] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+23,"dig coggen[2] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+62,"dig coggen[2] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+440,"dig coggen[2] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+1203,"dig coggen[2] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+1204,"dig coggen[2] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+890,"dig coggen[2] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+889,"dig coggen[2] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+891,"dig coggen[2] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+892,"dig coggen[2] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+742,"dig coggen[2] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[2] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+450,"dig coggen[2] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+690,"dig coggen[2] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+273,"dig coggen[2] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+187,"dig coggen[2] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+388,"dig coggen[2] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+177,"dig coggen[2] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+592,"dig coggen[2] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+594,"dig coggen[2] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+449,"dig coggen[2] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+398,"dig coggen[2] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+185,"dig coggen[2] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+1208,"dig coggen[2] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+894,"dig coggen[2] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+595,"dig coggen[2] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+596,"dig coggen[2] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+898,"dig coggen[2] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+597,"dig coggen[2] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+186,"dig coggen[2] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+598,"dig coggen[2] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+599,"dig coggen[2] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+691,"dig coggen[2] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+693,"dig coggen[2] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+694,"dig coggen[2] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+695,"dig coggen[2] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+696,"dig coggen[2] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+399,"dig coggen[2] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1291,"dig coggen[3] cog_ nres",-1);
	vcdp->declBit  (c+1294,"dig coggen[3] cog_ clk_pll",-1);
	vcdp->declBit  (c+1293,"dig coggen[3] cog_ clk_cog",-1);
	vcdp->declBit  (c+1074,"dig coggen[3] cog_ ena_bus",-1);
	vcdp->declBit  (c+373,"dig coggen[3] cog_ ptr_w",-1);
	vcdp->declBus  (c+1012,"dig coggen[3] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+539,"dig coggen[3] cog_ ena",-1);
	vcdp->declBit  (c+837,"dig coggen[3] cog_ bus_sel",-1);
	vcdp->declBit  (c+848,"dig coggen[3] cog_ bus_r",-1);
	vcdp->declBit  (c+132,"dig coggen[3] cog_ bus_e",-1);
	vcdp->declBit  (c+133,"dig coggen[3] cog_ bus_w",-1);
	vcdp->declBus  (c+134,"dig coggen[3] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+849,"dig coggen[3] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+861,"dig coggen[3] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+742,"dig coggen[3] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[3] cog_ bus_c",-1);
	vcdp->declBit  (c+247,"dig coggen[3] cog_ bus_ack",-1);
	vcdp->declBus  (c+1010,"dig coggen[3] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[3] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+346,"dig coggen[3] cog_ pll_out",-1);
	vcdp->declBus  (c+1295,"dig coggen[3] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+52,"dig coggen[3] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+899,"dig coggen[3] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+1301,"dig coggen[3] cog_ oh",-1,31,0);
	vcdp->declBus  (c+1302,"dig coggen[3] cog_ ol",-1,31,0);
	vcdp->declBus  (c+1303,"dig coggen[3] cog_ wz",-1,31,0);
	vcdp->declBus  (c+1304,"dig coggen[3] cog_ wc",-1,31,0);
	vcdp->declBus  (c+1305,"dig coggen[3] cog_ wr",-1,31,0);
	vcdp->declBus  (c+1306,"dig coggen[3] cog_ im",-1,31,0);
	vcdp->declBus  (c+1307,"dig coggen[3] cog_ ch",-1,31,0);
	vcdp->declBus  (c+1308,"dig coggen[3] cog_ cl",-1,31,0);
	vcdp->declBus  (c+1309,"dig coggen[3] cog_ dh",-1,31,0);
	vcdp->declBus  (c+1310,"dig coggen[3] cog_ dl",-1,31,0);
	vcdp->declBus  (c+1300,"dig coggen[3] cog_ sh",-1,31,0);
	vcdp->declBus  (c+1299,"dig coggen[3] cog_ sl",-1,31,0);
	vcdp->declBus  (c+1005,"dig coggen[3] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+1276,"dig coggen[3] cog_ m",-1,4,0);
	vcdp->declBit  (c+259,"dig coggen[3] cog_ waiti",-1);
	vcdp->declBit  (c+900,"dig coggen[3] cog_ run",-1);
	vcdp->declBus  (c+24,"dig coggen[3] cog_ px",-1,8,0);
	vcdp->declBus  (c+901,"dig coggen[3] cog_ p",-1,8,0);
	vcdp->declBit  (c+902,"dig coggen[3] cog_ c",-1);
	vcdp->declBit  (c+903,"dig coggen[3] cog_ z",-1);
	vcdp->declBus  (c+452,"dig coggen[3] cog_ i",-1,31,0);
	vcdp->declBit  (c+600,"dig coggen[3] cog_ cond",-1);
	vcdp->declBit  (c+601,"dig coggen[3] cog_ jump_cancel",-1);
	vcdp->declBit  (c+274,"dig coggen[3] cog_ alu_co",-1);
	vcdp->declBit  (c+198,"dig coggen[3] cog_ alu_zo",-1);
	vcdp->declBit  (c+602,"dig coggen[3] cog_ wio",-1);
	vcdp->declBit  (c+455,"dig coggen[3] cog_ setouta",-1);
	vcdp->declBit  (c+456,"dig coggen[3] cog_ setdira",-1);
	vcdp->declBit  (c+457,"dig coggen[3] cog_ setctra",-1);
	vcdp->declBit  (c+458,"dig coggen[3] cog_ setctrb",-1);
	vcdp->declBit  (c+459,"dig coggen[3] cog_ setfrqa",-1);
	vcdp->declBit  (c+460,"dig coggen[3] cog_ setfrqb",-1);
	vcdp->declBit  (c+697,"dig coggen[3] cog_ setphsa",-1);
	vcdp->declBit  (c+698,"dig coggen[3] cog_ setphsb",-1);
	vcdp->declBit  (c+461,"dig coggen[3] cog_ setvid",-1);
	vcdp->declBit  (c+462,"dig coggen[3] cog_ setscl",-1);
	vcdp->declBit  (c+464,"dig coggen[3] cog_ alu_wr",-1);
	vcdp->declBit  (c+603,"dig coggen[3] cog_ ram_ena",-1);
	vcdp->declBit  (c+465,"dig coggen[3] cog_ ram_w",-1);
	vcdp->declBus  (c+25,"dig coggen[3] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+1212,"dig coggen[3] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+699,"dig coggen[3] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+783,"dig coggen[3] cog_ outa",-1,31,0);
	vcdp->declBus  (c+899,"dig coggen[3] cog_ dira",-1,31,0);
	vcdp->declQuad (c+784,"dig coggen[3] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+299,"dig coggen[3] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+346,"dig coggen[3] cog_ plla",-1);
	vcdp->declQuad (c+786,"dig coggen[3] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+300,"dig coggen[3] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+347,"dig coggen[3] cog_ pllb",-1);
	vcdp->declBit  (c+1213,"dig coggen[3] cog_ vidack",-1);
	vcdp->declBus  (c+63,"dig coggen[3] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+1214,"dig coggen[3] cog_ s",-1,31,0);
	vcdp->declBus  (c+1215,"dig coggen[3] cog_ d",-1,31,0);
	vcdp->declBus  (c+788,"dig coggen[3] cog_ ix",-1,31,0);
	vcdp->declBus  (c+789,"dig coggen[3] cog_ sy",-1,31,0);
	vcdp->declBus  (c+26,"dig coggen[3] cog_ sx",-1,31,0);
	vcdp->declBit  (c+904,"dig coggen[3] cog_ cancel",-1);
	vcdp->declBus  (c+453,"dig coggen[3] cog_ condx",-1,3,0);
	vcdp->declBit  (c+1216,"dig coggen[3] cog_ dz",-1);
	vcdp->declBus  (c+604,"dig coggen[3] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+605,"dig coggen[3] cog_ jump",-1);
	vcdp->declBit  (c+1027,"dig coggen[3] cog_ match",-1);
	vcdp->declBit  (c+258,"dig coggen[3] cog_ waitx",-1);
	vcdp->declBit  (c+1293,"dig coggen[3] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+603,"dig coggen[3] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+465,"dig coggen[3] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+25,"dig coggen[3] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+699,"dig coggen[3] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+1212,"dig coggen[3] cog_ cog_ram_ q",-1,31,0);
	// Tracing: dig coggen[3] cog_ cog_ram_ r // Ignored: Wide memory > --trace-max-array ents at ../HDL/cog_ram.v:40
	vcdp->declBit  (c+1293,"dig coggen[3] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[3] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+539,"dig coggen[3] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+457,"dig coggen[3] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+459,"dig coggen[3] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+697,"dig coggen[3] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+699,"dig coggen[3] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[3] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+784,"dig coggen[3] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+299,"dig coggen[3] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+346,"dig coggen[3] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1054,"dig coggen[3] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1028,"dig coggen[3] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+790,"dig coggen[3] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+102,"dig coggen[3] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1055,"dig coggen[3] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+348,"dig coggen[3] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+80,"dig coggen[3] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+301,"dig coggen[3] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+302,"dig coggen[3] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+972,"dig coggen[3] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+974,"dig coggen[3] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[3] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[3] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+539,"dig coggen[3] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+458,"dig coggen[3] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+460,"dig coggen[3] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+698,"dig coggen[3] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+699,"dig coggen[3] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[3] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+786,"dig coggen[3] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+300,"dig coggen[3] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+347,"dig coggen[3] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1056,"dig coggen[3] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1029,"dig coggen[3] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+791,"dig coggen[3] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+104,"dig coggen[3] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1057,"dig coggen[3] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+349,"dig coggen[3] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+81,"dig coggen[3] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+303,"dig coggen[3] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+304,"dig coggen[3] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+975,"dig coggen[3] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+977,"dig coggen[3] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[3] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+346,"dig coggen[3] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+539,"dig coggen[3] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+461,"dig coggen[3] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+462,"dig coggen[3] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+699,"dig coggen[3] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+1214,"dig coggen[3] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+1215,"dig coggen[3] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[3] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+347,"dig coggen[3] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+1213,"dig coggen[3] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+63,"dig coggen[3] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+1277,"dig coggen[3] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+1217,"dig coggen[3] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1115,"dig coggen[3] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1116,"dig coggen[3] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1117,"dig coggen[3] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1118,"dig coggen[3] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1119,"dig coggen[3] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+1278,"dig coggen[3] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+27,"dig coggen[3] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1120,"dig coggen[3] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1121,"dig coggen[3] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1114,"dig coggen[3] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+1218,"dig coggen[3] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1122,"dig coggen[3] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1126,"dig coggen[3] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1123,"dig coggen[3] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1124,"dig coggen[3] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+381,"dig coggen[3] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+547,"dig coggen[3] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1125,"dig coggen[3] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+1311,"dig coggen[3] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+28,"dig coggen[3] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+64,"dig coggen[3] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+454,"dig coggen[3] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+1214,"dig coggen[3] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+1215,"dig coggen[3] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+901,"dig coggen[3] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+900,"dig coggen[3] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+902,"dig coggen[3] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+903,"dig coggen[3] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+742,"dig coggen[3] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[3] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+464,"dig coggen[3] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+699,"dig coggen[3] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+274,"dig coggen[3] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+198,"dig coggen[3] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+389,"dig coggen[3] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+188,"dig coggen[3] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+606,"dig coggen[3] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+608,"dig coggen[3] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+463,"dig coggen[3] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+400,"dig coggen[3] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+196,"dig coggen[3] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+1219,"dig coggen[3] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+905,"dig coggen[3] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+609,"dig coggen[3] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+610,"dig coggen[3] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+909,"dig coggen[3] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+611,"dig coggen[3] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+197,"dig coggen[3] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+612,"dig coggen[3] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+613,"dig coggen[3] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+700,"dig coggen[3] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+702,"dig coggen[3] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+703,"dig coggen[3] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+704,"dig coggen[3] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+705,"dig coggen[3] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+401,"dig coggen[3] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1291,"dig coggen[4] cog_ nres",-1);
	vcdp->declBit  (c+1294,"dig coggen[4] cog_ clk_pll",-1);
	vcdp->declBit  (c+1293,"dig coggen[4] cog_ clk_cog",-1);
	vcdp->declBit  (c+1074,"dig coggen[4] cog_ ena_bus",-1);
	vcdp->declBit  (c+374,"dig coggen[4] cog_ ptr_w",-1);
	vcdp->declBus  (c+1012,"dig coggen[4] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+540,"dig coggen[4] cog_ ena",-1);
	vcdp->declBit  (c+838,"dig coggen[4] cog_ bus_sel",-1);
	vcdp->declBit  (c+850,"dig coggen[4] cog_ bus_r",-1);
	vcdp->declBit  (c+135,"dig coggen[4] cog_ bus_e",-1);
	vcdp->declBit  (c+136,"dig coggen[4] cog_ bus_w",-1);
	vcdp->declBus  (c+137,"dig coggen[4] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+851,"dig coggen[4] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+862,"dig coggen[4] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+742,"dig coggen[4] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[4] cog_ bus_c",-1);
	vcdp->declBit  (c+248,"dig coggen[4] cog_ bus_ack",-1);
	vcdp->declBus  (c+1010,"dig coggen[4] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[4] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+350,"dig coggen[4] cog_ pll_out",-1);
	vcdp->declBus  (c+1295,"dig coggen[4] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+53,"dig coggen[4] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+910,"dig coggen[4] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+1301,"dig coggen[4] cog_ oh",-1,31,0);
	vcdp->declBus  (c+1302,"dig coggen[4] cog_ ol",-1,31,0);
	vcdp->declBus  (c+1303,"dig coggen[4] cog_ wz",-1,31,0);
	vcdp->declBus  (c+1304,"dig coggen[4] cog_ wc",-1,31,0);
	vcdp->declBus  (c+1305,"dig coggen[4] cog_ wr",-1,31,0);
	vcdp->declBus  (c+1306,"dig coggen[4] cog_ im",-1,31,0);
	vcdp->declBus  (c+1307,"dig coggen[4] cog_ ch",-1,31,0);
	vcdp->declBus  (c+1308,"dig coggen[4] cog_ cl",-1,31,0);
	vcdp->declBus  (c+1309,"dig coggen[4] cog_ dh",-1,31,0);
	vcdp->declBus  (c+1310,"dig coggen[4] cog_ dl",-1,31,0);
	vcdp->declBus  (c+1300,"dig coggen[4] cog_ sh",-1,31,0);
	vcdp->declBus  (c+1299,"dig coggen[4] cog_ sl",-1,31,0);
	vcdp->declBus  (c+1006,"dig coggen[4] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+1279,"dig coggen[4] cog_ m",-1,4,0);
	vcdp->declBit  (c+261,"dig coggen[4] cog_ waiti",-1);
	vcdp->declBit  (c+911,"dig coggen[4] cog_ run",-1);
	vcdp->declBus  (c+29,"dig coggen[4] cog_ px",-1,8,0);
	vcdp->declBus  (c+912,"dig coggen[4] cog_ p",-1,8,0);
	vcdp->declBit  (c+913,"dig coggen[4] cog_ c",-1);
	vcdp->declBit  (c+914,"dig coggen[4] cog_ z",-1);
	vcdp->declBus  (c+466,"dig coggen[4] cog_ i",-1,31,0);
	vcdp->declBit  (c+614,"dig coggen[4] cog_ cond",-1);
	vcdp->declBit  (c+615,"dig coggen[4] cog_ jump_cancel",-1);
	vcdp->declBit  (c+275,"dig coggen[4] cog_ alu_co",-1);
	vcdp->declBit  (c+209,"dig coggen[4] cog_ alu_zo",-1);
	vcdp->declBit  (c+616,"dig coggen[4] cog_ wio",-1);
	vcdp->declBit  (c+469,"dig coggen[4] cog_ setouta",-1);
	vcdp->declBit  (c+470,"dig coggen[4] cog_ setdira",-1);
	vcdp->declBit  (c+471,"dig coggen[4] cog_ setctra",-1);
	vcdp->declBit  (c+472,"dig coggen[4] cog_ setctrb",-1);
	vcdp->declBit  (c+473,"dig coggen[4] cog_ setfrqa",-1);
	vcdp->declBit  (c+474,"dig coggen[4] cog_ setfrqb",-1);
	vcdp->declBit  (c+706,"dig coggen[4] cog_ setphsa",-1);
	vcdp->declBit  (c+707,"dig coggen[4] cog_ setphsb",-1);
	vcdp->declBit  (c+475,"dig coggen[4] cog_ setvid",-1);
	vcdp->declBit  (c+476,"dig coggen[4] cog_ setscl",-1);
	vcdp->declBit  (c+478,"dig coggen[4] cog_ alu_wr",-1);
	vcdp->declBit  (c+617,"dig coggen[4] cog_ ram_ena",-1);
	vcdp->declBit  (c+479,"dig coggen[4] cog_ ram_w",-1);
	vcdp->declBus  (c+30,"dig coggen[4] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+1223,"dig coggen[4] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+708,"dig coggen[4] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+792,"dig coggen[4] cog_ outa",-1,31,0);
	vcdp->declBus  (c+910,"dig coggen[4] cog_ dira",-1,31,0);
	vcdp->declQuad (c+793,"dig coggen[4] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+305,"dig coggen[4] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+350,"dig coggen[4] cog_ plla",-1);
	vcdp->declQuad (c+795,"dig coggen[4] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+306,"dig coggen[4] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+351,"dig coggen[4] cog_ pllb",-1);
	vcdp->declBit  (c+1224,"dig coggen[4] cog_ vidack",-1);
	vcdp->declBus  (c+65,"dig coggen[4] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+1225,"dig coggen[4] cog_ s",-1,31,0);
	vcdp->declBus  (c+1226,"dig coggen[4] cog_ d",-1,31,0);
	vcdp->declBus  (c+797,"dig coggen[4] cog_ ix",-1,31,0);
	vcdp->declBus  (c+798,"dig coggen[4] cog_ sy",-1,31,0);
	vcdp->declBus  (c+31,"dig coggen[4] cog_ sx",-1,31,0);
	vcdp->declBit  (c+915,"dig coggen[4] cog_ cancel",-1);
	vcdp->declBus  (c+467,"dig coggen[4] cog_ condx",-1,3,0);
	vcdp->declBit  (c+1227,"dig coggen[4] cog_ dz",-1);
	vcdp->declBus  (c+618,"dig coggen[4] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+619,"dig coggen[4] cog_ jump",-1);
	vcdp->declBit  (c+1030,"dig coggen[4] cog_ match",-1);
	vcdp->declBit  (c+260,"dig coggen[4] cog_ waitx",-1);
	vcdp->declBit  (c+1293,"dig coggen[4] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+617,"dig coggen[4] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+479,"dig coggen[4] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+30,"dig coggen[4] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+708,"dig coggen[4] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+1223,"dig coggen[4] cog_ cog_ram_ q",-1,31,0);
	// Tracing: dig coggen[4] cog_ cog_ram_ r // Ignored: Wide memory > --trace-max-array ents at ../HDL/cog_ram.v:40
	vcdp->declBit  (c+1293,"dig coggen[4] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[4] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+540,"dig coggen[4] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+471,"dig coggen[4] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+473,"dig coggen[4] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+706,"dig coggen[4] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+708,"dig coggen[4] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[4] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+793,"dig coggen[4] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+305,"dig coggen[4] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+350,"dig coggen[4] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1058,"dig coggen[4] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1031,"dig coggen[4] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+799,"dig coggen[4] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+106,"dig coggen[4] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1059,"dig coggen[4] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+352,"dig coggen[4] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+82,"dig coggen[4] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+307,"dig coggen[4] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+308,"dig coggen[4] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+978,"dig coggen[4] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+980,"dig coggen[4] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[4] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[4] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+540,"dig coggen[4] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+472,"dig coggen[4] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+474,"dig coggen[4] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+707,"dig coggen[4] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+708,"dig coggen[4] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[4] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+795,"dig coggen[4] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+306,"dig coggen[4] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+351,"dig coggen[4] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1060,"dig coggen[4] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1032,"dig coggen[4] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+800,"dig coggen[4] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+108,"dig coggen[4] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1061,"dig coggen[4] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+353,"dig coggen[4] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+83,"dig coggen[4] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+309,"dig coggen[4] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+310,"dig coggen[4] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+981,"dig coggen[4] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+983,"dig coggen[4] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[4] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+350,"dig coggen[4] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+540,"dig coggen[4] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+475,"dig coggen[4] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+476,"dig coggen[4] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+708,"dig coggen[4] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+1225,"dig coggen[4] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+1226,"dig coggen[4] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[4] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+351,"dig coggen[4] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+1224,"dig coggen[4] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+65,"dig coggen[4] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+1280,"dig coggen[4] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+1228,"dig coggen[4] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1128,"dig coggen[4] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1129,"dig coggen[4] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1130,"dig coggen[4] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1131,"dig coggen[4] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1132,"dig coggen[4] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+1281,"dig coggen[4] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+32,"dig coggen[4] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1133,"dig coggen[4] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1134,"dig coggen[4] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1127,"dig coggen[4] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+1229,"dig coggen[4] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1135,"dig coggen[4] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1139,"dig coggen[4] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1136,"dig coggen[4] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1137,"dig coggen[4] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+382,"dig coggen[4] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+548,"dig coggen[4] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1138,"dig coggen[4] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+1311,"dig coggen[4] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+33,"dig coggen[4] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+66,"dig coggen[4] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+468,"dig coggen[4] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+1225,"dig coggen[4] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+1226,"dig coggen[4] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+912,"dig coggen[4] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+911,"dig coggen[4] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+913,"dig coggen[4] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+914,"dig coggen[4] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+742,"dig coggen[4] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[4] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+478,"dig coggen[4] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+708,"dig coggen[4] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+275,"dig coggen[4] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+209,"dig coggen[4] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+390,"dig coggen[4] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+199,"dig coggen[4] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+620,"dig coggen[4] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+622,"dig coggen[4] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+477,"dig coggen[4] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+402,"dig coggen[4] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+207,"dig coggen[4] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+1230,"dig coggen[4] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+916,"dig coggen[4] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+623,"dig coggen[4] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+624,"dig coggen[4] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+920,"dig coggen[4] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+625,"dig coggen[4] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+208,"dig coggen[4] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+626,"dig coggen[4] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+627,"dig coggen[4] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+709,"dig coggen[4] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+711,"dig coggen[4] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+712,"dig coggen[4] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+713,"dig coggen[4] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+714,"dig coggen[4] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+403,"dig coggen[4] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1291,"dig coggen[5] cog_ nres",-1);
	vcdp->declBit  (c+1294,"dig coggen[5] cog_ clk_pll",-1);
	vcdp->declBit  (c+1293,"dig coggen[5] cog_ clk_cog",-1);
	vcdp->declBit  (c+1074,"dig coggen[5] cog_ ena_bus",-1);
	vcdp->declBit  (c+375,"dig coggen[5] cog_ ptr_w",-1);
	vcdp->declBus  (c+1012,"dig coggen[5] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+541,"dig coggen[5] cog_ ena",-1);
	vcdp->declBit  (c+839,"dig coggen[5] cog_ bus_sel",-1);
	vcdp->declBit  (c+852,"dig coggen[5] cog_ bus_r",-1);
	vcdp->declBit  (c+138,"dig coggen[5] cog_ bus_e",-1);
	vcdp->declBit  (c+139,"dig coggen[5] cog_ bus_w",-1);
	vcdp->declBus  (c+140,"dig coggen[5] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+853,"dig coggen[5] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+863,"dig coggen[5] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+742,"dig coggen[5] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[5] cog_ bus_c",-1);
	vcdp->declBit  (c+249,"dig coggen[5] cog_ bus_ack",-1);
	vcdp->declBus  (c+1010,"dig coggen[5] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[5] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+354,"dig coggen[5] cog_ pll_out",-1);
	vcdp->declBus  (c+1295,"dig coggen[5] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+54,"dig coggen[5] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+921,"dig coggen[5] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+1301,"dig coggen[5] cog_ oh",-1,31,0);
	vcdp->declBus  (c+1302,"dig coggen[5] cog_ ol",-1,31,0);
	vcdp->declBus  (c+1303,"dig coggen[5] cog_ wz",-1,31,0);
	vcdp->declBus  (c+1304,"dig coggen[5] cog_ wc",-1,31,0);
	vcdp->declBus  (c+1305,"dig coggen[5] cog_ wr",-1,31,0);
	vcdp->declBus  (c+1306,"dig coggen[5] cog_ im",-1,31,0);
	vcdp->declBus  (c+1307,"dig coggen[5] cog_ ch",-1,31,0);
	vcdp->declBus  (c+1308,"dig coggen[5] cog_ cl",-1,31,0);
	vcdp->declBus  (c+1309,"dig coggen[5] cog_ dh",-1,31,0);
	vcdp->declBus  (c+1310,"dig coggen[5] cog_ dl",-1,31,0);
	vcdp->declBus  (c+1300,"dig coggen[5] cog_ sh",-1,31,0);
	vcdp->declBus  (c+1299,"dig coggen[5] cog_ sl",-1,31,0);
	vcdp->declBus  (c+1007,"dig coggen[5] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+1282,"dig coggen[5] cog_ m",-1,4,0);
	vcdp->declBit  (c+263,"dig coggen[5] cog_ waiti",-1);
	vcdp->declBit  (c+922,"dig coggen[5] cog_ run",-1);
	vcdp->declBus  (c+34,"dig coggen[5] cog_ px",-1,8,0);
	vcdp->declBus  (c+923,"dig coggen[5] cog_ p",-1,8,0);
	vcdp->declBit  (c+924,"dig coggen[5] cog_ c",-1);
	vcdp->declBit  (c+925,"dig coggen[5] cog_ z",-1);
	vcdp->declBus  (c+480,"dig coggen[5] cog_ i",-1,31,0);
	vcdp->declBit  (c+628,"dig coggen[5] cog_ cond",-1);
	vcdp->declBit  (c+629,"dig coggen[5] cog_ jump_cancel",-1);
	vcdp->declBit  (c+276,"dig coggen[5] cog_ alu_co",-1);
	vcdp->declBit  (c+220,"dig coggen[5] cog_ alu_zo",-1);
	vcdp->declBit  (c+630,"dig coggen[5] cog_ wio",-1);
	vcdp->declBit  (c+483,"dig coggen[5] cog_ setouta",-1);
	vcdp->declBit  (c+484,"dig coggen[5] cog_ setdira",-1);
	vcdp->declBit  (c+485,"dig coggen[5] cog_ setctra",-1);
	vcdp->declBit  (c+486,"dig coggen[5] cog_ setctrb",-1);
	vcdp->declBit  (c+487,"dig coggen[5] cog_ setfrqa",-1);
	vcdp->declBit  (c+488,"dig coggen[5] cog_ setfrqb",-1);
	vcdp->declBit  (c+715,"dig coggen[5] cog_ setphsa",-1);
	vcdp->declBit  (c+716,"dig coggen[5] cog_ setphsb",-1);
	vcdp->declBit  (c+489,"dig coggen[5] cog_ setvid",-1);
	vcdp->declBit  (c+490,"dig coggen[5] cog_ setscl",-1);
	vcdp->declBit  (c+492,"dig coggen[5] cog_ alu_wr",-1);
	vcdp->declBit  (c+631,"dig coggen[5] cog_ ram_ena",-1);
	vcdp->declBit  (c+493,"dig coggen[5] cog_ ram_w",-1);
	vcdp->declBus  (c+35,"dig coggen[5] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+1234,"dig coggen[5] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+717,"dig coggen[5] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+801,"dig coggen[5] cog_ outa",-1,31,0);
	vcdp->declBus  (c+921,"dig coggen[5] cog_ dira",-1,31,0);
	vcdp->declQuad (c+802,"dig coggen[5] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+311,"dig coggen[5] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+354,"dig coggen[5] cog_ plla",-1);
	vcdp->declQuad (c+804,"dig coggen[5] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+312,"dig coggen[5] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+355,"dig coggen[5] cog_ pllb",-1);
	vcdp->declBit  (c+1235,"dig coggen[5] cog_ vidack",-1);
	vcdp->declBus  (c+67,"dig coggen[5] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+1236,"dig coggen[5] cog_ s",-1,31,0);
	vcdp->declBus  (c+1237,"dig coggen[5] cog_ d",-1,31,0);
	vcdp->declBus  (c+806,"dig coggen[5] cog_ ix",-1,31,0);
	vcdp->declBus  (c+807,"dig coggen[5] cog_ sy",-1,31,0);
	vcdp->declBus  (c+36,"dig coggen[5] cog_ sx",-1,31,0);
	vcdp->declBit  (c+926,"dig coggen[5] cog_ cancel",-1);
	vcdp->declBus  (c+481,"dig coggen[5] cog_ condx",-1,3,0);
	vcdp->declBit  (c+1238,"dig coggen[5] cog_ dz",-1);
	vcdp->declBus  (c+632,"dig coggen[5] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+633,"dig coggen[5] cog_ jump",-1);
	vcdp->declBit  (c+1033,"dig coggen[5] cog_ match",-1);
	vcdp->declBit  (c+262,"dig coggen[5] cog_ waitx",-1);
	vcdp->declBit  (c+1293,"dig coggen[5] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+631,"dig coggen[5] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+493,"dig coggen[5] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+35,"dig coggen[5] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+717,"dig coggen[5] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+1234,"dig coggen[5] cog_ cog_ram_ q",-1,31,0);
	// Tracing: dig coggen[5] cog_ cog_ram_ r // Ignored: Wide memory > --trace-max-array ents at ../HDL/cog_ram.v:40
	vcdp->declBit  (c+1293,"dig coggen[5] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[5] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+541,"dig coggen[5] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+485,"dig coggen[5] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+487,"dig coggen[5] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+715,"dig coggen[5] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+717,"dig coggen[5] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[5] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+802,"dig coggen[5] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+311,"dig coggen[5] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+354,"dig coggen[5] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1062,"dig coggen[5] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1034,"dig coggen[5] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+808,"dig coggen[5] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+110,"dig coggen[5] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1063,"dig coggen[5] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+356,"dig coggen[5] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+84,"dig coggen[5] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+313,"dig coggen[5] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+314,"dig coggen[5] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+984,"dig coggen[5] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+986,"dig coggen[5] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[5] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[5] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+541,"dig coggen[5] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+486,"dig coggen[5] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+488,"dig coggen[5] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+716,"dig coggen[5] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+717,"dig coggen[5] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[5] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+804,"dig coggen[5] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+312,"dig coggen[5] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+355,"dig coggen[5] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1064,"dig coggen[5] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1035,"dig coggen[5] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+809,"dig coggen[5] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+112,"dig coggen[5] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1065,"dig coggen[5] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+357,"dig coggen[5] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+85,"dig coggen[5] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+315,"dig coggen[5] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+316,"dig coggen[5] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+987,"dig coggen[5] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+989,"dig coggen[5] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[5] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+354,"dig coggen[5] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+541,"dig coggen[5] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+489,"dig coggen[5] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+490,"dig coggen[5] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+717,"dig coggen[5] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+1236,"dig coggen[5] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+1237,"dig coggen[5] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[5] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+355,"dig coggen[5] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+1235,"dig coggen[5] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+67,"dig coggen[5] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+1283,"dig coggen[5] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+1239,"dig coggen[5] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1141,"dig coggen[5] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1142,"dig coggen[5] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1143,"dig coggen[5] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1144,"dig coggen[5] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1145,"dig coggen[5] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+1284,"dig coggen[5] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+37,"dig coggen[5] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1146,"dig coggen[5] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1147,"dig coggen[5] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1140,"dig coggen[5] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+1240,"dig coggen[5] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1148,"dig coggen[5] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1152,"dig coggen[5] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1149,"dig coggen[5] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1150,"dig coggen[5] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+383,"dig coggen[5] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+549,"dig coggen[5] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1151,"dig coggen[5] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+1311,"dig coggen[5] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+38,"dig coggen[5] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+68,"dig coggen[5] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+482,"dig coggen[5] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+1236,"dig coggen[5] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+1237,"dig coggen[5] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+923,"dig coggen[5] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+922,"dig coggen[5] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+924,"dig coggen[5] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+925,"dig coggen[5] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+742,"dig coggen[5] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[5] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+492,"dig coggen[5] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+717,"dig coggen[5] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+276,"dig coggen[5] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+220,"dig coggen[5] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+391,"dig coggen[5] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+210,"dig coggen[5] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+634,"dig coggen[5] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+636,"dig coggen[5] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+491,"dig coggen[5] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+404,"dig coggen[5] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+218,"dig coggen[5] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+1241,"dig coggen[5] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+927,"dig coggen[5] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+637,"dig coggen[5] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+638,"dig coggen[5] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+931,"dig coggen[5] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+639,"dig coggen[5] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+219,"dig coggen[5] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+640,"dig coggen[5] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+641,"dig coggen[5] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+718,"dig coggen[5] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+720,"dig coggen[5] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+721,"dig coggen[5] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+722,"dig coggen[5] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+723,"dig coggen[5] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+405,"dig coggen[5] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1291,"dig coggen[6] cog_ nres",-1);
	vcdp->declBit  (c+1294,"dig coggen[6] cog_ clk_pll",-1);
	vcdp->declBit  (c+1293,"dig coggen[6] cog_ clk_cog",-1);
	vcdp->declBit  (c+1074,"dig coggen[6] cog_ ena_bus",-1);
	vcdp->declBit  (c+376,"dig coggen[6] cog_ ptr_w",-1);
	vcdp->declBus  (c+1012,"dig coggen[6] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+542,"dig coggen[6] cog_ ena",-1);
	vcdp->declBit  (c+840,"dig coggen[6] cog_ bus_sel",-1);
	vcdp->declBit  (c+854,"dig coggen[6] cog_ bus_r",-1);
	vcdp->declBit  (c+141,"dig coggen[6] cog_ bus_e",-1);
	vcdp->declBit  (c+142,"dig coggen[6] cog_ bus_w",-1);
	vcdp->declBus  (c+143,"dig coggen[6] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+855,"dig coggen[6] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+864,"dig coggen[6] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+742,"dig coggen[6] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[6] cog_ bus_c",-1);
	vcdp->declBit  (c+250,"dig coggen[6] cog_ bus_ack",-1);
	vcdp->declBus  (c+1010,"dig coggen[6] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[6] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+358,"dig coggen[6] cog_ pll_out",-1);
	vcdp->declBus  (c+1295,"dig coggen[6] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+55,"dig coggen[6] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+932,"dig coggen[6] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+1301,"dig coggen[6] cog_ oh",-1,31,0);
	vcdp->declBus  (c+1302,"dig coggen[6] cog_ ol",-1,31,0);
	vcdp->declBus  (c+1303,"dig coggen[6] cog_ wz",-1,31,0);
	vcdp->declBus  (c+1304,"dig coggen[6] cog_ wc",-1,31,0);
	vcdp->declBus  (c+1305,"dig coggen[6] cog_ wr",-1,31,0);
	vcdp->declBus  (c+1306,"dig coggen[6] cog_ im",-1,31,0);
	vcdp->declBus  (c+1307,"dig coggen[6] cog_ ch",-1,31,0);
	vcdp->declBus  (c+1308,"dig coggen[6] cog_ cl",-1,31,0);
	vcdp->declBus  (c+1309,"dig coggen[6] cog_ dh",-1,31,0);
	vcdp->declBus  (c+1310,"dig coggen[6] cog_ dl",-1,31,0);
	vcdp->declBus  (c+1300,"dig coggen[6] cog_ sh",-1,31,0);
	vcdp->declBus  (c+1299,"dig coggen[6] cog_ sl",-1,31,0);
	vcdp->declBus  (c+1008,"dig coggen[6] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+1285,"dig coggen[6] cog_ m",-1,4,0);
	vcdp->declBit  (c+265,"dig coggen[6] cog_ waiti",-1);
	vcdp->declBit  (c+933,"dig coggen[6] cog_ run",-1);
	vcdp->declBus  (c+39,"dig coggen[6] cog_ px",-1,8,0);
	vcdp->declBus  (c+934,"dig coggen[6] cog_ p",-1,8,0);
	vcdp->declBit  (c+935,"dig coggen[6] cog_ c",-1);
	vcdp->declBit  (c+936,"dig coggen[6] cog_ z",-1);
	vcdp->declBus  (c+494,"dig coggen[6] cog_ i",-1,31,0);
	vcdp->declBit  (c+642,"dig coggen[6] cog_ cond",-1);
	vcdp->declBit  (c+643,"dig coggen[6] cog_ jump_cancel",-1);
	vcdp->declBit  (c+277,"dig coggen[6] cog_ alu_co",-1);
	vcdp->declBit  (c+231,"dig coggen[6] cog_ alu_zo",-1);
	vcdp->declBit  (c+644,"dig coggen[6] cog_ wio",-1);
	vcdp->declBit  (c+497,"dig coggen[6] cog_ setouta",-1);
	vcdp->declBit  (c+498,"dig coggen[6] cog_ setdira",-1);
	vcdp->declBit  (c+499,"dig coggen[6] cog_ setctra",-1);
	vcdp->declBit  (c+500,"dig coggen[6] cog_ setctrb",-1);
	vcdp->declBit  (c+501,"dig coggen[6] cog_ setfrqa",-1);
	vcdp->declBit  (c+502,"dig coggen[6] cog_ setfrqb",-1);
	vcdp->declBit  (c+724,"dig coggen[6] cog_ setphsa",-1);
	vcdp->declBit  (c+725,"dig coggen[6] cog_ setphsb",-1);
	vcdp->declBit  (c+503,"dig coggen[6] cog_ setvid",-1);
	vcdp->declBit  (c+504,"dig coggen[6] cog_ setscl",-1);
	vcdp->declBit  (c+506,"dig coggen[6] cog_ alu_wr",-1);
	vcdp->declBit  (c+645,"dig coggen[6] cog_ ram_ena",-1);
	vcdp->declBit  (c+507,"dig coggen[6] cog_ ram_w",-1);
	vcdp->declBus  (c+40,"dig coggen[6] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+1245,"dig coggen[6] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+726,"dig coggen[6] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+810,"dig coggen[6] cog_ outa",-1,31,0);
	vcdp->declBus  (c+932,"dig coggen[6] cog_ dira",-1,31,0);
	vcdp->declQuad (c+811,"dig coggen[6] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+317,"dig coggen[6] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+358,"dig coggen[6] cog_ plla",-1);
	vcdp->declQuad (c+813,"dig coggen[6] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+318,"dig coggen[6] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+359,"dig coggen[6] cog_ pllb",-1);
	vcdp->declBit  (c+1246,"dig coggen[6] cog_ vidack",-1);
	vcdp->declBus  (c+69,"dig coggen[6] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+1247,"dig coggen[6] cog_ s",-1,31,0);
	vcdp->declBus  (c+1248,"dig coggen[6] cog_ d",-1,31,0);
	vcdp->declBus  (c+815,"dig coggen[6] cog_ ix",-1,31,0);
	vcdp->declBus  (c+816,"dig coggen[6] cog_ sy",-1,31,0);
	vcdp->declBus  (c+41,"dig coggen[6] cog_ sx",-1,31,0);
	vcdp->declBit  (c+937,"dig coggen[6] cog_ cancel",-1);
	vcdp->declBus  (c+495,"dig coggen[6] cog_ condx",-1,3,0);
	vcdp->declBit  (c+1249,"dig coggen[6] cog_ dz",-1);
	vcdp->declBus  (c+646,"dig coggen[6] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+647,"dig coggen[6] cog_ jump",-1);
	vcdp->declBit  (c+1036,"dig coggen[6] cog_ match",-1);
	vcdp->declBit  (c+264,"dig coggen[6] cog_ waitx",-1);
	vcdp->declBit  (c+1293,"dig coggen[6] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+645,"dig coggen[6] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+507,"dig coggen[6] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+40,"dig coggen[6] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+726,"dig coggen[6] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+1245,"dig coggen[6] cog_ cog_ram_ q",-1,31,0);
	// Tracing: dig coggen[6] cog_ cog_ram_ r // Ignored: Wide memory > --trace-max-array ents at ../HDL/cog_ram.v:40
	vcdp->declBit  (c+1293,"dig coggen[6] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[6] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+542,"dig coggen[6] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+499,"dig coggen[6] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+501,"dig coggen[6] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+724,"dig coggen[6] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+726,"dig coggen[6] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[6] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+811,"dig coggen[6] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+317,"dig coggen[6] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+358,"dig coggen[6] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1066,"dig coggen[6] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1037,"dig coggen[6] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+817,"dig coggen[6] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+114,"dig coggen[6] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1067,"dig coggen[6] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+360,"dig coggen[6] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+86,"dig coggen[6] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+319,"dig coggen[6] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+320,"dig coggen[6] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+990,"dig coggen[6] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+992,"dig coggen[6] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[6] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[6] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+542,"dig coggen[6] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+500,"dig coggen[6] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+502,"dig coggen[6] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+725,"dig coggen[6] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+726,"dig coggen[6] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[6] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+813,"dig coggen[6] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+318,"dig coggen[6] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+359,"dig coggen[6] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1068,"dig coggen[6] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1038,"dig coggen[6] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+818,"dig coggen[6] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+116,"dig coggen[6] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1069,"dig coggen[6] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+361,"dig coggen[6] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+87,"dig coggen[6] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+321,"dig coggen[6] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+322,"dig coggen[6] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+993,"dig coggen[6] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+995,"dig coggen[6] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[6] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+358,"dig coggen[6] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+542,"dig coggen[6] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+503,"dig coggen[6] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+504,"dig coggen[6] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+726,"dig coggen[6] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+1247,"dig coggen[6] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+1248,"dig coggen[6] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[6] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+359,"dig coggen[6] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+1246,"dig coggen[6] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+69,"dig coggen[6] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+1286,"dig coggen[6] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+1250,"dig coggen[6] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1154,"dig coggen[6] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1155,"dig coggen[6] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1156,"dig coggen[6] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1157,"dig coggen[6] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1158,"dig coggen[6] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+1287,"dig coggen[6] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+42,"dig coggen[6] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1159,"dig coggen[6] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1160,"dig coggen[6] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1153,"dig coggen[6] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+1251,"dig coggen[6] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1161,"dig coggen[6] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1165,"dig coggen[6] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1162,"dig coggen[6] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1163,"dig coggen[6] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+384,"dig coggen[6] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+550,"dig coggen[6] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1164,"dig coggen[6] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+1311,"dig coggen[6] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+43,"dig coggen[6] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+70,"dig coggen[6] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+496,"dig coggen[6] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+1247,"dig coggen[6] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+1248,"dig coggen[6] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+934,"dig coggen[6] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+933,"dig coggen[6] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+935,"dig coggen[6] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+936,"dig coggen[6] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+742,"dig coggen[6] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[6] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+506,"dig coggen[6] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+726,"dig coggen[6] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+277,"dig coggen[6] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+231,"dig coggen[6] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+392,"dig coggen[6] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+221,"dig coggen[6] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+648,"dig coggen[6] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+650,"dig coggen[6] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+505,"dig coggen[6] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+406,"dig coggen[6] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+229,"dig coggen[6] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+1252,"dig coggen[6] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+938,"dig coggen[6] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+651,"dig coggen[6] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+652,"dig coggen[6] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+942,"dig coggen[6] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+653,"dig coggen[6] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+230,"dig coggen[6] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+654,"dig coggen[6] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+655,"dig coggen[6] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+727,"dig coggen[6] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+729,"dig coggen[6] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+730,"dig coggen[6] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+731,"dig coggen[6] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+732,"dig coggen[6] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+407,"dig coggen[6] cog_ cog_alu_ add_c",-1);
	vcdp->declBit  (c+1291,"dig coggen[7] cog_ nres",-1);
	vcdp->declBit  (c+1294,"dig coggen[7] cog_ clk_pll",-1);
	vcdp->declBit  (c+1293,"dig coggen[7] cog_ clk_cog",-1);
	vcdp->declBit  (c+1074,"dig coggen[7] cog_ ena_bus",-1);
	vcdp->declBit  (c+377,"dig coggen[7] cog_ ptr_w",-1);
	vcdp->declBus  (c+1012,"dig coggen[7] cog_ ptr_d",-1,27,0);
	vcdp->declBit  (c+543,"dig coggen[7] cog_ ena",-1);
	vcdp->declBit  (c+841,"dig coggen[7] cog_ bus_sel",-1);
	vcdp->declBit  (c+856,"dig coggen[7] cog_ bus_r",-1);
	vcdp->declBit  (c+144,"dig coggen[7] cog_ bus_e",-1);
	vcdp->declBit  (c+145,"dig coggen[7] cog_ bus_w",-1);
	vcdp->declBus  (c+146,"dig coggen[7] cog_ bus_s",-1,1,0);
	vcdp->declBus  (c+857,"dig coggen[7] cog_ bus_a",-1,15,0);
	vcdp->declBus  (c+865,"dig coggen[7] cog_ bus_d",-1,31,0);
	vcdp->declBus  (c+742,"dig coggen[7] cog_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[7] cog_ bus_c",-1);
	vcdp->declBit  (c+251,"dig coggen[7] cog_ bus_ack",-1);
	vcdp->declBus  (c+1010,"dig coggen[7] cog_ cnt",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[7] cog_ pll_in",-1,7,0);
	vcdp->declBit  (c+362,"dig coggen[7] cog_ pll_out",-1);
	vcdp->declBus  (c+1295,"dig coggen[7] cog_ pin_in",-1,31,0);
	vcdp->declBus  (c+56,"dig coggen[7] cog_ pin_out",-1,31,0);
	vcdp->declBus  (c+943,"dig coggen[7] cog_ pin_dir",-1,31,0);
	vcdp->declBus  (c+1301,"dig coggen[7] cog_ oh",-1,31,0);
	vcdp->declBus  (c+1302,"dig coggen[7] cog_ ol",-1,31,0);
	vcdp->declBus  (c+1303,"dig coggen[7] cog_ wz",-1,31,0);
	vcdp->declBus  (c+1304,"dig coggen[7] cog_ wc",-1,31,0);
	vcdp->declBus  (c+1305,"dig coggen[7] cog_ wr",-1,31,0);
	vcdp->declBus  (c+1306,"dig coggen[7] cog_ im",-1,31,0);
	vcdp->declBus  (c+1307,"dig coggen[7] cog_ ch",-1,31,0);
	vcdp->declBus  (c+1308,"dig coggen[7] cog_ cl",-1,31,0);
	vcdp->declBus  (c+1309,"dig coggen[7] cog_ dh",-1,31,0);
	vcdp->declBus  (c+1310,"dig coggen[7] cog_ dl",-1,31,0);
	vcdp->declBus  (c+1300,"dig coggen[7] cog_ sh",-1,31,0);
	vcdp->declBus  (c+1299,"dig coggen[7] cog_ sl",-1,31,0);
	vcdp->declBus  (c+1009,"dig coggen[7] cog_ ptr",-1,27,0);
	vcdp->declBus  (c+1288,"dig coggen[7] cog_ m",-1,4,0);
	vcdp->declBit  (c+267,"dig coggen[7] cog_ waiti",-1);
	vcdp->declBit  (c+944,"dig coggen[7] cog_ run",-1);
	vcdp->declBus  (c+44,"dig coggen[7] cog_ px",-1,8,0);
	vcdp->declBus  (c+945,"dig coggen[7] cog_ p",-1,8,0);
	vcdp->declBit  (c+946,"dig coggen[7] cog_ c",-1);
	vcdp->declBit  (c+947,"dig coggen[7] cog_ z",-1);
	vcdp->declBus  (c+508,"dig coggen[7] cog_ i",-1,31,0);
	vcdp->declBit  (c+656,"dig coggen[7] cog_ cond",-1);
	vcdp->declBit  (c+657,"dig coggen[7] cog_ jump_cancel",-1);
	vcdp->declBit  (c+278,"dig coggen[7] cog_ alu_co",-1);
	vcdp->declBit  (c+242,"dig coggen[7] cog_ alu_zo",-1);
	vcdp->declBit  (c+658,"dig coggen[7] cog_ wio",-1);
	vcdp->declBit  (c+511,"dig coggen[7] cog_ setouta",-1);
	vcdp->declBit  (c+512,"dig coggen[7] cog_ setdira",-1);
	vcdp->declBit  (c+513,"dig coggen[7] cog_ setctra",-1);
	vcdp->declBit  (c+514,"dig coggen[7] cog_ setctrb",-1);
	vcdp->declBit  (c+515,"dig coggen[7] cog_ setfrqa",-1);
	vcdp->declBit  (c+516,"dig coggen[7] cog_ setfrqb",-1);
	vcdp->declBit  (c+733,"dig coggen[7] cog_ setphsa",-1);
	vcdp->declBit  (c+734,"dig coggen[7] cog_ setphsb",-1);
	vcdp->declBit  (c+517,"dig coggen[7] cog_ setvid",-1);
	vcdp->declBit  (c+518,"dig coggen[7] cog_ setscl",-1);
	vcdp->declBit  (c+520,"dig coggen[7] cog_ alu_wr",-1);
	vcdp->declBit  (c+659,"dig coggen[7] cog_ ram_ena",-1);
	vcdp->declBit  (c+521,"dig coggen[7] cog_ ram_w",-1);
	vcdp->declBus  (c+45,"dig coggen[7] cog_ ram_a",-1,8,0);
	vcdp->declBus  (c+1256,"dig coggen[7] cog_ ram_q",-1,31,0);
	vcdp->declBus  (c+735,"dig coggen[7] cog_ alu_r",-1,31,0);
	vcdp->declBus  (c+819,"dig coggen[7] cog_ outa",-1,31,0);
	vcdp->declBus  (c+943,"dig coggen[7] cog_ dira",-1,31,0);
	vcdp->declQuad (c+820,"dig coggen[7] cog_ phsa",-1,32,0);
	vcdp->declBus  (c+323,"dig coggen[7] cog_ ctra_pin_out",-1,31,0);
	vcdp->declBit  (c+362,"dig coggen[7] cog_ plla",-1);
	vcdp->declQuad (c+822,"dig coggen[7] cog_ phsb",-1,32,0);
	vcdp->declBus  (c+324,"dig coggen[7] cog_ ctrb_pin_out",-1,31,0);
	vcdp->declBit  (c+363,"dig coggen[7] cog_ pllb",-1);
	vcdp->declBit  (c+1257,"dig coggen[7] cog_ vidack",-1);
	vcdp->declBus  (c+71,"dig coggen[7] cog_ vid_pin_out",-1,31,0);
	vcdp->declBus  (c+1258,"dig coggen[7] cog_ s",-1,31,0);
	vcdp->declBus  (c+1259,"dig coggen[7] cog_ d",-1,31,0);
	vcdp->declBus  (c+824,"dig coggen[7] cog_ ix",-1,31,0);
	vcdp->declBus  (c+825,"dig coggen[7] cog_ sy",-1,31,0);
	vcdp->declBus  (c+46,"dig coggen[7] cog_ sx",-1,31,0);
	vcdp->declBit  (c+948,"dig coggen[7] cog_ cancel",-1);
	vcdp->declBus  (c+509,"dig coggen[7] cog_ condx",-1,3,0);
	vcdp->declBit  (c+1260,"dig coggen[7] cog_ dz",-1);
	vcdp->declBus  (c+660,"dig coggen[7] cog_ jumpx",-1,1,0);
	vcdp->declBit  (c+661,"dig coggen[7] cog_ jump",-1);
	vcdp->declBit  (c+1039,"dig coggen[7] cog_ match",-1);
	vcdp->declBit  (c+266,"dig coggen[7] cog_ waitx",-1);
	vcdp->declBit  (c+1293,"dig coggen[7] cog_ cog_ram_ clk",-1);
	vcdp->declBit  (c+659,"dig coggen[7] cog_ cog_ram_ ena",-1);
	vcdp->declBit  (c+521,"dig coggen[7] cog_ cog_ram_ w",-1);
	vcdp->declBus  (c+45,"dig coggen[7] cog_ cog_ram_ a",-1,8,0);
	vcdp->declBus  (c+735,"dig coggen[7] cog_ cog_ram_ d",-1,31,0);
	vcdp->declBus  (c+1256,"dig coggen[7] cog_ cog_ram_ q",-1,31,0);
	// Tracing: dig coggen[7] cog_ cog_ram_ r // Ignored: Wide memory > --trace-max-array ents at ../HDL/cog_ram.v:40
	vcdp->declBit  (c+1293,"dig coggen[7] cog_ cog_ctra clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[7] cog_ cog_ctra clk_pll",-1);
	vcdp->declBit  (c+543,"dig coggen[7] cog_ cog_ctra ena",-1);
	vcdp->declBit  (c+513,"dig coggen[7] cog_ cog_ctra setctr",-1);
	vcdp->declBit  (c+515,"dig coggen[7] cog_ cog_ctra setfrq",-1);
	vcdp->declBit  (c+733,"dig coggen[7] cog_ cog_ctra setphs",-1);
	vcdp->declBus  (c+735,"dig coggen[7] cog_ cog_ctra data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[7] cog_ cog_ctra pin_in",-1,31,0);
	vcdp->declQuad (c+820,"dig coggen[7] cog_ cog_ctra phs",-1,32,0);
	vcdp->declBus  (c+323,"dig coggen[7] cog_ cog_ctra pin_out",-1,31,0);
	vcdp->declBit  (c+362,"dig coggen[7] cog_ cog_ctra pll",-1);
	vcdp->declBus  (c+1070,"dig coggen[7] cog_ cog_ctra ctr",-1,31,0);
	vcdp->declBus  (c+1040,"dig coggen[7] cog_ cog_ctra frq",-1,31,0);
	vcdp->declBus  (c+826,"dig coggen[7] cog_ cog_ctra dly",-1,1,0);
	vcdp->declQuad (c+118,"dig coggen[7] cog_ cog_ctra tp",-1,47,0);
	vcdp->declBus  (c+1071,"dig coggen[7] cog_ cog_ctra pick",-1,3,0);
	vcdp->declBus  (c+364,"dig coggen[7] cog_ cog_ctra tba",-1,2,0);
	vcdp->declBit  (c+88,"dig coggen[7] cog_ cog_ctra trig",-1);
	vcdp->declBit  (c+325,"dig coggen[7] cog_ cog_ctra outb",-1);
	vcdp->declBit  (c+326,"dig coggen[7] cog_ cog_ctra outa",-1);
	vcdp->declQuad (c+996,"dig coggen[7] cog_ cog_ctra pll_fake",-1,35,0);
	vcdp->declBus  (c+998,"dig coggen[7] cog_ cog_ctra pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[7] cog_ cog_ctrb clk_cog",-1);
	vcdp->declBit  (c+1294,"dig coggen[7] cog_ cog_ctrb clk_pll",-1);
	vcdp->declBit  (c+543,"dig coggen[7] cog_ cog_ctrb ena",-1);
	vcdp->declBit  (c+514,"dig coggen[7] cog_ cog_ctrb setctr",-1);
	vcdp->declBit  (c+516,"dig coggen[7] cog_ cog_ctrb setfrq",-1);
	vcdp->declBit  (c+734,"dig coggen[7] cog_ cog_ctrb setphs",-1);
	vcdp->declBus  (c+735,"dig coggen[7] cog_ cog_ctrb data",-1,31,0);
	vcdp->declBus  (c+1295,"dig coggen[7] cog_ cog_ctrb pin_in",-1,31,0);
	vcdp->declQuad (c+822,"dig coggen[7] cog_ cog_ctrb phs",-1,32,0);
	vcdp->declBus  (c+324,"dig coggen[7] cog_ cog_ctrb pin_out",-1,31,0);
	vcdp->declBit  (c+363,"dig coggen[7] cog_ cog_ctrb pll",-1);
	vcdp->declBus  (c+1072,"dig coggen[7] cog_ cog_ctrb ctr",-1,31,0);
	vcdp->declBus  (c+1041,"dig coggen[7] cog_ cog_ctrb frq",-1,31,0);
	vcdp->declBus  (c+827,"dig coggen[7] cog_ cog_ctrb dly",-1,1,0);
	vcdp->declQuad (c+120,"dig coggen[7] cog_ cog_ctrb tp",-1,47,0);
	vcdp->declBus  (c+1073,"dig coggen[7] cog_ cog_ctrb pick",-1,3,0);
	vcdp->declBus  (c+365,"dig coggen[7] cog_ cog_ctrb tba",-1,2,0);
	vcdp->declBit  (c+89,"dig coggen[7] cog_ cog_ctrb trig",-1);
	vcdp->declBit  (c+327,"dig coggen[7] cog_ cog_ctrb outb",-1);
	vcdp->declBit  (c+328,"dig coggen[7] cog_ cog_ctrb outa",-1);
	vcdp->declQuad (c+999,"dig coggen[7] cog_ cog_ctrb pll_fake",-1,35,0);
	vcdp->declBus  (c+1001,"dig coggen[7] cog_ cog_ctrb pll_taps",-1,7,0);
	vcdp->declBit  (c+1293,"dig coggen[7] cog_ cog_vid_ clk_cog",-1);
	vcdp->declBit  (c+362,"dig coggen[7] cog_ cog_vid_ clk_vid",-1);
	vcdp->declBit  (c+543,"dig coggen[7] cog_ cog_vid_ ena",-1);
	vcdp->declBit  (c+517,"dig coggen[7] cog_ cog_vid_ setvid",-1);
	vcdp->declBit  (c+518,"dig coggen[7] cog_ cog_vid_ setscl",-1);
	vcdp->declBus  (c+735,"dig coggen[7] cog_ cog_vid_ data",-1,31,0);
	vcdp->declBus  (c+1258,"dig coggen[7] cog_ cog_vid_ pixel",-1,31,0);
	vcdp->declBus  (c+1259,"dig coggen[7] cog_ cog_vid_ color",-1,31,0);
	vcdp->declBus  (c+337,"dig coggen[7] cog_ cog_vid_ aural",-1,7,0);
	vcdp->declBit  (c+363,"dig coggen[7] cog_ cog_vid_ carrier",-1);
	vcdp->declBit  (c+1257,"dig coggen[7] cog_ cog_vid_ ack",-1);
	vcdp->declBus  (c+71,"dig coggen[7] cog_ cog_vid_ pin_out",-1,31,0);
	vcdp->declBus  (c+1289,"dig coggen[7] cog_ cog_vid_ vid",-1,31,0);
	vcdp->declBus  (c+1261,"dig coggen[7] cog_ cog_vid_ scl",-1,19,0);
	vcdp->declBus  (c+1167,"dig coggen[7] cog_ cog_vid_ cnts",-1,7,0);
	vcdp->declBus  (c+1168,"dig coggen[7] cog_ cog_vid_ cnt",-1,7,0);
	vcdp->declBus  (c+1169,"dig coggen[7] cog_ cog_vid_ set",-1,11,0);
	vcdp->declBus  (c+1170,"dig coggen[7] cog_ cog_vid_ pixels",-1,31,0);
	vcdp->declBus  (c+1171,"dig coggen[7] cog_ cog_vid_ colors",-1,31,0);
	vcdp->declBit  (c+1290,"dig coggen[7] cog_ cog_vid_ enable",-1);
	vcdp->declBit  (c+47,"dig coggen[7] cog_ cog_vid_ vclk",-1);
	vcdp->declBit  (c+1172,"dig coggen[7] cog_ cog_vid_ new_set",-1);
	vcdp->declBit  (c+1173,"dig coggen[7] cog_ cog_vid_ new_cnt",-1);
	vcdp->declBit  (c+1166,"dig coggen[7] cog_ cog_vid_ cap",-1);
	vcdp->declBus  (c+1262,"dig coggen[7] cog_ cog_vid_ snc",-1,1,0);
	vcdp->declBus  (c+1174,"dig coggen[7] cog_ cog_vid_ discrete",-1,7,0);
	vcdp->declBus  (c+1178,"dig coggen[7] cog_ cog_vid_ colorx",-1,31,0);
	vcdp->declBus  (c+1175,"dig coggen[7] cog_ cog_vid_ phase",-1,3,0);
	vcdp->declBus  (c+1176,"dig coggen[7] cog_ cog_vid_ baseband",-1,3,0);
	vcdp->declBus  (c+385,"dig coggen[7] cog_ cog_vid_ colorphs",-1,3,0);
	vcdp->declBus  (c+551,"dig coggen[7] cog_ cog_vid_ colormod",-1,2,0);
	vcdp->declBus  (c+1177,"dig coggen[7] cog_ cog_vid_ composite",-1,2,0);
	vcdp->declQuad (c+1311,"dig coggen[7] cog_ cog_vid_ level",-1,47,0);
	vcdp->declBus  (c+48,"dig coggen[7] cog_ cog_vid_ broadcast",-1,3,0);
	vcdp->declBus  (c+72,"dig coggen[7] cog_ cog_vid_ outp",-1,7,0);
	vcdp->declBus  (c+510,"dig coggen[7] cog_ cog_alu_ i",-1,5,0);
	vcdp->declBus  (c+1258,"dig coggen[7] cog_ cog_alu_ s",-1,31,0);
	vcdp->declBus  (c+1259,"dig coggen[7] cog_ cog_alu_ d",-1,31,0);
	vcdp->declBus  (c+945,"dig coggen[7] cog_ cog_alu_ p",-1,8,0);
	vcdp->declBit  (c+944,"dig coggen[7] cog_ cog_alu_ run",-1);
	vcdp->declBit  (c+946,"dig coggen[7] cog_ cog_alu_ ci",-1);
	vcdp->declBit  (c+947,"dig coggen[7] cog_ cog_alu_ zi",-1);
	vcdp->declBus  (c+742,"dig coggen[7] cog_ cog_alu_ bus_q",-1,31,0);
	vcdp->declBit  (c+1011,"dig coggen[7] cog_ cog_alu_ bus_c",-1);
	vcdp->declBit  (c+520,"dig coggen[7] cog_ cog_alu_ wr",-1);
	vcdp->declBus  (c+735,"dig coggen[7] cog_ cog_alu_ r",-1,31,0);
	vcdp->declBit  (c+278,"dig coggen[7] cog_ cog_alu_ co",-1);
	vcdp->declBit  (c+242,"dig coggen[7] cog_ cog_alu_ zo",-1);
	vcdp->declBus  (c+393,"dig coggen[7] cog_ cog_alu_ dr",-1,31,0);
	vcdp->declArray(c+232,"dig coggen[7] cog_ cog_alu_ ri",-1,247,0);
	vcdp->declQuad (c+662,"dig coggen[7] cog_ cog_alu_ rot",-1,62,0);
	vcdp->declBus  (c+664,"dig coggen[7] cog_ cog_alu_ rotr",-1,31,0);
	vcdp->declBus  (c+519,"dig coggen[7] cog_ cog_alu_ rot_r",-1,31,0);
	vcdp->declBit  (c+408,"dig coggen[7] cog_ cog_alu_ rot_c",-1);
	vcdp->declBus  (c+240,"dig coggen[7] cog_ cog_alu_ log_s",-1,1,0);
	vcdp->declArray(c+1263,"dig coggen[7] cog_ cog_alu_ log_x",-1,127,0);
	vcdp->declArray(c+949,"dig coggen[7] cog_ cog_alu_ mov_x",-1,127,0);
	vcdp->declBus  (c+665,"dig coggen[7] cog_ cog_alu_ log_r",-1,31,0);
	vcdp->declBit  (c+666,"dig coggen[7] cog_ cog_alu_ log_c",-1);
	vcdp->declBus  (c+953,"dig coggen[7] cog_ cog_alu_ ads",-1,3,0);
	vcdp->declBit  (c+667,"dig coggen[7] cog_ cog_alu_ add_sub",-1);
	vcdp->declBit  (c+241,"dig coggen[7] cog_ cog_alu_ add_ci",-1);
	vcdp->declBus  (c+668,"dig coggen[7] cog_ cog_alu_ add_d",-1,31,0);
	vcdp->declBus  (c+669,"dig coggen[7] cog_ cog_alu_ add_s",-1,31,0);
	vcdp->declQuad (c+736,"dig coggen[7] cog_ cog_alu_ add_x",-1,34,0);
	vcdp->declBus  (c+738,"dig coggen[7] cog_ cog_alu_ add_r",-1,31,0);
	vcdp->declBit  (c+739,"dig coggen[7] cog_ cog_alu_ add_co",-1);
	vcdp->declBit  (c+740,"dig coggen[7] cog_ cog_alu_ add_cm",-1);
	vcdp->declBit  (c+741,"dig coggen[7] cog_ cog_alu_ add_cs",-1);
	vcdp->declBit  (c+409,"dig coggen[7] cog_ cog_alu_ add_c",-1);
	vcdp->declBus  (c+1300,"$unit HUB_RAM_KL",-1,31,0);
	vcdp->declArray(c+1313,"$unit HUB_RAM_INIT0",-1,295,0);
	vcdp->declArray(c+1323,"$unit HUB_RAM_INIT1",-1,295,0);
	vcdp->declArray(c+1333,"$unit HUB_RAM_INIT2",-1,295,0);
	vcdp->declArray(c+1343,"$unit HUB_RAM_INIT3",-1,295,0);
	vcdp->declBus  (c+1300,"$unit HUB_ROM_KL",-1,31,0);
	vcdp->declArray(c+1353,"$unit HUB_ROM_INIT",-1,271,0);
	vcdp->declArray(c+1362,"$unit COG_RAM_INIT",-1,167,0);
    }
}

void Vdig::traceFullThis__1(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
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
    VL_SIGW(__Vtemp162,127,0,4);
    VL_SIGW(__Vtemp165,255,0,8);
    VL_SIGW(__Vtemp166,127,0,4);
    VL_SIGW(__Vtemp169,255,0,8);
    VL_SIGW(__Vtemp170,127,0,4);
    VL_SIGW(__Vtemp173,255,0,8);
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
    VL_SIGW(__Vtemp195,127,0,4);
    VL_SIGW(__Vtemp197,127,0,4);
    VL_SIGW(__Vtemp199,127,0,4);
    VL_SIGW(__Vtemp201,127,0,4);
    VL_SIGW(__Vtemp203,127,0,4);
    VL_SIGW(__Vtemp205,127,0,4);
    VL_SIGW(__Vtemp206,319,0,10);
    VL_SIGW(__Vtemp207,319,0,10);
    VL_SIGW(__Vtemp208,319,0,10);
    VL_SIGW(__Vtemp209,319,0,10);
    VL_SIGW(__Vtemp210,287,0,9);
    //char	__VpadToAlign860[4];
    VL_SIGW(__Vtemp211,191,0,6);
    // Body
    {
	vcdp->fullArray(c+1,(vlTOPp->dig__DOT__outx),256);
	vcdp->fullBus  (c+9,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+10,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+11,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+12,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+13,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+14,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+15,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+16,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+17,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+18,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+19,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+20,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+21,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+22,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+23,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+24,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+25,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+26,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+27,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+28,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+29,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+30,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+31,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+32,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+33,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+34,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+35,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+36,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+37,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+38,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+39,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+40,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+41,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+42,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+43,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+44,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__px),9);
	vcdp->fullBus  (c+45,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_a),9);
	vcdp->fullBus  (c+46,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__sx),32);
	vcdp->fullBit  (c+47,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->fullBus  (c+48,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->fullBus  (c+49,(((((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+50,(((((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+51,(((((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+52,(((((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+53,(((((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+54,(((((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+55,(((((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+56,(((((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__outa 
				  | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						 >> 0x1eU)) 
					     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
						>> 1U))) 
				      << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 9U))) 
				     | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
						   >> 0x1eU)) 
					       & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
					<< (0x1fU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))) 
				 | (((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						>> 0x1eU)) 
					    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					       >> 1U))) 
				     << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 9U))) 
				    | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
						  >> 0x1eU)) 
					      & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				       << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))) 
				| ((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						 >> 0x1dU)))
				    ? ((((0x40000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? ((0x20000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					      ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					      : (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
						  << 4U) 
						 | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
					  : (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
					& vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				       << (0x18U & 
					   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					    >> 6U)))
				    : 0U)) & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__dira)),32);
	vcdp->fullBus  (c+57,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+58,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+59,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+60,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+61,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+62,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+63,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+64,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+65,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+66,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+67,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+68,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+69,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+70,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+71,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))
			        ? ((((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				      ? ((0x20000000U 
					  & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
					  ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
					  : (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					      << 4U) 
					     | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
				      : (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete)) 
				    & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid) 
				   << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 6U)))
			        : 0U)),32);
	vcdp->fullBus  (c+72,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			        ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				    ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				    : (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
					<< 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			        : (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
	vcdp->fullBus  (c+73,(vlTOPp->dig__DOT__hub___DOT__mem_q),32);
	vcdp->fullBit  (c+74,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+75,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+76,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+77,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+78,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+79,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+80,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+81,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+82,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+83,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+84,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+85,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+86,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+87,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+88,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 2U)))));
	vcdp->fullBit  (c+89,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				      ? (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> (0x1fU 
					     & ((IData)(0x1aU) 
						+ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				      : ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 2U)))));
	vcdp->fullQuad (c+90,((((QData)((IData)((0x92U 
						 | (((2U 
						      == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						     << 0x1fU) 
						    | ((0x40000000U 
							& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							   << 0x1eU)) 
						       | (((2U 
							    == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							   << 0x1cU) 
							  | ((0x2000000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								 << 0x19U)) 
							     | ((0x1000000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0x18U)) 
								| ((0x400000U 
								    & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								       << 0x16U)) 
								   | (((1U 
									== (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								       << 0x13U) 
								      | ((0x40000U 
									  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									     << 0x12U)) 
									 | (((1U 
									      == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									     << 0x10U) 
									    | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
									       | ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				<< 0x10U) | (QData)((IData)(
							    (0x4920U 
							     | ((0x8000U 
								 & ((IData)(
									    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
									     >> 0x1fU)) 
								    << 0xfU)) 
								| ((0x1000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
								       << 0xcU)) 
								   | ((0x400U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla)) 
									  << 0xaU)) 
								      | (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla) 
									  << 9U) 
									 | ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla) 
									    << 6U)))))))))),48);
	vcdp->fullQuad (c+92,((((QData)((IData)((0x92U 
						 | (((2U 
						      == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						     << 0x1fU) 
						    | ((0x40000000U 
							& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							   << 0x1eU)) 
						       | (((2U 
							    == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							   << 0x1cU) 
							  | ((0x2000000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								 << 0x19U)) 
							     | ((0x1000000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0x18U)) 
								| ((0x400000U 
								    & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								       << 0x16U)) 
								   | (((1U 
									== (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								       << 0x13U) 
								      | ((0x40000U 
									  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									     << 0x12U)) 
									 | (((1U 
									      == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									     << 0x10U) 
									    | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
									       | ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				<< 0x10U) | (QData)((IData)(
							    (0x4920U 
							     | ((0x8000U 
								 & ((IData)(
									    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
									     >> 0x1fU)) 
								    << 0xfU)) 
								| ((0x1000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
								       << 0xcU)) 
								   | ((0x400U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb)) 
									  << 0xaU)) 
								      | (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb) 
									  << 9U) 
									 | ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb) 
									    << 6U)))))))))),48);
	vcdp->fullQuad (c+94,((((QData)((IData)((0x92U 
						 | (((2U 
						      == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						     << 0x1fU) 
						    | ((0x40000000U 
							& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							   << 0x1eU)) 
						       | (((2U 
							    == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							   << 0x1cU) 
							  | ((0x2000000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								 << 0x19U)) 
							     | ((0x1000000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0x18U)) 
								| ((0x400000U 
								    & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								       << 0x16U)) 
								   | (((1U 
									== (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								       << 0x13U) 
								      | ((0x40000U 
									  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									     << 0x12U)) 
									 | (((1U 
									      == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									     << 0x10U) 
									    | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
									       | ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				<< 0x10U) | (QData)((IData)(
							    (0x4920U 
							     | ((0x8000U 
								 & ((IData)(
									    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
									     >> 0x1fU)) 
								    << 0xfU)) 
								| ((0x1000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
								       << 0xcU)) 
								   | ((0x400U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla)) 
									  << 0xaU)) 
								      | (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla) 
									  << 9U) 
									 | ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla) 
									    << 6U)))))))))),48);
	vcdp->fullQuad (c+96,((((QData)((IData)((0x92U 
						 | (((2U 
						      == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						     << 0x1fU) 
						    | ((0x40000000U 
							& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							   << 0x1eU)) 
						       | (((2U 
							    == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							   << 0x1cU) 
							  | ((0x2000000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								 << 0x19U)) 
							     | ((0x1000000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0x18U)) 
								| ((0x400000U 
								    & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								       << 0x16U)) 
								   | (((1U 
									== (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								       << 0x13U) 
								      | ((0x40000U 
									  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									     << 0x12U)) 
									 | (((1U 
									      == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									     << 0x10U) 
									    | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
									       | ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				<< 0x10U) | (QData)((IData)(
							    (0x4920U 
							     | ((0x8000U 
								 & ((IData)(
									    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
									     >> 0x1fU)) 
								    << 0xfU)) 
								| ((0x1000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
								       << 0xcU)) 
								   | ((0x400U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb)) 
									  << 0xaU)) 
								      | (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb) 
									  << 9U) 
									 | ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb) 
									    << 6U)))))))))),48);
	vcdp->fullQuad (c+98,((((QData)((IData)((0x92U 
						 | (((2U 
						      == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						     << 0x1fU) 
						    | ((0x40000000U 
							& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							   << 0x1eU)) 
						       | (((2U 
							    == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							   << 0x1cU) 
							  | ((0x2000000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								 << 0x19U)) 
							     | ((0x1000000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0x18U)) 
								| ((0x400000U 
								    & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								       << 0x16U)) 
								   | (((1U 
									== (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								       << 0x13U) 
								      | ((0x40000U 
									  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									     << 0x12U)) 
									 | (((1U 
									      == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									     << 0x10U) 
									    | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
									       | ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				<< 0x10U) | (QData)((IData)(
							    (0x4920U 
							     | ((0x8000U 
								 & ((IData)(
									    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
									     >> 0x1fU)) 
								    << 0xfU)) 
								| ((0x1000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
								       << 0xcU)) 
								   | ((0x400U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla)) 
									  << 0xaU)) 
								      | (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla) 
									  << 9U) 
									 | ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla) 
									    << 6U)))))))))),48);
	vcdp->fullQuad (c+100,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+102,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+104,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+106,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+108,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+110,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+112,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+114,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+116,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+118,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla) 
									     << 6U)))))))))),48);
	vcdp->fullQuad (c+120,((((QData)((IData)((0x92U 
						  | (((2U 
						       == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						      << 0x1fU) 
						     | ((0x40000000U 
							 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1eU)) 
							| (((2U 
							     == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							    << 0x1cU) 
							   | ((0x2000000U 
							       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								  << 0x19U)) 
							      | ((0x1000000U 
								  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								     << 0x18U)) 
								 | ((0x400000U 
								     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x16U)) 
								    | (((1U 
									 == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									<< 0x13U) 
								       | ((0x40000U 
									   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x12U)) 
									  | (((1U 
									       == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									      << 0x10U) 
									     | ((0x2000U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 0xcU)) 
										| ((0x400U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 0xaU)) 
										| ((0x40U 
										& ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 5U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
										<< 2U)) 
										| (1U 
										& (~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)))))))))))))))))))))) 
				 << 0x10U) | (QData)((IData)(
							     (0x4920U 
							      | ((0x8000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
									      >> 0x1fU)) 
								     << 0xfU)) 
								 | ((0x1000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									<< 0xcU)) 
								    | ((0x400U 
									& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb)) 
									   << 0xaU)) 
								       | (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb) 
									   << 9U) 
									  | ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb) 
									     << 6U)))))))))),48);
	vcdp->fullBit  (c+122,(vlTOPp->dig__DOT__hub___DOT__mem_w));
	vcdp->fullBit  (c+123,(((IData)(vlTOPp->dig__DOT__bus_sel) 
				& ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1cU))) 
				   & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m) 
				      >> 4U)))));
	vcdp->fullBit  (c+124,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				      & (~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					    >> 0x17U))))));
	vcdp->fullBus  (c+125,((3U & ((1U & (IData)(vlTOPp->dig__DOT__bus_sel))
				       ? (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+126,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 1U) & ((0U == (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+127,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				       >> 1U) & (~ 
						 (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+128,((3U & ((2U & (IData)(vlTOPp->dig__DOT__bus_sel))
				       ? (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+129,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 2U) & ((0U == (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+130,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				       >> 2U) & (~ 
						 (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+131,((3U & ((4U & (IData)(vlTOPp->dig__DOT__bus_sel))
				       ? (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+132,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 3U) & ((0U == (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+133,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				       >> 3U) & (~ 
						 (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+134,((3U & ((8U & (IData)(vlTOPp->dig__DOT__bus_sel))
				       ? (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+135,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 4U) & ((0U == (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+136,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				       >> 4U) & (~ 
						 (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+137,((3U & ((0x10U & (IData)(vlTOPp->dig__DOT__bus_sel))
				       ? (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+138,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 5U) & ((0U == (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+139,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				       >> 5U) & (~ 
						 (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+140,((3U & ((0x20U & (IData)(vlTOPp->dig__DOT__bus_sel))
				       ? (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+141,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 6U) & ((0U == (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+142,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				       >> 6U) & (~ 
						 (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+143,((3U & ((0x40U & (IData)(vlTOPp->dig__DOT__bus_sel))
				       ? (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullBit  (c+144,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 7U) & ((0U == (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1cU))) 
					   & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m) 
					      >> 4U)))));
	vcdp->fullBit  (c+145,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				       >> 7U) & (~ 
						 (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 0x17U))))));
	vcdp->fullBus  (c+146,((3U & ((0x80U & (IData)(vlTOPp->dig__DOT__bus_sel))
				       ? (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					  >> 0x1aU)
				       : 0U))),2);
	vcdp->fullArray(c+147,(vlTOPp->dig__DOT__dirx),256);
	VL_EXTEND_WQ(124,62, __Vtemp142, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)))));
	__Vtemp145[0U] = __Vtemp142[0U];
	__Vtemp145[1U] = __Vtemp142[1U];
	__Vtemp145[2U] = __Vtemp142[2U];
	__Vtemp145[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp142[3U]);
	__Vtemp145[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp145[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp145[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp145[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+155,(__Vtemp145),248);
	vcdp->fullBus  (c+163,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+164,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+165,((1U & ((~ (IData)((0U 
						  != vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp146, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)))));
	__Vtemp149[0U] = __Vtemp146[0U];
	__Vtemp149[1U] = __Vtemp146[1U];
	__Vtemp149[2U] = __Vtemp146[2U];
	__Vtemp149[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp146[3U]);
	__Vtemp149[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp149[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp149[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp149[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+166,(__Vtemp149),248);
	vcdp->fullBus  (c+174,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+175,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+176,((1U & ((~ (IData)((0U 
						  != vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp150, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)))));
	__Vtemp153[0U] = __Vtemp150[0U];
	__Vtemp153[1U] = __Vtemp150[1U];
	__Vtemp153[2U] = __Vtemp150[2U];
	__Vtemp153[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp150[3U]);
	__Vtemp153[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp153[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp153[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp153[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+177,(__Vtemp153),248);
	vcdp->fullBus  (c+185,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+186,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+187,((1U & ((~ (IData)((0U 
						  != vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp154, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)))));
	__Vtemp157[0U] = __Vtemp154[0U];
	__Vtemp157[1U] = __Vtemp154[1U];
	__Vtemp157[2U] = __Vtemp154[2U];
	__Vtemp157[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp154[3U]);
	__Vtemp157[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp157[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp157[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp157[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+188,(__Vtemp157),248);
	vcdp->fullBus  (c+196,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+197,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+198,((1U & ((~ (IData)((0U 
						  != vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp158, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)))));
	__Vtemp161[0U] = __Vtemp158[0U];
	__Vtemp161[1U] = __Vtemp158[1U];
	__Vtemp161[2U] = __Vtemp158[2U];
	__Vtemp161[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp158[3U]);
	__Vtemp161[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp161[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp161[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp161[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+199,(__Vtemp161),248);
	vcdp->fullBus  (c+207,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+208,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+209,((1U & ((~ (IData)((0U 
						  != vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp162, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)))));
	__Vtemp165[0U] = __Vtemp162[0U];
	__Vtemp165[1U] = __Vtemp162[1U];
	__Vtemp165[2U] = __Vtemp162[2U];
	__Vtemp165[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp162[3U]);
	__Vtemp165[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp165[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp165[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp165[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+210,(__Vtemp165),248);
	vcdp->fullBus  (c+218,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+219,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+220,((1U & ((~ (IData)((0U 
						  != vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp166, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)))));
	__Vtemp169[0U] = __Vtemp166[0U];
	__Vtemp169[1U] = __Vtemp166[1U];
	__Vtemp169[2U] = __Vtemp166[2U];
	__Vtemp169[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp166[3U]);
	__Vtemp169[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp169[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp169[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp169[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+221,(__Vtemp169),248);
	vcdp->fullBus  (c+229,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+230,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+231,((1U & ((~ (IData)((0U 
						  != vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	VL_EXTEND_WQ(124,62, __Vtemp170, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)))));
	__Vtemp173[0U] = __Vtemp170[0U];
	__Vtemp173[1U] = __Vtemp170[1U];
	__Vtemp173[2U] = __Vtemp170[2U];
	__Vtemp173[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp170[3U]);
	__Vtemp173[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp173[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp173[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					 >> 6U)) | 
			  (0xfc000000U & ((IData)(((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						   >> 0x20U)) 
					  << 0x1aU)));
	__Vtemp173[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->fullArray(c+232,(__Vtemp173),248);
	vcdp->fullBus  (c+240,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
				 ? (2U & ((((0x8000000U 
					     & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
					     ? (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z)
					     : (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c)) 
					   << 1U) ^ 
					  (0x7eU & 
					   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					    >> 0x19U))))
				 : ((2U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					   >> 0x1aU)) 
				    | (1U & (~ VL_REDXOR_32(
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
								>> 0x1aU)))))))),2);
	vcdp->fullBit  (c+241,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						>> 0x1dU))) 
				  & ((1U == (7U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1aU))) 
				     | (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					>> 0x1bU))) 
				 & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c)) 
				| ((3U == (3U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 0x1dU))) 
				   & (1U == (3U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))))));
	vcdp->fullBit  (c+242,((1U & ((~ (IData)((0U 
						  != vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__alu_r))) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z) 
					 | (~ ((6U 
						== 
						(7U 
						 & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						    >> 0x1dU))) 
					       & ((1U 
						   == 
						   (7U 
						    & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))))))));
	vcdp->fullBus  (c+243,(vlTOPp->dig__DOT__bus_ack),8);
	vcdp->fullBit  (c+244,((1U & (IData)(vlTOPp->dig__DOT__bus_ack))));
	vcdp->fullBit  (c+245,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				      >> 1U))));
	vcdp->fullBit  (c+246,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				      >> 2U))));
	vcdp->fullBit  (c+247,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				      >> 3U))));
	vcdp->fullBit  (c+248,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				      >> 4U))));
	vcdp->fullBit  (c+249,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				      >> 5U))));
	vcdp->fullBit  (c+250,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				      >> 6U))));
	vcdp->fullBit  (c+251,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				      >> 7U))));
	vcdp->fullBit  (c+252,((1U & ((0U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ (IData)(vlTOPp->dig__DOT__bus_ack))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+253,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ (IData)(vlTOPp->dig__DOT__bus_ack))
				    : ((0x1eU == (0x1fU 
						  & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						     >> 0x1bU)))
				        ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
				        : ((0x3eU == 
					    (0x3fU 
					     & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
					    ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
					    : ((0x3fU 
						== 
						(0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					       & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+254,((1U & ((0U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					     >> 1U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+255,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					  >> 1U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+256,((1U & ((0U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					     >> 2U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+257,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					  >> 2U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+258,((1U & ((0U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					     >> 3U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+259,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					  >> 3U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+260,((1U & ((0U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					     >> 4U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+261,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					  >> 4U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+262,((1U & ((0U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					     >> 5U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+263,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					  >> 5U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+264,((1U & ((0U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					     >> 6U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+265,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					  >> 6U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+266,((1U & ((0U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					     >> 7U))
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 0x1bU)))
					   ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match))
					   : ((0x3eU 
					       == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					       ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match))
					       : ((0x3fU 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBit  (c+267,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cond) 
				& ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1cU)))
				    ? (~ ((IData)(vlTOPp->dig__DOT__bus_ack) 
					  >> 7U)) : 
				   ((0x1eU == (0x1fU 
					       & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 0x1bU)))
				     ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match))
				     : ((0x3eU == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1aU)))
					 ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match))
					 : ((0x3fU 
					     == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						    >> 0x1aU))) 
					    & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
	vcdp->fullBus  (c+268,(vlTOPp->dig__DOT__hub___DOT__mem_wb),4);
	vcdp->fullBus  (c+269,(vlTOPp->dig__DOT__hub___DOT__mem_d),32);
	vcdp->fullBus  (c+270,(vlTOPp->dig__DOT__hub___DOT__ramq),32);
	vcdp->fullBit  (c+271,((1U & ((0U == (7U & 
					      (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->dig__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+272,((1U & ((0U == (7U & 
					      (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->dig__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+273,((1U & ((0U == (7U & 
					      (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->dig__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+274,((1U & ((0U == (7U & 
					      (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->dig__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+275,((1U & ((0U == (7U & 
					      (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->dig__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+276,((1U & ((0U == (7U & 
					      (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->dig__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+277,((1U & ((0U == (7U & 
					      (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->dig__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBit  (c+278,((1U & ((0U == (7U & 
					      (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					       >> 0x1dU)))
				       ? (IData)(vlTOPp->dig__DOT__hub___DOT__sys_c)
				       : ((1U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? ((1U & 
					       ((~ (IData)(
							   (3U 
							    == 
							    (3U 
							     & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
								>> 0x1bU))))) 
						& (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1aU)))
					       ? vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr
					       : vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)
					   : ((3U == 
					       (7U 
						& (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1dU)))
					       ? VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r)
					       : ((0x38U 
						   == 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1aU)))
						   ? (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U))
						   : 
						  ((5U 
						    == 
						    (7U 
						     & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							>> 0x1dU)))
						    ? 
						   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
						    >> 0x1fU)
						    : 
						   (((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1fU) 
						     & (1U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							    >> 0x1cU))))
						     ? 
						    ((IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x22U)) 
						     ^ 
						     (~ (IData)(
								(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
								 >> 0x20U))))
						     : 
						    ((8U 
						      == 
						      (0xfU 
						       & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							  >> 0x1bU)))
						      ? (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						      : 
						     ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)) 
						      ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_sub))))))))))));
	vcdp->fullBus  (c+279,(vlTOPp->dig__DOT__bus_r),8);
	vcdp->fullBit  (c+280,((0U != (IData)(vlTOPp->dig__DOT__bus_r))));
	vcdp->fullBus  (c+281,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+282,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+283,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+284,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+285,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+286,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+287,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+288,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+289,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+290,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+291,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+292,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+293,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+294,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+295,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+296,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+297,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+298,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+299,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+300,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+301,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+302,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+303,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+304,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+305,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+306,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+307,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+308,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+309,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+310,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+311,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+312,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+313,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+314,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+315,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+316,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+317,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+318,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+319,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+320,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+321,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+322,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBus  (c+323,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->fullBus  (c+324,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					    >> 0x1eU)) 
					& ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					   >> 1U))) 
				 << (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 9U))) 
				| ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					      >> 0x1eU)) 
					  & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				   << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->fullBit  (c+325,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+326,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->fullBit  (c+327,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					 >> 1U)))));
	vcdp->fullBit  (c+328,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					  >> 0x1eU)) 
				      & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
	vcdp->fullBit  (c+329,(vlTOPp->dig__DOT__hub___DOT__sys));
	vcdp->fullBus  (c+330,(vlTOPp->dig__DOT__hub___DOT__enc),8);
	vcdp->fullBit  (c+331,((0xffU == (IData)(vlTOPp->dig__DOT__hub___DOT__enc))));
	vcdp->fullBus  (c+332,(((0xfU == (0xfU & (IData)(vlTOPp->dig__DOT__hub___DOT__enc)))
				 ? ((3U == (3U & ((IData)(vlTOPp->dig__DOT__hub___DOT__enc) 
						  >> 4U)))
				     ? ((0x40U & (IData)(vlTOPp->dig__DOT__hub___DOT__enc))
					 ? 7U : 6U)
				     : ((0x10U & (IData)(vlTOPp->dig__DOT__hub___DOT__enc))
					 ? 5U : 4U))
				 : ((3U == (3U & (IData)(vlTOPp->dig__DOT__hub___DOT__enc)))
				     ? ((4U & (IData)(vlTOPp->dig__DOT__hub___DOT__enc))
					 ? 3U : 2U)
				     : ((1U & (IData)(vlTOPp->dig__DOT__hub___DOT__enc))
					 ? 1U : 0U)))),3);
	vcdp->fullBit  (c+333,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+334,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+335,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+336,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBus  (c+337,(vlTOPp->dig__DOT__pll),8);
	vcdp->fullBit  (c+338,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+339,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+340,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+341,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+342,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+343,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+344,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+345,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+346,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+347,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+348,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+349,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+350,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+351,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+352,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+353,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+354,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+355,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+356,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+357,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+358,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+359,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+360,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+361,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBit  (c+362,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla));
	vcdp->fullBit  (c+363,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb));
	vcdp->fullBus  (c+364,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->fullBus  (c+365,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
	vcdp->fullBus  (c+366,(vlTOPp->dig__DOT__ptr_w),8);
	vcdp->fullBus  (c+367,(vlTOPp->dig__DOT__hub___DOT__num),3);
	vcdp->fullBus  (c+368,((0xffU & ((IData)(1U) 
					 << (IData)(vlTOPp->dig__DOT__hub___DOT__num)))),8);
	vcdp->fullBit  (c+369,(vlTOPp->dig__DOT__hub___DOT__cog_start));
	vcdp->fullBit  (c+370,((1U & (IData)(vlTOPp->dig__DOT__ptr_w))));
	vcdp->fullBit  (c+371,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				      >> 1U))));
	vcdp->fullBit  (c+372,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				      >> 2U))));
	vcdp->fullBit  (c+373,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				      >> 3U))));
	vcdp->fullBit  (c+374,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				      >> 4U))));
	vcdp->fullBit  (c+375,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				      >> 5U))));
	vcdp->fullBit  (c+376,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				      >> 6U))));
	vcdp->fullBit  (c+377,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				      >> 7U))));
	vcdp->fullBus  (c+378,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+379,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+380,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+381,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+382,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+383,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+384,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+385,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
	vcdp->fullBus  (c+386,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+387,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+388,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+389,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+390,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+391,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+392,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBus  (c+393,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->fullBit  (c+394,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+395,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+396,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+397,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+398,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+399,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+400,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+401,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+402,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+403,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+404,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+405,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+406,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+407,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBit  (c+408,((1U & ((1U & ((~ (IData)(
							(3U 
							 == 
							 (3U 
							  & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							     >> 0x1bU))))) 
					     & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						>> 0x1aU)))
				       ? vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr
				       : vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))));
	vcdp->fullBit  (c+409,((1U & ((0x38U == (0x3fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						    >> 0x1aU)))
				       ? (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						  >> 0x22U))
				       : ((5U == (7U 
						  & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						     >> 0x1dU)))
					   ? (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
					      >> 0x1fU)
					   : (((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						>> 0x1fU) 
					       & (1U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1cU))))
					       ? ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							   >> 0x22U)) 
						  ^ 
						  (~ (IData)(
							     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							      >> 0x20U))))
					       : ((8U 
						   == 
						   (0xfU 
						    & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1bU)))
						   ? (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)
						   : 
						  ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)) 
						   ^ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_sub)))))))));
	vcdp->fullBus  (c+410,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+411,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+412,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+413,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+414,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+415,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+416,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+417,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+418,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+419,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+420,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+421,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+422,((1U & ((4U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+423,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+424,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+425,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+426,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+427,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+428,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+429,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+430,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+431,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+432,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+433,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+434,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+435,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+436,((1U & ((4U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+437,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+438,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+439,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+440,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+441,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+442,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+443,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+444,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+445,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+446,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+447,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+448,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+449,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+450,((1U & ((4U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+451,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+452,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+453,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+454,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+455,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+456,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+457,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+458,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+459,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+460,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+461,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+462,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+463,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+464,((1U & ((4U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+465,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+466,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+467,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+468,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+469,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+470,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+471,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+472,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+473,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+474,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+475,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+476,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+477,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+478,((1U & ((4U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+479,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+480,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+481,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+482,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+483,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+484,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+485,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+486,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+487,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+488,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+489,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+490,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+491,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+492,((1U & ((4U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+493,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+494,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+495,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+496,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+497,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+498,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+499,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+500,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+501,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+502,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+503,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+504,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+505,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+506,((1U & ((4U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+507,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullBus  (c+508,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i),32);
	vcdp->fullBus  (c+509,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					>> 0x12U))),4);
	vcdp->fullBus  (c+510,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					 >> 0x1aU))),6);
	vcdp->fullBit  (c+511,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+512,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+513,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+514,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						  >> 9U))))));
	vcdp->fullBit  (c+515,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (0xaU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+516,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (0xbU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+517,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (0xeU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBit  (c+518,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
				& (0xfU == (0xfU & 
					    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 9U))))));
	vcdp->fullBus  (c+519,(((1U & ((~ (IData)((3U 
						   == 
						   (3U 
						    & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1bU))))) 
				       & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					  >> 0x1aU)))
				 ? ((0x80000000U & 
				     ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
				      << 0x1fU)) | 
				    ((0x40000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 1U)) 
				       << 0x1eU)) | 
				     ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))
				 : (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot))),32);
	vcdp->fullBit  (c+520,((1U & ((4U == (0xfU 
					      & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 0x1cU)))
				       ? ((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					   >> 0x1aU) 
					  ^ ((0x8000000U 
					      & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
					      ? (~ (IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							    >> 0x22U)))
					      : (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
				       : ((0x38U != 
					   (0x3fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					     >> 0x1aU))) 
					  | (IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						     >> 0x22U)))))));
	vcdp->fullBit  (c+521,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m) 
				       >> 3U) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1cU)))
						  ? 
						 ((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x1aU) 
						  ^ 
						  ((0x8000000U 
						    & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
						    ? 
						   (~ (IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							       >> 0x22U)))
						    : (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs)))
						  : 
						 ((0x38U 
						   != 
						   (0x3fU 
						    & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						       >> 0x1aU))) 
						  | (IData)(
							    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							     >> 0x22U))))))));
	vcdp->fullArray(c+522,(vlTOPp->dig__DOT__bus_a),128);
	vcdp->fullBus  (c+526,((0xffffU & ((((((((vlTOPp->dig__DOT__bus_a[3U] 
						  >> 0x10U) 
						 | vlTOPp->dig__DOT__bus_a[3U]) 
						| ((vlTOPp->dig__DOT__bus_a[3U] 
						    << 0x10U) 
						   | (vlTOPp->dig__DOT__bus_a[2U] 
						      >> 0x10U))) 
					       | vlTOPp->dig__DOT__bus_a[2U]) 
					      | ((vlTOPp->dig__DOT__bus_a[2U] 
						  << 0x10U) 
						 | (vlTOPp->dig__DOT__bus_a[1U] 
						    >> 0x10U))) 
					     | vlTOPp->dig__DOT__bus_a[1U]) 
					    | ((vlTOPp->dig__DOT__bus_a[1U] 
						<< 0x10U) 
					       | (vlTOPp->dig__DOT__bus_a[0U] 
						  >> 0x10U))) 
					   | vlTOPp->dig__DOT__bus_a[0U]))),16);
	vcdp->fullArray(c+527,(vlTOPp->dig__DOT__bus_d),256);
	vcdp->fullBus  (c+535,((((((((vlTOPp->dig__DOT__bus_d[7U] 
				      | vlTOPp->dig__DOT__bus_d[6U]) 
				     | vlTOPp->dig__DOT__bus_d[5U]) 
				    | vlTOPp->dig__DOT__bus_d[4U]) 
				   | vlTOPp->dig__DOT__bus_d[3U]) 
				  | vlTOPp->dig__DOT__bus_d[2U]) 
				 | vlTOPp->dig__DOT__bus_d[1U]) 
				| vlTOPp->dig__DOT__bus_d[0U])),32);
	vcdp->fullBit  (c+536,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+537,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+538,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+539,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+540,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+541,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+542,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBit  (c+543,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT____Vcellinp__cog___ena));
	vcdp->fullBus  (c+544,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+545,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+546,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+547,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+548,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+549,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+550,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+551,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
	vcdp->fullBus  (c+552,(vlTOPp->dig__DOT__bus_e),8);
	vcdp->fullBus  (c+553,(vlTOPp->dig__DOT__bus_w),8);
	vcdp->fullBus  (c+554,(vlTOPp->dig__DOT__bus_s),16);
	vcdp->fullBit  (c+555,((0U != (IData)(vlTOPp->dig__DOT__bus_e))));
	vcdp->fullBit  (c+556,((0U != (IData)(vlTOPp->dig__DOT__bus_w))));
	vcdp->fullBus  (c+557,((3U & (((((((((IData)(vlTOPp->dig__DOT__bus_s) 
					     >> 0xeU) 
					    | ((IData)(vlTOPp->dig__DOT__bus_s) 
					       >> 0xcU)) 
					   | ((IData)(vlTOPp->dig__DOT__bus_s) 
					      >> 0xaU)) 
					  | ((IData)(vlTOPp->dig__DOT__bus_s) 
					     >> 8U)) 
					 | ((IData)(vlTOPp->dig__DOT__bus_s) 
					    >> 6U)) 
					| ((IData)(vlTOPp->dig__DOT__bus_s) 
					   >> 4U)) 
				       | ((IData)(vlTOPp->dig__DOT__bus_s) 
					  >> 2U)) | (IData)(vlTOPp->dig__DOT__bus_s)))),2);
	vcdp->fullBit  (c+558,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+559,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+560,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+561,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+562,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+563,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+564,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+566,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+567,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+568,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+569,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+570,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+571,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+572,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+573,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+574,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+575,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+576,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+577,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+578,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+580,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+581,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+582,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+583,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+584,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+585,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+586,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+587,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+588,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+589,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+590,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+591,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+592,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+594,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+595,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+596,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+597,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+598,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+599,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+600,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+601,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+602,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+603,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+604,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+605,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+606,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+608,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+609,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+610,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+611,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+612,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+613,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+614,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+615,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+616,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+617,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+618,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+619,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+620,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+622,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+623,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+624,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+625,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+626,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+627,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+628,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+629,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+630,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+631,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+632,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+633,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+634,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+636,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+637,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+638,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+639,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+640,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+641,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+642,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+643,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+644,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+645,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+646,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+647,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+648,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+650,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+651,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+652,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+653,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+654,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+655,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+656,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cond));
	vcdp->fullBit  (c+657,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx))));
	vcdp->fullBit  (c+658,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio));
	vcdp->fullBit  (c+659,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_ena));
	vcdp->fullBus  (c+660,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx),2);
	vcdp->fullBit  (c+661,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx) 
				      >> 1U))));
	vcdp->fullQuad (c+662,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->fullBus  (c+664,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						<< 0x1fU)) 
				| ((0x40000000U & ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 1U)) 
						   << 0x1eU)) 
				   | ((0x20000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 2U)) 
					  << 0x1dU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						      >> 3U)) 
					     << 0x1cU)) 
					 | ((0x8000000U 
					     & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							 >> 4U)) 
						<< 0x1bU)) 
					    | ((0x4000000U 
						& ((IData)(
							   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							    >> 5U)) 
						   << 0x1aU)) 
					       | ((0x2000000U 
						   & ((IData)(
							      (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							       >> 6U)) 
						      << 0x19U)) 
						  | ((0x1000000U 
						      & ((IData)(
								 (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								  >> 7U)) 
							 << 0x18U)) 
						     | ((0x800000U 
							 & ((IData)(
								    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
								     >> 8U)) 
							    << 0x17U)) 
							| ((0x400000U 
							    & ((IData)(
								       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									>> 9U)) 
							       << 0x16U)) 
							   | ((0x200000U 
							       & ((IData)(
									  (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									   >> 0xaU)) 
								  << 0x15U)) 
							      | ((0x100000U 
								  & ((IData)(
									     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
									      >> 0xbU)) 
								     << 0x14U)) 
								 | ((0x80000U 
								     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xcU)) 
									<< 0x13U)) 
								    | ((0x40000U 
									& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xdU)) 
									   << 0x12U)) 
								       | ((0x20000U 
									   & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xeU)) 
									      << 0x11U)) 
									  | ((0x10000U 
									      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0xfU)) 
										<< 0x10U)) 
									     | ((0x8000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x10U)) 
										<< 0xfU)) 
										| ((0x4000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x11U)) 
										<< 0xeU)) 
										| ((0x2000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x12U)) 
										<< 0xdU)) 
										| ((0x1000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x13U)) 
										<< 0xcU)) 
										| ((0x800U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x14U)) 
										<< 0xbU)) 
										| ((0x400U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x15U)) 
										<< 0xaU)) 
										| ((0x200U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x16U)) 
										<< 9U)) 
										| ((0x100U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x17U)) 
										<< 8U)) 
										| ((0x80U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x18U)) 
										<< 7U)) 
										| ((0x40U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x19U)) 
										<< 6U)) 
										| ((0x20U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1aU)) 
										<< 5U)) 
										| ((0x10U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1bU)) 
										<< 4U)) 
										| ((8U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1cU)) 
										<< 3U)) 
										| ((4U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1dU)) 
										<< 2U)) 
										| ((2U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1eU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
										>> 0x1fU))))))))))))))))))))))))))))))))))),32);
	vcdp->fullBus  (c+665,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->fullBit  (c+666,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->fullBit  (c+667,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->fullBus  (c+668,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->fullBus  (c+669,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
	vcdp->fullBit  (c+670,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+671,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+672,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+673,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+675,(((0x80000000U & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+676,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+677,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+678,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+679,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+680,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+681,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+682,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+684,(((0x80000000U & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+685,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+686,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+687,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+688,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+689,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+690,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+691,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+693,(((0x80000000U & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+694,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+695,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+696,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+697,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+698,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+699,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+700,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+702,(((0x80000000U & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+703,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+704,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+705,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+706,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+707,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+708,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+709,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+711,(((0x80000000U & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+712,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+713,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+714,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+715,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+716,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+717,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+718,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+720,(((0x80000000U & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+721,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+722,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+723,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+724,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+725,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+726,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+727,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+729,(((0x80000000U & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+730,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+731,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+732,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBit  (c+733,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__setphsa));
	vcdp->fullBit  (c+734,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__setphsb));
	vcdp->fullBus  (c+735,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__alu_r),32);
	vcdp->fullQuad (c+736,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->fullBus  (c+738,(((0x80000000U & ((IData)(
							(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 0x21U)) 
						<< 0x1fU)) 
				| (0x7fffffffU & (IData)(
							 (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							  >> 1U))))),32);
	vcdp->fullBit  (c+739,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					      >> 0x22U)))));
	vcdp->fullBit  (c+740,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						 >> 0x20U))))));
	vcdp->fullBit  (c+741,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
	vcdp->fullBus  (c+742,(vlTOPp->dig__DOT__bus_q),32);
	vcdp->fullBit  (c+743,(vlTOPp->dig__DOT__hub___DOT__rc));
	vcdp->fullBit  (c+744,(vlTOPp->dig__DOT__hub___DOT__wc));
	vcdp->fullBus  (c+745,(vlTOPp->dig__DOT__hub___DOT__sc),2);
	vcdp->fullBit  (c+746,(vlTOPp->dig__DOT__hub___DOT__rd));
	vcdp->fullBus  (c+747,(vlTOPp->dig__DOT__hub___DOT__sd),2);
	vcdp->fullBus  (c+748,(vlTOPp->dig__DOT__hub___DOT__ad),2);
	vcdp->fullBus  (c+749,(vlTOPp->dig__DOT__hub___DOT__sys_q),3);
	vcdp->fullBus  (c+750,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q3),8);
	vcdp->fullBus  (c+751,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q2),8);
	vcdp->fullBus  (c+752,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q1),8);
	vcdp->fullBus  (c+753,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q0),8);
	vcdp->fullBus  (c+754,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__rom_q),32);
	vcdp->fullBus  (c+755,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__mem),2);
	vcdp->fullBus  (c+756,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+757,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+759,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+761,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+762,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+763,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+764,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+765,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+766,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+768,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+770,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+771,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+772,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+773,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+774,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+775,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+777,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+779,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+780,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+781,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+782,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+783,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+784,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+786,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+788,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+789,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+790,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+791,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+792,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+793,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+795,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+797,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+798,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+799,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+800,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+801,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+802,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+804,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+806,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+807,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+808,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+809,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+810,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+811,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+813,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+815,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+816,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+817,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+818,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+819,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__outa),32);
	vcdp->fullQuad (c+820,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa),33);
	vcdp->fullQuad (c+822,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb),33);
	vcdp->fullBus  (c+824,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ix),32);
	vcdp->fullBus  (c+825,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__sy),32);
	vcdp->fullBus  (c+826,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->fullBus  (c+827,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->fullBus  (c+828,(vlTOPp->dig__DOT__bus_sel),8);
	vcdp->fullBus  (c+829,(vlTOPp->dig__DOT__cog_ena),8);
	vcdp->fullBit  (c+830,(vlTOPp->dig__DOT__hub___DOT__ec));
	vcdp->fullBit  (c+831,(vlTOPp->dig__DOT__hub___DOT__ed));
	vcdp->fullBus  (c+832,(vlTOPp->dig__DOT__hub___DOT__cog_e),8);
	vcdp->fullBus  (c+833,(vlTOPp->dig__DOT__hub___DOT__lock_e),8);
	vcdp->fullBit  (c+834,((1U & (IData)(vlTOPp->dig__DOT__bus_sel))));
	vcdp->fullBit  (c+835,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 1U))));
	vcdp->fullBit  (c+836,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 2U))));
	vcdp->fullBit  (c+837,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 3U))));
	vcdp->fullBit  (c+838,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 4U))));
	vcdp->fullBit  (c+839,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 5U))));
	vcdp->fullBit  (c+840,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 6U))));
	vcdp->fullBit  (c+841,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 7U))));
	vcdp->fullBit  (c+842,(((IData)(vlTOPp->dig__DOT__bus_sel) 
				& (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run))));
	vcdp->fullBus  (c+843,((0xffffU & ((1U & (IData)(vlTOPp->dig__DOT__bus_sel))
					    ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run)
					        ? vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBit  (c+844,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 1U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run))));
	vcdp->fullBus  (c+845,((0xffffU & ((2U & (IData)(vlTOPp->dig__DOT__bus_sel))
					    ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run)
					        ? vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBit  (c+846,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 2U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run))));
	vcdp->fullBus  (c+847,((0xffffU & ((4U & (IData)(vlTOPp->dig__DOT__bus_sel))
					    ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run)
					        ? vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBit  (c+848,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 3U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run))));
	vcdp->fullBus  (c+849,((0xffffU & ((8U & (IData)(vlTOPp->dig__DOT__bus_sel))
					    ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run)
					        ? vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBit  (c+850,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 4U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run))));
	vcdp->fullBus  (c+851,((0xffffU & ((0x10U & (IData)(vlTOPp->dig__DOT__bus_sel))
					    ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run)
					        ? vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBit  (c+852,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 5U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run))));
	vcdp->fullBus  (c+853,((0xffffU & ((0x20U & (IData)(vlTOPp->dig__DOT__bus_sel))
					    ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run)
					        ? vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBit  (c+854,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 6U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run))));
	vcdp->fullBus  (c+855,((0xffffU & ((0x40U & (IData)(vlTOPp->dig__DOT__bus_sel))
					    ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run)
					        ? vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBit  (c+856,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				 >> 7U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run))));
	vcdp->fullBus  (c+857,((0xffffU & ((0x80U & (IData)(vlTOPp->dig__DOT__bus_sel))
					    ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run)
					        ? vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s
					        : (
						   (0xfffcU 
						    & ((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ptr 
							+ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)) 
						       << 2U)) 
						   | (3U 
						      & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))
					    : 0U))),16);
	vcdp->fullBus  (c+858,(((1U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->fullBus  (c+859,(((2U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->fullBus  (c+860,(((4U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->fullBus  (c+861,(((8U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->fullBus  (c+862,(((0x10U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->fullBus  (c+863,(((0x20U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->fullBus  (c+864,(((0x40U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->fullBus  (c+865,(((0x80U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->fullBus  (c+866,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+867,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+868,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+869,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+870,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+871,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cancel));
	__Vtemp175[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s));
	__Vtemp175[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)));
	__Vtemp175[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))))));
	__Vtemp175[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+872,(__Vtemp175),128);
	vcdp->fullBus  (c+876,((((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+877,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+878,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+879,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+880,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+881,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+882,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cancel));
	__Vtemp177[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s));
	__Vtemp177[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)));
	__Vtemp177[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))))));
	__Vtemp177[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+883,(__Vtemp177),128);
	vcdp->fullBus  (c+887,((((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+888,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+889,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+890,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+891,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+892,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+893,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cancel));
	__Vtemp179[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s));
	__Vtemp179[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)));
	__Vtemp179[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))))));
	__Vtemp179[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+894,(__Vtemp179),128);
	vcdp->fullBus  (c+898,((((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+899,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+900,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+901,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+902,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+903,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+904,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cancel));
	__Vtemp181[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s));
	__Vtemp181[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)));
	__Vtemp181[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))))));
	__Vtemp181[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+905,(__Vtemp181),128);
	vcdp->fullBus  (c+909,((((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+910,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+911,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+912,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+913,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+914,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+915,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cancel));
	__Vtemp183[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s));
	__Vtemp183[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)));
	__Vtemp183[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))))));
	__Vtemp183[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+916,(__Vtemp183),128);
	vcdp->fullBus  (c+920,((((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+921,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+922,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+923,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+924,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+925,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+926,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cancel));
	__Vtemp185[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s));
	__Vtemp185[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)));
	__Vtemp185[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))))));
	__Vtemp185[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+927,(__Vtemp185),128);
	vcdp->fullBus  (c+931,((((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+932,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+933,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+934,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+935,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+936,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+937,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cancel));
	__Vtemp187[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s));
	__Vtemp187[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)));
	__Vtemp187[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))))));
	__Vtemp187[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+938,(__Vtemp187),128);
	vcdp->fullBus  (c+942,((((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullBus  (c+943,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__dira),32);
	vcdp->fullBit  (c+944,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run));
	vcdp->fullBus  (c+945,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p),9);
	vcdp->fullBit  (c+946,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c));
	vcdp->fullBit  (c+947,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z));
	vcdp->fullBit  (c+948,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cancel));
	__Vtemp189[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s));
	__Vtemp189[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)));
	__Vtemp189[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))))));
	__Vtemp189[3U] = (IData)(((((QData)((IData)(
						    ((0xfffffe00U 
						      & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
						     | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)))) 
				    << 0x20U) | (QData)((IData)(
								((0xff800000U 
								  & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
								     << 0x17U)) 
								 | (0x7fffffU 
								    & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))))) 
				  >> 0x20U));
	vcdp->fullArray(c+949,(__Vtemp189),128);
	vcdp->fullBus  (c+953,((((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z) 
				 << 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c) 
					    << 2U) 
					   | (2U & 
					      (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
					       >> 0x1eU))))),4);
	vcdp->fullQuad (c+954,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+956,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+957,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+959,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+960,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+962,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+963,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+965,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+966,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+968,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+969,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+971,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+972,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+974,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+975,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+977,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+978,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+980,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+981,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+983,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+984,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+986,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+987,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+989,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+990,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+992,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+993,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+995,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+996,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->fullBus  (c+998,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->fullQuad (c+999,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->fullBus  (c+1001,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						  >> 0x1cU)))),8);
	vcdp->fullBus  (c+1002,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+1003,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+1004,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+1005,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+1006,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+1007,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+1008,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+1009,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ptr),28);
	vcdp->fullBus  (c+1010,(vlTOPp->dig__DOT__cnt),32);
	vcdp->fullBit  (c+1011,(vlTOPp->dig__DOT__hub___DOT__sys_c));
	vcdp->fullBus  (c+1012,((0xfffffffU & (vlTOPp->dig__DOT__hub___DOT__dc 
					       >> 4U))),28);
	vcdp->fullBus  (c+1013,(vlTOPp->dig__DOT__hub___DOT__ac),16);
	vcdp->fullBus  (c+1014,(vlTOPp->dig__DOT__hub___DOT__dc),32);
	vcdp->fullBus  (c+1015,(vlTOPp->dig__DOT__hub___DOT__lock_state),8);
	vcdp->fullBit  (c+1016,((1U & ((IData)(vlTOPp->dig__DOT__hub___DOT__lock_state) 
				       >> (7U & vlTOPp->dig__DOT__hub___DOT__dc)))));
	vcdp->fullBus  (c+1017,((0x3fffU & ((IData)(vlTOPp->dig__DOT__hub___DOT__ac) 
					    >> 2U))),14);
	vcdp->fullBit  (c+1018,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1019,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1020,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1021,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1022,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1023,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1024,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1025,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1026,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1027,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1028,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1029,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1030,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1031,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1032,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1033,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1034,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1035,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1036,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1037,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1038,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBit  (c+1039,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match));
	vcdp->fullBus  (c+1040,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->fullBus  (c+1041,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->fullBus  (c+1042,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1043,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1044,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1045,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1046,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1047,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1048,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1049,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1050,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1051,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1052,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1053,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1054,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1055,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1056,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1057,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1058,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1059,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1060,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1061,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1062,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1063,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1064,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1065,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1066,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1067,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1068,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1069,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1070,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->fullBus  (c+1071,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBus  (c+1072,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->fullBus  (c+1073,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1aU))),4);
	vcdp->fullBit  (c+1074,(vlTOPp->dig__DOT__ena_bus));
	vcdp->fullBit  (c+1075,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1076,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1077,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1078,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1079,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1080,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1081,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1082,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1083,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1084,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1085,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1086,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1087,((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1088,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1089,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1090,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1091,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1092,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1093,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1094,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1095,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1096,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1097,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1098,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1099,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1100,((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1101,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1102,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1103,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1104,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1105,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1106,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1107,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1108,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1109,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1110,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1111,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1112,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1113,((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1114,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1115,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1116,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1117,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1118,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1119,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1120,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1121,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1122,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1123,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1124,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1125,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1126,((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1127,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1128,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1129,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1130,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1131,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1132,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1133,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1134,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1135,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1136,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1137,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1138,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1139,((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1140,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1141,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1142,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1143,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1144,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1145,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1146,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1147,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1148,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1149,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1150,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1151,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1152,((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1153,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1154,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1155,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1156,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1157,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1158,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1159,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1160,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1161,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1162,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1163,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1164,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1165,((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBit  (c+1166,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cap));
	vcdp->fullBus  (c+1167,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->fullBus  (c+1168,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->fullBus  (c+1169,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->fullBus  (c+1170,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->fullBus  (c+1171,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->fullBit  (c+1172,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->fullBit  (c+1173,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->fullBus  (c+1174,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->fullBus  (c+1175,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->fullBus  (c+1176,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->fullBus  (c+1177,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
	vcdp->fullBus  (c+1178,((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				 >> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						>> 0x18U) 
					       & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						  << 3U))) 
				     | (8U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					      << 3U))))),32);
	vcdp->fullBus  (c+1179,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+1180,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+1181,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+1182,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+1183,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullBus  (c+1184,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+1185,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp191[0U] = (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s));
	__Vtemp191[1U] = (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s);
	__Vtemp191[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))));
	__Vtemp191[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+1186,(__Vtemp191),128);
	vcdp->fullBus  (c+1190,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+1191,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+1192,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+1193,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+1194,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullBus  (c+1195,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+1196,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp193[0U] = (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s));
	__Vtemp193[1U] = (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s);
	__Vtemp193[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))));
	__Vtemp193[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+1197,(__Vtemp193),128);
	vcdp->fullBus  (c+1201,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+1202,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+1203,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+1204,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+1205,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullBus  (c+1206,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+1207,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp195[0U] = (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s));
	__Vtemp195[1U] = (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s);
	__Vtemp195[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))));
	__Vtemp195[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+1208,(__Vtemp195),128);
	vcdp->fullBus  (c+1212,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+1213,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+1214,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+1215,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+1216,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullBus  (c+1217,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+1218,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp197[0U] = (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s));
	__Vtemp197[1U] = (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s);
	__Vtemp197[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))));
	__Vtemp197[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+1219,(__Vtemp197),128);
	vcdp->fullBus  (c+1223,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+1224,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+1225,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+1226,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+1227,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullBus  (c+1228,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+1229,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp199[0U] = (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s));
	__Vtemp199[1U] = (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s);
	__Vtemp199[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))));
	__Vtemp199[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+1230,(__Vtemp199),128);
	vcdp->fullBus  (c+1234,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+1235,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+1236,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+1237,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+1238,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullBus  (c+1239,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+1240,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp201[0U] = (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s));
	__Vtemp201[1U] = (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s);
	__Vtemp201[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))));
	__Vtemp201[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+1241,(__Vtemp201),128);
	vcdp->fullBus  (c+1245,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+1246,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+1247,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+1248,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+1249,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullBus  (c+1250,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+1251,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp203[0U] = (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s));
	__Vtemp203[1U] = (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s);
	__Vtemp203[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))));
	__Vtemp203[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+1252,(__Vtemp203),128);
	vcdp->fullBus  (c+1256,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_q),32);
	vcdp->fullBit  (c+1257,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->fullBus  (c+1258,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s),32);
	vcdp->fullBus  (c+1259,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d),32);
	vcdp->fullBit  (c+1260,((1U & (~ (IData)((0U 
						  != 
						  (0x7fffffffU 
						   & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						      >> 1U))))))));
	vcdp->fullBus  (c+1261,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->fullBus  (c+1262,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp205[0U] = (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s));
	__Vtemp205[1U] = (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s);
	__Vtemp205[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))));
	__Vtemp205[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->fullArray(c+1263,(__Vtemp205),128);
	vcdp->fullBus  (c+1267,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+1268,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+1269,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+1270,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+1271,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+1272,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+1273,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+1274,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+1275,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+1276,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+1277,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+1278,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+1279,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+1280,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+1281,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+1282,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+1283,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+1284,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+1285,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+1286,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+1287,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBus  (c+1288,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m),5);
	vcdp->fullBus  (c+1289,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->fullBit  (c+1290,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					      >> 0x1dU)))));
	vcdp->fullBit  (c+1291,(vlTOPp->nres));
	vcdp->fullBus  (c+1292,(vlTOPp->cfg),8);
	vcdp->fullBit  (c+1293,(vlTOPp->clk_cog));
	vcdp->fullBit  (c+1294,(vlTOPp->clk_pll));
	vcdp->fullBus  (c+1295,(vlTOPp->pin_in),32);
	vcdp->fullBus  (c+1296,(vlTOPp->pin_out),32);
	vcdp->fullBus  (c+1297,(vlTOPp->pin_dir),32);
	vcdp->fullBus  (c+1298,(vlTOPp->cog_led),8);
	vcdp->fullBus  (c+1299,(0U),32);
	vcdp->fullBus  (c+1300,(8U),32);
	vcdp->fullBus  (c+1301,(0x1fU),32);
	vcdp->fullBus  (c+1302,(0x1aU),32);
	vcdp->fullBus  (c+1303,(0x19U),32);
	vcdp->fullBus  (c+1304,(0x18U),32);
	vcdp->fullBus  (c+1305,(0x17U),32);
	vcdp->fullBus  (c+1306,(0x16U),32);
	vcdp->fullBus  (c+1307,(0x15U),32);
	vcdp->fullBus  (c+1308,(0x12U),32);
	vcdp->fullBus  (c+1309,(0x11U),32);
	vcdp->fullBus  (c+1310,(9U),32);
	vcdp->fullQuad (c+1311,(VL_ULL(0x725bb76d2240)),48);
	__Vtemp206[0U] = 0x2e686578U;
	__Vtemp206[1U] = 0x79746530U;
	__Vtemp206[2U] = 0x616d5f62U;
	__Vtemp206[3U] = 0x75625f72U;
	__Vtemp206[4U] = 0x6f722f68U;
	__Vtemp206[5U] = 0x696c6174U;
	__Vtemp206[6U] = 0x5f566572U;
	__Vtemp206[7U] = 0x58333241U;
	__Vtemp206[8U] = 0x2e2f5038U;
	__Vtemp206[9U] = 0x2eU;
	vcdp->fullArray(c+1313,(__Vtemp206),296);
	__Vtemp207[0U] = 0x2e686578U;
	__Vtemp207[1U] = 0x79746531U;
	__Vtemp207[2U] = 0x616d5f62U;
	__Vtemp207[3U] = 0x75625f72U;
	__Vtemp207[4U] = 0x6f722f68U;
	__Vtemp207[5U] = 0x696c6174U;
	__Vtemp207[6U] = 0x5f566572U;
	__Vtemp207[7U] = 0x58333241U;
	__Vtemp207[8U] = 0x2e2f5038U;
	__Vtemp207[9U] = 0x2eU;
	vcdp->fullArray(c+1323,(__Vtemp207),296);
	__Vtemp208[0U] = 0x2e686578U;
	__Vtemp208[1U] = 0x79746532U;
	__Vtemp208[2U] = 0x616d5f62U;
	__Vtemp208[3U] = 0x75625f72U;
	__Vtemp208[4U] = 0x6f722f68U;
	__Vtemp208[5U] = 0x696c6174U;
	__Vtemp208[6U] = 0x5f566572U;
	__Vtemp208[7U] = 0x58333241U;
	__Vtemp208[8U] = 0x2e2f5038U;
	__Vtemp208[9U] = 0x2eU;
	vcdp->fullArray(c+1333,(__Vtemp208),296);
	__Vtemp209[0U] = 0x2e686578U;
	__Vtemp209[1U] = 0x79746533U;
	__Vtemp209[2U] = 0x616d5f62U;
	__Vtemp209[3U] = 0x75625f72U;
	__Vtemp209[4U] = 0x6f722f68U;
	__Vtemp209[5U] = 0x696c6174U;
	__Vtemp209[6U] = 0x5f566572U;
	__Vtemp209[7U] = 0x58333241U;
	__Vtemp209[8U] = 0x2e2f5038U;
	__Vtemp209[9U] = 0x2eU;
	vcdp->fullArray(c+1343,(__Vtemp209),296);
	__Vtemp210[0U] = 0x2e686578U;
	__Vtemp210[1U] = 0x626c6564U;
	__Vtemp210[2U] = 0x6372616dU;
	__Vtemp210[3U] = 0x66665f73U;
	__Vtemp210[4U] = 0x305f6666U;
	__Vtemp210[5U] = 0x5f383030U;
	__Vtemp210[6U] = 0x2f726f6dU;
	__Vtemp210[7U] = 0x2f48444cU;
	__Vtemp210[8U] = 0x2e2eU;
	vcdp->fullArray(c+1353,(__Vtemp210),272);
	__Vtemp211[0U] = 0x2e686578U;
	__Vtemp211[1U] = 0x6f746572U;
	__Vtemp211[2U] = 0x616d626fU;
	__Vtemp211[3U] = 0x696e2f72U;
	__Vtemp211[4U] = 0x2e2f5370U;
	__Vtemp211[5U] = 0x2eU;
	vcdp->fullArray(c+1362,(__Vtemp211),168);
    }
}
