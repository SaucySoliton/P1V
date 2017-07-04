// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_veri__Syms.h"


//======================

void Vtop_veri::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop_veri* t=(Vtop_veri*)userthis;
    Vtop_veri__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vtop_veri::traceChgThis(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 4U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 5U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x10U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0xcU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 4U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 6U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x11U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0xeU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1dU))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 4U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 7U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x12U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x10U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 4U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 8U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x13U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x12U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 4U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 9U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x14U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x14U)) 
			       | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 4U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xaU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0x15U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x16U)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 4U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xbU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0x16U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 8U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x18U)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 4U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xcU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0x17U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 9U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1aU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0xcU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0xeU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1dU))))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x10U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x12U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x14U)) 
			       | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x16U)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x18U)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1aU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x10U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x11U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x12U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x13U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x14U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x15U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x16U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x17U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 2U))))) {
	    vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 3U))))) {
	    vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 4U))))) {
	    vlTOPp->traceChgThis__31(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 5U))))) {
	    vlTOPp->traceChgThis__32(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 6U))))) {
	    vlTOPp->traceChgThis__33(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 7U))))) {
	    vlTOPp->traceChgThis__34(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 8U))))) {
	    vlTOPp->traceChgThis__35(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 9U))))) {
	    vlTOPp->traceChgThis__36(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[0U] 
					 >> 5U)) | 
				     (vlTOPp->__Vm_traceActivity[0U] 
				      >> 6U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 7U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 8U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 9U)) 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0xaU)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0xbU)) 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__37(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1bU))))) {
	    vlTOPp->traceChgThis__38(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1cU))))) {
	    vlTOPp->traceChgThis__39(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1cU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__40(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1bU))))) {
	    vlTOPp->traceChgThis__41(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1dU))))) {
	    vlTOPp->traceChgThis__42(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1dU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__43(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1bU))))) {
	    vlTOPp->traceChgThis__44(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1eU))))) {
	    vlTOPp->traceChgThis__45(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1eU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__46(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 8U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1bU))))) {
	    vlTOPp->traceChgThis__47(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 8U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1fU))))) {
	    vlTOPp->traceChgThis__48(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 8U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1fU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__49(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 9U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1bU))))) {
	    vlTOPp->traceChgThis__50(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 9U)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__51(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 9U)) | vlTOPp->__Vm_traceActivity[2U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__52(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xaU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__53(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xaU)) | (vlTOPp->__Vm_traceActivity[2U] 
						>> 1U))))) {
	    vlTOPp->traceChgThis__54(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0xaU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 1U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__55(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xbU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__56(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xbU)) | (vlTOPp->__Vm_traceActivity[2U] 
						>> 2U))))) {
	    vlTOPp->traceChgThis__57(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0xbU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 2U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__58(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xcU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__59(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xcU)) | (vlTOPp->__Vm_traceActivity[2U] 
						>> 3U))))) {
	    vlTOPp->traceChgThis__60(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0xcU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 3U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__61(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0xeU))))) {
	    vlTOPp->traceChgThis__62(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xeU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xfU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1cU))))) {
	    vlTOPp->traceChgThis__63(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xfU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						  >> 0x1cU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x16U))))) {
	    vlTOPp->traceChgThis__64(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xeU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xfU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1dU))))) {
	    vlTOPp->traceChgThis__65(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xfU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						  >> 0x1dU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x18U))))) {
	    vlTOPp->traceChgThis__66(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xeU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xfU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1eU))))) {
	    vlTOPp->traceChgThis__67(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xfU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						  >> 0x1eU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1aU))))) {
	    vlTOPp->traceChgThis__68(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xeU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xfU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1fU))))) {
	    vlTOPp->traceChgThis__69(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xfU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						  >> 0x1fU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__70(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xeU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xfU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__71(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xfU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1bU)) | vlTOPp->__Vm_traceActivity[2U]) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__72(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xeU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xfU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 1U))))) {
	    vlTOPp->traceChgThis__73(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xfU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 1U)) 
			       | vlTOPp->__Vm_traceActivity[3U])))) {
	    vlTOPp->traceChgThis__74(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xeU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xfU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 2U))))) {
	    vlTOPp->traceChgThis__75(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xfU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 2U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__76(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xeU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xfU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 3U))))) {
	    vlTOPp->traceChgThis__77(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xfU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 3U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__78(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1cU))))) {
	    vlTOPp->traceChgThis__79(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1dU))))) {
	    vlTOPp->traceChgThis__80(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1eU))))) {
	    vlTOPp->traceChgThis__81(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1fU))))) {
	    vlTOPp->traceChgThis__82(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__83(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[2U] 
						>> 1U))))) {
	    vlTOPp->traceChgThis__84(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[2U] 
						>> 2U))))) {
	    vlTOPp->traceChgThis__85(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[2U] 
						>> 3U))))) {
	    vlTOPp->traceChgThis__86(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0xfU))))) {
	    vlTOPp->traceChgThis__87(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xfU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1bU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x16U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__88(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xfU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1bU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x18U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__89(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xfU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1bU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1aU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__90(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xfU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1bU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1cU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__91(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xfU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1bU)) 
				 | vlTOPp->__Vm_traceActivity[2U]) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 9U))))) {
	    vlTOPp->traceChgThis__92(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xfU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1bU)) 
				 | (vlTOPp->__Vm_traceActivity[2U] 
				    >> 1U)) | vlTOPp->__Vm_traceActivity[3U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__93(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xfU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1bU)) 
				 | (vlTOPp->__Vm_traceActivity[2U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[3U] 
					       >> 2U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__94(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xfU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1bU)) 
				 | (vlTOPp->__Vm_traceActivity[2U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[3U] 
					       >> 4U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__95(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x10U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 2U))))) {
	    vlTOPp->traceChgThis__96(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x11U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 3U))))) {
	    vlTOPp->traceChgThis__97(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x12U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 4U))))) {
	    vlTOPp->traceChgThis__98(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x13U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 5U))))) {
	    vlTOPp->traceChgThis__99(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x14U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 6U))))) {
	    vlTOPp->traceChgThis__100(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x15U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 7U))))) {
	    vlTOPp->traceChgThis__101(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x16U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 8U))))) {
	    vlTOPp->traceChgThis__102(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x17U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 9U))))) {
	    vlTOPp->traceChgThis__103(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0x18U))))) {
	    vlTOPp->traceChgThis__104(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[0U] 
					 >> 0x19U)) 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 0x1aU)) 
				    | (vlTOPp->__Vm_traceActivity[0U] 
				       >> 0x1bU)) | 
				   (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0x1dU)) 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0x1fU)) 
			       | vlTOPp->__Vm_traceActivity[1U])))) {
	    vlTOPp->traceChgThis__105(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__106(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__107(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[1U] 
					 >> 2U)) | 
				     (vlTOPp->__Vm_traceActivity[1U] 
				      >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 4U)) 
				   | (vlTOPp->__Vm_traceActivity[1U] 
				      >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 6U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 8U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__108(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__109(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__110(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__111(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__112(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__113(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__114(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__115(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__116(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__117(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0xeU))))) {
	    vlTOPp->traceChgThis__118(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x10U))))) {
	    vlTOPp->traceChgThis__119(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x12U))))) {
	    vlTOPp->traceChgThis__120(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x14U))))) {
	    vlTOPp->traceChgThis__121(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x16U))))) {
	    vlTOPp->traceChgThis__122(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x18U))))) {
	    vlTOPp->traceChgThis__123(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1aU))))) {
	    vlTOPp->traceChgThis__124(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__125(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1cU))))) {
	    vlTOPp->traceChgThis__126(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x1bU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1cU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x16U)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 5U))))) {
	    vlTOPp->traceChgThis__127(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1dU))))) {
	    vlTOPp->traceChgThis__128(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x1bU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1dU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x18U)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 6U))))) {
	    vlTOPp->traceChgThis__129(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1eU))))) {
	    vlTOPp->traceChgThis__130(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x1bU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1eU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 7U))))) {
	    vlTOPp->traceChgThis__131(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1fU))))) {
	    vlTOPp->traceChgThis__132(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x1bU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1fU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 8U))))) {
	    vlTOPp->traceChgThis__133(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__134(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x1bU)) | vlTOPp->__Vm_traceActivity[2U]) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 9U))))) {
	    vlTOPp->traceChgThis__135(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 1U))))) {
	    vlTOPp->traceChgThis__136(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x1bU)) | (
						   vlTOPp->__Vm_traceActivity[2U] 
						   >> 1U)) 
				| vlTOPp->__Vm_traceActivity[3U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__137(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 2U))))) {
	    vlTOPp->traceChgThis__138(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x1bU)) | (
						   vlTOPp->__Vm_traceActivity[2U] 
						   >> 2U)) 
				| (vlTOPp->__Vm_traceActivity[3U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xbU))))) {
	    vlTOPp->traceChgThis__139(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 3U))))) {
	    vlTOPp->traceChgThis__140(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x1bU)) | (
						   vlTOPp->__Vm_traceActivity[2U] 
						   >> 3U)) 
				| (vlTOPp->__Vm_traceActivity[3U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xcU))))) {
	    vlTOPp->traceChgThis__141(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__142(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x16U))))) {
	    vlTOPp->traceChgThis__143(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 5U))))) {
	    vlTOPp->traceChgThis__144(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1dU))))) {
	    vlTOPp->traceChgThis__145(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x18U))))) {
	    vlTOPp->traceChgThis__146(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 6U))))) {
	    vlTOPp->traceChgThis__147(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__148(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x1aU))))) {
	    vlTOPp->traceChgThis__149(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 7U))))) {
	    vlTOPp->traceChgThis__150(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__151(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x1cU))))) {
	    vlTOPp->traceChgThis__152(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 8U))))) {
	    vlTOPp->traceChgThis__153(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__154(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| vlTOPp->__Vm_traceActivity[2U]) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__155(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| vlTOPp->__Vm_traceActivity[2U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__156(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__157(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 1U)) | vlTOPp->__Vm_traceActivity[3U])))) {
	    vlTOPp->traceChgThis__158(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xaU))))) {
	    vlTOPp->traceChgThis__159(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__160(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 2U))))) {
	    vlTOPp->traceChgThis__161(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xbU))))) {
	    vlTOPp->traceChgThis__162(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__163(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 4U))))) {
	    vlTOPp->traceChgThis__164(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xcU))))) {
	    vlTOPp->traceChgThis__165(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[2U] 
					 >> 4U)) | 
				     (vlTOPp->__Vm_traceActivity[2U] 
				      >> 6U)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 7U)) 
				   | (vlTOPp->__Vm_traceActivity[2U] 
				      >> 8U)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 9U)) 
				 | (vlTOPp->__Vm_traceActivity[2U] 
				    >> 0xaU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0xbU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__166(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__167(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xdU))))) {
	    vlTOPp->traceChgThis__168(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xeU))))) {
	    vlTOPp->traceChgThis__169(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xfU))))) {
	    vlTOPp->traceChgThis__170(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x10U))))) {
	    vlTOPp->traceChgThis__171(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x11U))))) {
	    vlTOPp->traceChgThis__172(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x12U))))) {
	    vlTOPp->traceChgThis__173(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x13U))))) {
	    vlTOPp->traceChgThis__174(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x14U))))) {
	    vlTOPp->traceChgThis__175(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[2U] 
					 >> 0x15U)) 
				     | (vlTOPp->__Vm_traceActivity[2U] 
					>> 0x17U)) 
				    | (vlTOPp->__Vm_traceActivity[2U] 
				       >> 0x19U)) | 
				   (vlTOPp->__Vm_traceActivity[2U] 
				    >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1dU)) 
				 | (vlTOPp->__Vm_traceActivity[2U] 
				    >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[3U] 
						  >> 1U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__176(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x16U))))) {
	    vlTOPp->traceChgThis__177(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x18U))))) {
	    vlTOPp->traceChgThis__178(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1aU))))) {
	    vlTOPp->traceChgThis__179(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__180(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__181(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | vlTOPp->__Vm_traceActivity[3U])))) {
	    vlTOPp->traceChgThis__182(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__183(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__184(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__185(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__186(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__187(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__188(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__189(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__190(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__191(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__192(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__193(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__194(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 5U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__195(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 6U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__196(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 7U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__197(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 8U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__198(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 9U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__199(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xaU)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__200(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xbU)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__201(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xcU)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xeU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__202(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__203(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__204(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 5U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xeU))))) {
	    vlTOPp->traceChgThis__205(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 5U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__206(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__207(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 6U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xeU))))) {
	    vlTOPp->traceChgThis__208(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 6U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__209(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__210(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 7U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xeU))))) {
	    vlTOPp->traceChgThis__211(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 7U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__212(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__213(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 8U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xeU))))) {
	    vlTOPp->traceChgThis__214(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 8U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__215(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__216(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 9U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xeU))))) {
	    vlTOPp->traceChgThis__217(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 9U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__218(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__219(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xaU) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xeU))))) {
	    vlTOPp->traceChgThis__220(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xaU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x1bU))))) {
	    vlTOPp->traceChgThis__221(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__222(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xbU) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xeU))))) {
	    vlTOPp->traceChgThis__223(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xbU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x1bU))))) {
	    vlTOPp->traceChgThis__224(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x1000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__225(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xcU) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xeU))))) {
	    vlTOPp->traceChgThis__226(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xcU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x1bU))))) {
	    vlTOPp->traceChgThis__227(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__228(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__229(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xeU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x1bU))))) {
	    vlTOPp->traceChgThis__230(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x8000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__231(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__232(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__233(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__234(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__235(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__236(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__237(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__238(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__239(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__240(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__241(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x1000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__242(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0xcU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x1cU))))) {
	    vlTOPp->traceChgThis__243(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__244(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__245(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0xeU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x1dU))))) {
	    vlTOPp->traceChgThis__246(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x8000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__247(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__248(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x10U) | (vlTOPp->__Vm_traceActivity[1U] 
					     >> 0x1eU))))) {
	    vlTOPp->traceChgThis__249(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__250(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__251(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x12U) | (vlTOPp->__Vm_traceActivity[1U] 
					     >> 0x1fU))))) {
	    vlTOPp->traceChgThis__252(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__253(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__254(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x14U) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__255(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__256(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__257(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x16U) | (vlTOPp->__Vm_traceActivity[2U] 
					     >> 1U))))) {
	    vlTOPp->traceChgThis__258(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__259(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x1000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__260(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x18U) | (vlTOPp->__Vm_traceActivity[2U] 
					     >> 2U))))) {
	    vlTOPp->traceChgThis__261(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__262(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__263(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x1aU) | (vlTOPp->__Vm_traceActivity[2U] 
					     >> 3U))))) {
	    vlTOPp->traceChgThis__264(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x8000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__265(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__266(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__267(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__268(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__269(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity[2U]))) {
	    vlTOPp->traceChgThis__270(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity[2U]))) {
	    vlTOPp->traceChgThis__271(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity[2U]))) {
	    vlTOPp->traceChgThis__272(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity[2U]))) {
	    vlTOPp->traceChgThis__273(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__274(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity[0U] = 0U;
    vlTOPp->__Vm_traceActivity[1U] = 0U;
    vlTOPp->__Vm_traceActivity[2U] = 0U;
    vlTOPp->__Vm_traceActivity[3U] = 0U;
}

void Vtop_veri::traceChgThis__2(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->top_veri__DOT__pin_out),32);
	vcdp->chgBit  (c+2,(vlTOPp->top_veri__DOT__clk_pll));
	vcdp->chgBus  (c+3,(vlTOPp->top_veri__DOT__pin_in),32);
	vcdp->chgArray(c+4,(vlTOPp->top_veri__DOT__core__DOT__outx),256);
	vcdp->chgBus  (c+12,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+13,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+14,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+15,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+16,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+17,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+18,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+19,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+20,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+21,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+22,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+23,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+24,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+25,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+26,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+27,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+28,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+29,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+30,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+31,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+32,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+33,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+34,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+35,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+36,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+37,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+38,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+39,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+40,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+41,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+42,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+43,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+44,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+45,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+46,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+47,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+48,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+49,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+50,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+51,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
    }
}

void Vtop_veri::traceChgThis__3(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+52,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vtop_veri::traceChgThis__4(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+53,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vtop_veri::traceChgThis__5(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+54,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vtop_veri::traceChgThis__6(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+55,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vtop_veri::traceChgThis__7(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+56,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vtop_veri::traceChgThis__8(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+57,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vtop_veri::traceChgThis__9(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+58,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vtop_veri::traceChgThis__10(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+59,(((((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vtop_veri::traceChgThis__11(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+60,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+61,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vtop_veri::traceChgThis__12(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+62,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+63,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vtop_veri::traceChgThis__13(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+64,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+65,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vtop_veri::traceChgThis__14(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+66,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+67,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vtop_veri::traceChgThis__15(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+68,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+69,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vtop_veri::traceChgThis__16(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+70,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+71,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vtop_veri::traceChgThis__17(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+72,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+73,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vtop_veri::traceChgThis__18(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+74,(((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+75,(((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vtop_veri::traceChgThis__19(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+76,(vlTOPp->top_veri__DOT__clk_cog));
	vcdp->chgBus  (c+77,(vlTOPp->top_veri__DOT__clkgen__DOT__clksel),5);
    }
}

void Vtop_veri::traceChgThis__20(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+78,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__mem_q),32);
    }
}

void Vtop_veri::traceChgThis__21(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+79,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+80,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vtop_veri::traceChgThis__22(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+81,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+82,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vtop_veri::traceChgThis__23(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+83,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+84,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vtop_veri::traceChgThis__24(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+85,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+86,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vtop_veri::traceChgThis__25(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+87,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+88,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vtop_veri::traceChgThis__26(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+89,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+90,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vtop_veri::traceChgThis__27(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+91,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+92,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vtop_veri::traceChgThis__28(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+93,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+94,((1U & ((0x40000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vtop_veri::traceChgThis__29(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+95,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+97,((((QData)((IData)((0x92U 
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
    }
}

void Vtop_veri::traceChgThis__30(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+99,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+101,((((QData)((IData)((0x92U 
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
    }
}

void Vtop_veri::traceChgThis__31(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+103,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+105,((((QData)((IData)((0x92U 
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
    }
}

void Vtop_veri::traceChgThis__32(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+107,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+109,((((QData)((IData)((0x92U 
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
    }
}

void Vtop_veri::traceChgThis__33(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+111,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+113,((((QData)((IData)((0x92U 
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
    }
}

void Vtop_veri::traceChgThis__34(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+115,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+117,((((QData)((IData)((0x92U 
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
    }
}

void Vtop_veri::traceChgThis__35(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+119,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+121,((((QData)((IData)((0x92U 
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
    }
}

void Vtop_veri::traceChgThis__36(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+123,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+125,((((QData)((IData)((0x92U 
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
    }
}

void Vtop_veri::traceChgThis__37(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+127,(vlTOPp->top_veri__DOT__core__DOT__dirx),256);
    }
}

void Vtop_veri::traceChgThis__38(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp195,127,0,4);
    VL_SIGW(__Vtemp198,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp195, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)))));
	__Vtemp198[0U] = __Vtemp195[0U];
	__Vtemp198[1U] = __Vtemp195[1U];
	__Vtemp198[2U] = __Vtemp195[2U];
	__Vtemp198[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp195[3U]);
	__Vtemp198[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp198[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp198[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp198[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+135,(__Vtemp198),248);
    }
}

void Vtop_veri::traceChgThis__39(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+143,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+144,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__40(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+145,((1U & ((~ (IData)((0U 
						 != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vtop_veri::traceChgThis__41(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp199,127,0,4);
    VL_SIGW(__Vtemp202,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp199, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)))));
	__Vtemp202[0U] = __Vtemp199[0U];
	__Vtemp202[1U] = __Vtemp199[1U];
	__Vtemp202[2U] = __Vtemp199[2U];
	__Vtemp202[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp199[3U]);
	__Vtemp202[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp202[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp202[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp202[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+146,(__Vtemp202),248);
    }
}

void Vtop_veri::traceChgThis__42(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+154,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+155,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__43(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+156,((1U & ((~ (IData)((0U 
						 != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vtop_veri::traceChgThis__44(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp203,127,0,4);
    VL_SIGW(__Vtemp206,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp203, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)))));
	__Vtemp206[0U] = __Vtemp203[0U];
	__Vtemp206[1U] = __Vtemp203[1U];
	__Vtemp206[2U] = __Vtemp203[2U];
	__Vtemp206[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp203[3U]);
	__Vtemp206[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp206[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp206[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp206[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+157,(__Vtemp206),248);
    }
}

void Vtop_veri::traceChgThis__45(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+165,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+166,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__46(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+167,((1U & ((~ (IData)((0U 
						 != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vtop_veri::traceChgThis__47(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp207,127,0,4);
    VL_SIGW(__Vtemp210,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp207, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)))));
	__Vtemp210[0U] = __Vtemp207[0U];
	__Vtemp210[1U] = __Vtemp207[1U];
	__Vtemp210[2U] = __Vtemp207[2U];
	__Vtemp210[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp207[3U]);
	__Vtemp210[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp210[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp210[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp210[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+168,(__Vtemp210),248);
    }
}

void Vtop_veri::traceChgThis__48(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+176,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+177,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__49(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+178,((1U & ((~ (IData)((0U 
						 != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vtop_veri::traceChgThis__50(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp211,127,0,4);
    VL_SIGW(__Vtemp214,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp211, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)))));
	__Vtemp214[0U] = __Vtemp211[0U];
	__Vtemp214[1U] = __Vtemp211[1U];
	__Vtemp214[2U] = __Vtemp211[2U];
	__Vtemp214[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp211[3U]);
	__Vtemp214[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp214[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp214[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp214[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+179,(__Vtemp214),248);
    }
}

void Vtop_veri::traceChgThis__51(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+187,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+188,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__52(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+189,((1U & ((~ (IData)((0U 
						 != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vtop_veri::traceChgThis__53(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp215,127,0,4);
    VL_SIGW(__Vtemp218,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp215, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)))));
	__Vtemp218[0U] = __Vtemp215[0U];
	__Vtemp218[1U] = __Vtemp215[1U];
	__Vtemp218[2U] = __Vtemp215[2U];
	__Vtemp218[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp215[3U]);
	__Vtemp218[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp218[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp218[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp218[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+190,(__Vtemp218),248);
    }
}

void Vtop_veri::traceChgThis__54(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+198,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+199,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__55(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+200,((1U & ((~ (IData)((0U 
						 != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vtop_veri::traceChgThis__56(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp219,127,0,4);
    VL_SIGW(__Vtemp222,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp219, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)))));
	__Vtemp222[0U] = __Vtemp219[0U];
	__Vtemp222[1U] = __Vtemp219[1U];
	__Vtemp222[2U] = __Vtemp219[2U];
	__Vtemp222[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp219[3U]);
	__Vtemp222[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp222[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp222[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp222[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+201,(__Vtemp222),248);
    }
}

void Vtop_veri::traceChgThis__57(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+209,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+210,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__58(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+211,((1U & ((~ (IData)((0U 
						 != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vtop_veri::traceChgThis__59(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp223,127,0,4);
    VL_SIGW(__Vtemp226,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp223, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)))));
	__Vtemp226[0U] = __Vtemp223[0U];
	__Vtemp226[1U] = __Vtemp223[1U];
	__Vtemp226[2U] = __Vtemp223[2U];
	__Vtemp226[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp223[3U]);
	__Vtemp226[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp226[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp226[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp226[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+212,(__Vtemp226),248);
    }
}

void Vtop_veri::traceChgThis__60(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+220,(((0x10000000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+221,(((((6U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__61(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+222,((1U & ((~ (IData)((0U 
						 != vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vtop_veri::traceChgThis__62(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+223,(vlTOPp->top_veri__DOT__core__DOT__bus_ack),8);
	vcdp->chgBit  (c+224,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__mem_w));
	vcdp->chgBit  (c+225,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack))));
	vcdp->chgBit  (c+226,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				     >> 1U))));
	vcdp->chgBit  (c+227,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				     >> 2U))));
	vcdp->chgBit  (c+228,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				     >> 3U))));
	vcdp->chgBit  (c+229,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				     >> 4U))));
	vcdp->chgBit  (c+230,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				     >> 5U))));
	vcdp->chgBit  (c+231,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				     >> 6U))));
	vcdp->chgBit  (c+232,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack) 
				     >> 7U))));
    }
}

void Vtop_veri::traceChgThis__63(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+233,((1U & ((0U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__64(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+234,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cond) 
			       & ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 0x1cU)))
				   ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_ack))
				   : ((0x1eU == (0x1fU 
						 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						    >> 0x1bU)))
				       ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
				       : ((0x3eU == 
					   (0x3fU & 
					    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 0x1aU)))
					   ? (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
					   : ((0x3fU 
					       == (0x3fU 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1aU))) 
					      & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vtop_veri::traceChgThis__65(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+235,((1U & ((0U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__66(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+236,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vtop_veri::traceChgThis__67(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+237,((1U & ((0U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__68(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+238,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vtop_veri::traceChgThis__69(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+239,((1U & ((0U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__70(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+240,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vtop_veri::traceChgThis__71(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+241,((1U & ((0U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__72(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+242,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vtop_veri::traceChgThis__73(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+243,((1U & ((0U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__74(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+244,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vtop_veri::traceChgThis__75(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+245,((1U & ((0U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__76(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+246,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vtop_veri::traceChgThis__77(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+247,((1U & ((0U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__78(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+248,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vtop_veri::traceChgThis__79(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+249,(((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
			       & ((0U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 0x1cU))) 
				  & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m) 
				     >> 4U)))));
	vcdp->chgBit  (c+250,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				     & (~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					   >> 0x17U))))));
	vcdp->chgBus  (c+251,((3U & ((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vtop_veri::traceChgThis__80(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+252,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 1U) & ((0U == (0xfU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+253,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 1U) & (~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+254,((3U & ((2U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vtop_veri::traceChgThis__81(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+255,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 2U) & ((0U == (0xfU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+256,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 2U) & (~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+257,((3U & ((4U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vtop_veri::traceChgThis__82(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+258,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 3U) & ((0U == (0xfU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+259,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 3U) & (~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+260,((3U & ((8U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vtop_veri::traceChgThis__83(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+261,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 4U) & ((0U == (0xfU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+262,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 4U) & (~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+263,((3U & ((0x10U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vtop_veri::traceChgThis__84(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+264,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 5U) & ((0U == (0xfU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+265,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 5U) & (~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+266,((3U & ((0x20U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vtop_veri::traceChgThis__85(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+267,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 6U) & ((0U == (0xfU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+268,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 6U) & (~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+269,((3U & ((0x40U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vtop_veri::traceChgThis__86(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+270,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 7U) & ((0U == (0xfU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+271,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 7U) & (~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+272,((3U & ((0x80U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				      ? (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vtop_veri::traceChgThis__87(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+273,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__mem_wb),4);
	vcdp->chgBus  (c+274,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__mem_d),32);
	vcdp->chgBus  (c+275,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ramq),32);
    }
}

void Vtop_veri::traceChgThis__88(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+276,((1U & ((0U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__89(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+277,((1U & ((0U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__90(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+278,((1U & ((0U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__91(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+279,((1U & ((0U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__92(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+280,((1U & ((0U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__93(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+281,((1U & ((0U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__94(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+282,((1U & ((0U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__95(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+283,((1U & ((0U == (7U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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
    }
}

void Vtop_veri::traceChgThis__96(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+284,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+285,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+286,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+287,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+288,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+289,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vtop_veri::traceChgThis__97(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+290,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+291,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+292,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+293,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+294,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+295,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vtop_veri::traceChgThis__98(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+296,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+297,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+298,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+299,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+300,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+301,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vtop_veri::traceChgThis__99(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+302,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+303,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+304,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+305,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+306,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+307,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vtop_veri::traceChgThis__100(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+308,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+309,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+310,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+311,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+312,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+313,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vtop_veri::traceChgThis__101(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+314,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+315,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+316,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+317,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+318,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+319,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vtop_veri::traceChgThis__102(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+320,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+321,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+322,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+323,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+324,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+325,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vtop_veri::traceChgThis__103(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+326,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+327,((((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+328,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+329,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+330,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+331,((1U & ((~ (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vtop_veri::traceChgThis__104(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+332,(vlTOPp->top_veri__DOT__pin_dir),32);
    }
}

void Vtop_veri::traceChgThis__105(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+333,(vlTOPp->top_veri__DOT__core__DOT__bus_r),8);
	vcdp->chgBit  (c+334,((0U != (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_r))));
    }
}

void Vtop_veri::traceChgThis__106(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+335,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys));
	vcdp->chgBus  (c+336,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc),8);
	vcdp->chgBit  (c+337,((0xffU == (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc))));
	vcdp->chgBus  (c+338,(((0xfU == (0xfU & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc)))
			        ? ((3U == (3U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc) 
						 >> 4U)))
				    ? ((0x40U & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc))
				        ? 7U : 6U) : 
				   ((0x10U & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc))
				     ? 5U : 4U)) : 
			       ((3U == (3U & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc)))
				 ? ((4U & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc))
				     ? 3U : 2U) : (
						   (1U 
						    & (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__enc))
						    ? 1U
						    : 0U)))),3);
	vcdp->chgBus  (c+339,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__num),3);
	vcdp->chgBus  (c+340,((0xffU & ((IData)(1U) 
					<< (IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__num)))),8);
	vcdp->chgBit  (c+341,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__cog_start));
    }
}

void Vtop_veri::traceChgThis__107(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+342,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+343,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+344,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+345,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vtop_veri::traceChgThis__108(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+346,(vlTOPp->top_veri__DOT__core__DOT__pll),8);
    }
}

void Vtop_veri::traceChgThis__109(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+347,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+348,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+349,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+350,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vtop_veri::traceChgThis__110(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+351,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+352,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+353,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+354,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vtop_veri::traceChgThis__111(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+355,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+356,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+357,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+358,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vtop_veri::traceChgThis__112(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+359,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+360,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+361,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+362,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vtop_veri::traceChgThis__113(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+363,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+364,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+365,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+366,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vtop_veri::traceChgThis__114(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+367,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+368,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+369,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+370,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vtop_veri::traceChgThis__115(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+371,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+372,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+373,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+374,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vtop_veri::traceChgThis__116(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+375,(vlTOPp->top_veri__DOT__core__DOT__ptr_w),8);
	vcdp->chgBit  (c+376,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w))));
	vcdp->chgBit  (c+377,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				     >> 1U))));
	vcdp->chgBit  (c+378,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				     >> 2U))));
	vcdp->chgBit  (c+379,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				     >> 3U))));
	vcdp->chgBit  (c+380,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				     >> 4U))));
	vcdp->chgBit  (c+381,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				     >> 5U))));
	vcdp->chgBit  (c+382,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				     >> 6U))));
	vcdp->chgBit  (c+383,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__ptr_w) 
				     >> 7U))));
    }
}

void Vtop_veri::traceChgThis__117(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+384,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vtop_veri::traceChgThis__118(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+385,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vtop_veri::traceChgThis__119(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+386,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vtop_veri::traceChgThis__120(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+387,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vtop_veri::traceChgThis__121(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+388,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vtop_veri::traceChgThis__122(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+389,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vtop_veri::traceChgThis__123(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+390,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vtop_veri::traceChgThis__124(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+391,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vtop_veri::traceChgThis__125(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+392,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+393,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+394,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+395,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+396,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+397,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+398,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+399,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
    }
}

void Vtop_veri::traceChgThis__126(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+400,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))));
    }
}

void Vtop_veri::traceChgThis__127(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+401,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vtop_veri::traceChgThis__128(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+402,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))));
    }
}

void Vtop_veri::traceChgThis__129(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+403,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vtop_veri::traceChgThis__130(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+404,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))));
    }
}

void Vtop_veri::traceChgThis__131(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+405,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vtop_veri::traceChgThis__132(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+406,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))));
    }
}

void Vtop_veri::traceChgThis__133(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+407,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vtop_veri::traceChgThis__134(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+408,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))));
    }
}

void Vtop_veri::traceChgThis__135(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+409,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vtop_veri::traceChgThis__136(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+410,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))));
    }
}

void Vtop_veri::traceChgThis__137(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+411,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vtop_veri::traceChgThis__138(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+412,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))));
    }
}

void Vtop_veri::traceChgThis__139(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+413,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vtop_veri::traceChgThis__140(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+414,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))));
    }
}

void Vtop_veri::traceChgThis__141(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+415,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vtop_veri::traceChgThis__142(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+416,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+417,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+418,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vtop_veri::traceChgThis__143(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+419,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+420,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+421,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+422,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+423,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+424,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+425,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+426,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+427,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vtop_veri::traceChgThis__144(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+428,((1U & ((4U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+429,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m) 
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
    }
}

void Vtop_veri::traceChgThis__145(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+430,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+431,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+432,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vtop_veri::traceChgThis__146(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+433,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+434,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+435,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+436,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+437,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+438,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+439,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+440,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+441,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vtop_veri::traceChgThis__147(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+442,((1U & ((4U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+443,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m) 
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
    }
}

void Vtop_veri::traceChgThis__148(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+444,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+445,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+446,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vtop_veri::traceChgThis__149(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+447,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+448,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+449,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+450,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+451,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+452,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+453,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+454,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+455,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vtop_veri::traceChgThis__150(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+456,((1U & ((4U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+457,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m) 
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
    }
}

void Vtop_veri::traceChgThis__151(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+458,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+459,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+460,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vtop_veri::traceChgThis__152(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+461,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+462,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+463,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+464,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+465,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+466,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+467,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+468,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+469,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vtop_veri::traceChgThis__153(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+470,((1U & ((4U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+471,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m) 
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
    }
}

void Vtop_veri::traceChgThis__154(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+472,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+473,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+474,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vtop_veri::traceChgThis__155(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+475,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+476,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+477,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+478,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+479,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+480,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+481,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+482,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+483,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vtop_veri::traceChgThis__156(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+484,((1U & ((4U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+485,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m) 
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
    }
}

void Vtop_veri::traceChgThis__157(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+486,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+487,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+488,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vtop_veri::traceChgThis__158(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+489,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+490,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+491,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+492,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+493,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+494,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+495,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+496,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+497,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vtop_veri::traceChgThis__159(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+498,((1U & ((4U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+499,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m) 
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
    }
}

void Vtop_veri::traceChgThis__160(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+500,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+501,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+502,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vtop_veri::traceChgThis__161(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+503,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+504,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+505,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+506,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+507,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+508,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+509,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+510,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+511,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vtop_veri::traceChgThis__162(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+512,((1U & ((4U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+513,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m) 
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
    }
}

void Vtop_veri::traceChgThis__163(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+514,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+515,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+516,((0x3fU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vtop_veri::traceChgThis__164(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+517,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+518,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+519,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+520,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+521,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+522,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+523,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+524,(((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+525,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vtop_veri::traceChgThis__165(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+526,((1U & ((4U == (0xfU & 
					     (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+527,((1U & (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m) 
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
    }
}

void Vtop_veri::traceChgThis__166(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+528,(vlTOPp->top_veri__DOT__core__DOT__bus_a),128);
	vcdp->chgBus  (c+532,((0xffffU & ((((((((vlTOPp->top_veri__DOT__core__DOT__bus_a[3U] 
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
    }
}

void Vtop_veri::traceChgThis__167(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+533,(vlTOPp->top_veri__DOT__core__DOT__bus_d),256);
	vcdp->chgBus  (c+541,((((((((vlTOPp->top_veri__DOT__core__DOT__bus_d[7U] 
				     | vlTOPp->top_veri__DOT__core__DOT__bus_d[6U]) 
				    | vlTOPp->top_veri__DOT__core__DOT__bus_d[5U]) 
				   | vlTOPp->top_veri__DOT__core__DOT__bus_d[4U]) 
				  | vlTOPp->top_veri__DOT__core__DOT__bus_d[3U]) 
				 | vlTOPp->top_veri__DOT__core__DOT__bus_d[2U]) 
				| vlTOPp->top_veri__DOT__core__DOT__bus_d[1U]) 
			       | vlTOPp->top_veri__DOT__core__DOT__bus_d[0U])),32);
	vcdp->chgBit  (c+542,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+543,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+544,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+545,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+546,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+547,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+548,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+549,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT____Vcellinp__cog___ena));
    }
}

void Vtop_veri::traceChgThis__168(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+550,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vtop_veri::traceChgThis__169(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+551,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vtop_veri::traceChgThis__170(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+552,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vtop_veri::traceChgThis__171(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+553,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vtop_veri::traceChgThis__172(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+554,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vtop_veri::traceChgThis__173(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+555,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vtop_veri::traceChgThis__174(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+556,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vtop_veri::traceChgThis__175(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+557,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vtop_veri::traceChgThis__176(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+558,(vlTOPp->top_veri__DOT__core__DOT__bus_e),8);
	vcdp->chgBus  (c+559,(vlTOPp->top_veri__DOT__core__DOT__bus_w),8);
	vcdp->chgBus  (c+560,(vlTOPp->top_veri__DOT__core__DOT__bus_s),16);
	vcdp->chgBit  (c+561,((0U != (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_e))));
	vcdp->chgBit  (c+562,((0U != (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_w))));
	vcdp->chgBus  (c+563,((3U & (((((((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s) 
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
					  >> 4U)) | 
				      ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s) 
				       >> 2U)) | (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_s)))),2);
    }
}

void Vtop_veri::traceChgThis__177(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+564,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+565,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+566,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+567,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+568,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+569,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+570,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+572,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+573,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+574,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+575,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+576,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+577,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vtop_veri::traceChgThis__178(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+578,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+579,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+580,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+581,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+582,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+583,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+584,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+586,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+587,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+588,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+589,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+590,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+591,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vtop_veri::traceChgThis__179(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+592,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+593,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+594,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+595,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+596,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+597,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+598,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+600,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+601,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+602,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+603,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+604,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+605,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vtop_veri::traceChgThis__180(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+606,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+607,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+608,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+609,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+610,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+611,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+612,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+614,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+615,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+616,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+617,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+618,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+619,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vtop_veri::traceChgThis__181(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+620,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+621,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+622,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+623,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+624,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+625,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+626,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+628,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+629,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+630,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+631,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+632,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+633,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vtop_veri::traceChgThis__182(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+634,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+635,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+636,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+637,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+638,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+639,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+640,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+642,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+643,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+644,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+645,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+646,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+647,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vtop_veri::traceChgThis__183(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+648,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+649,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+650,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+651,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+652,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+653,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+654,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+656,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+657,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+658,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+659,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+660,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+661,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vtop_veri::traceChgThis__184(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+662,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+663,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+664,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+665,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+666,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+667,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+668,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+670,(((0x80000000U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+671,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+672,((1U & VL_REDXOR_32(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+673,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+674,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+675,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vtop_veri::traceChgThis__185(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+676,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+677,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+678,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+679,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+681,(((0x80000000U & ((IData)(
						       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+682,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+683,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+684,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vtop_veri::traceChgThis__186(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+685,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+686,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+687,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+688,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+690,(((0x80000000U & ((IData)(
						       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+691,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+692,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+693,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vtop_veri::traceChgThis__187(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+694,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+695,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+696,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+697,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+699,(((0x80000000U & ((IData)(
						       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+700,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+701,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+702,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vtop_veri::traceChgThis__188(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+703,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+704,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+705,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+706,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+708,(((0x80000000U & ((IData)(
						       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+709,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+710,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+711,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vtop_veri::traceChgThis__189(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+712,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+713,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+714,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+715,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+717,(((0x80000000U & ((IData)(
						       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+718,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+719,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+720,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vtop_veri::traceChgThis__190(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+721,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+722,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+723,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+724,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+726,(((0x80000000U & ((IData)(
						       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+727,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+728,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+729,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vtop_veri::traceChgThis__191(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+730,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+731,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+732,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+733,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+735,(((0x80000000U & ((IData)(
						       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+736,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+737,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+738,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vtop_veri::traceChgThis__192(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+739,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+740,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+741,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+742,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+744,(((0x80000000U & ((IData)(
						       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+745,((1U & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+746,((1U & (~ (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+747,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vtop_veri::traceChgThis__193(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+748,(vlTOPp->top_veri__DOT__clkgen__DOT__cfgx),7);
	vcdp->chgBus  (c+749,(vlTOPp->top_veri__DOT__clkgen__DOT__divide),13);
    }
}

void Vtop_veri::traceChgThis__194(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+750,(vlTOPp->top_veri__DOT__core__DOT__cog_ena),8);
	vcdp->chgBit  (c+751,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ec));
	vcdp->chgBit  (c+752,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ed));
	vcdp->chgBus  (c+753,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__cog_e),8);
	vcdp->chgBus  (c+754,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__lock_e),8);
	vcdp->chgBus  (c+755,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+756,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+757,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+758,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+759,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+760,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+761,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+762,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ptr),28);
    }
}

void Vtop_veri::traceChgThis__195(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+763,((0xffffU & ((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					   ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run)
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vtop_veri::traceChgThis__196(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+764,((0xffffU & ((2U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					   ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run)
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vtop_veri::traceChgThis__197(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+765,((0xffffU & ((4U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					   ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run)
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vtop_veri::traceChgThis__198(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+766,((0xffffU & ((8U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					   ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run)
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vtop_veri::traceChgThis__199(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+767,((0xffffU & ((0x10U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					   ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run)
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vtop_veri::traceChgThis__200(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+768,((0xffffU & ((0x20U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					   ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run)
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vtop_veri::traceChgThis__201(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+769,((0xffffU & ((0x40U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					   ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run)
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vtop_veri::traceChgThis__202(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+770,((0xffffU & ((0x80U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
					   ? ((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run)
					       ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vtop_veri::traceChgThis__203(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+771,(vlTOPp->top_veri__DOT__core__DOT__bus_q),32);
	vcdp->chgBit  (c+772,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__rc));
	vcdp->chgBit  (c+773,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__wc));
	vcdp->chgBus  (c+774,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sc),2);
	vcdp->chgBit  (c+775,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__rd));
	vcdp->chgBus  (c+776,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sd),2);
	vcdp->chgBus  (c+777,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ad),2);
	vcdp->chgBus  (c+778,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_q),3);
	vcdp->chgBus  (c+779,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__ram_q3),8);
	vcdp->chgBus  (c+780,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__ram_q2),8);
	vcdp->chgBus  (c+781,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__ram_q1),8);
	vcdp->chgBus  (c+782,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__ram_q0),8);
	vcdp->chgBus  (c+783,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__rom_q),32);
	vcdp->chgBus  (c+784,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__hub_mem___DOT__mem),2);
	vcdp->chgBus  (c+785,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+786,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+788,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+790,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+791,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+792,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+793,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+794,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+795,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+797,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+799,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+800,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+801,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+802,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+803,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+804,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+806,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+808,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+809,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+810,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+811,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+812,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+813,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+815,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+817,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+818,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+819,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+820,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+821,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+822,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+824,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+826,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+827,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+828,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+829,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+830,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+831,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+833,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+835,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+836,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+837,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+838,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+839,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+840,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+842,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+844,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+845,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+846,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+847,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+848,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+849,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+851,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+853,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+854,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+855,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+856,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
    }
}

void Vtop_veri::traceChgThis__204(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+857,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+858,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+859,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+860,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+861,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+862,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cancel));
    }
}

void Vtop_veri::traceChgThis__205(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+863,(((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
			       & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run))));
    }
}

void Vtop_veri::traceChgThis__206(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp228,127,0,4);
    // Body
    {
	__Vtemp228[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s));
	__Vtemp228[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)));
	__Vtemp228[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))))));
	__Vtemp228[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+864,(__Vtemp228),128);
	vcdp->chgBus  (c+868,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vtop_veri::traceChgThis__207(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+869,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+870,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+871,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+872,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+873,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+874,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cancel));
    }
}

void Vtop_veri::traceChgThis__208(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+875,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 1U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run))));
    }
}

void Vtop_veri::traceChgThis__209(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp230,127,0,4);
    // Body
    {
	__Vtemp230[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s));
	__Vtemp230[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)));
	__Vtemp230[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))))));
	__Vtemp230[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+876,(__Vtemp230),128);
	vcdp->chgBus  (c+880,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vtop_veri::traceChgThis__210(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+881,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+882,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+883,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+884,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+885,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+886,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cancel));
    }
}

void Vtop_veri::traceChgThis__211(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+887,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 2U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run))));
    }
}

void Vtop_veri::traceChgThis__212(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp232,127,0,4);
    // Body
    {
	__Vtemp232[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s));
	__Vtemp232[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)));
	__Vtemp232[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))))));
	__Vtemp232[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+888,(__Vtemp232),128);
	vcdp->chgBus  (c+892,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vtop_veri::traceChgThis__213(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+893,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+894,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+895,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+896,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+897,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+898,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cancel));
    }
}

void Vtop_veri::traceChgThis__214(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+899,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 3U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run))));
    }
}

void Vtop_veri::traceChgThis__215(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp234,127,0,4);
    // Body
    {
	__Vtemp234[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s));
	__Vtemp234[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)));
	__Vtemp234[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))))));
	__Vtemp234[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+900,(__Vtemp234),128);
	vcdp->chgBus  (c+904,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vtop_veri::traceChgThis__216(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+905,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+906,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+907,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+908,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+909,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+910,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cancel));
    }
}

void Vtop_veri::traceChgThis__217(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+911,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 4U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run))));
    }
}

void Vtop_veri::traceChgThis__218(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp236,127,0,4);
    // Body
    {
	__Vtemp236[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s));
	__Vtemp236[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)));
	__Vtemp236[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))))));
	__Vtemp236[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+912,(__Vtemp236),128);
	vcdp->chgBus  (c+916,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vtop_veri::traceChgThis__219(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+917,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+918,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+919,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+920,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+921,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+922,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cancel));
    }
}

void Vtop_veri::traceChgThis__220(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+923,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 5U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run))));
    }
}

void Vtop_veri::traceChgThis__221(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp238,127,0,4);
    // Body
    {
	__Vtemp238[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s));
	__Vtemp238[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)));
	__Vtemp238[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))))));
	__Vtemp238[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+924,(__Vtemp238),128);
	vcdp->chgBus  (c+928,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vtop_veri::traceChgThis__222(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+929,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+930,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+931,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+932,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+933,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+934,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cancel));
    }
}

void Vtop_veri::traceChgThis__223(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+935,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 6U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run))));
    }
}

void Vtop_veri::traceChgThis__224(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp240,127,0,4);
    // Body
    {
	__Vtemp240[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s));
	__Vtemp240[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)));
	__Vtemp240[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))))));
	__Vtemp240[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+936,(__Vtemp240),128);
	vcdp->chgBus  (c+940,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vtop_veri::traceChgThis__225(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+941,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+942,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+943,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+944,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+945,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+946,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cancel));
    }
}

void Vtop_veri::traceChgThis__226(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+947,((((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				>> 7U) & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run))));
    }
}

void Vtop_veri::traceChgThis__227(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp242,127,0,4);
    // Body
    {
	__Vtemp242[0U] = ((0xfffffe00U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s));
	__Vtemp242[1U] = ((0xfffc0000U & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)));
	__Vtemp242[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))))));
	__Vtemp242[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+948,(__Vtemp242),128);
	vcdp->chgBus  (c+952,((((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vtop_veri::traceChgThis__228(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+953,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+955,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+956,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+958,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+959,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+961,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+962,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+964,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+965,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+967,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+968,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+970,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+971,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+973,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+974,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+976,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+977,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+979,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+980,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+982,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+983,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+985,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+986,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+988,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+989,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+991,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+992,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+994,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+995,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+997,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+998,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+1000,((0xffU & (IData)((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
    }
}

void Vtop_veri::traceChgThis__229(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1001,(vlTOPp->top_veri__DOT__cfg),8);
	vcdp->chgBus  (c+1002,((0x7fU & (IData)(vlTOPp->top_veri__DOT__cfg))),7);
	vcdp->chgBus  (c+1003,(vlTOPp->top_veri__DOT__core__DOT__bus_sel),8);
	vcdp->chgBit  (c+1004,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))));
	vcdp->chgBit  (c+1005,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 1U))));
	vcdp->chgBit  (c+1006,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 2U))));
	vcdp->chgBit  (c+1007,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 3U))));
	vcdp->chgBit  (c+1008,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 4U))));
	vcdp->chgBit  (c+1009,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 5U))));
	vcdp->chgBit  (c+1010,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 6U))));
	vcdp->chgBit  (c+1011,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel) 
				      >> 7U))));
    }
}

void Vtop_veri::traceChgThis__230(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1012,(((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				 ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1013,(((2U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				 ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1014,(((4U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				 ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1015,(((8U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				 ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1016,(((0x10U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				 ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1017,(((0x20U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				 ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1018,(((0x40U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				 ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1019,(((0x80U & (IData)(vlTOPp->top_veri__DOT__core__DOT__bus_sel))
				 ? vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d
				 : 0U)),32);
    }
}

void Vtop_veri::traceChgThis__231(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1020,(vlTOPp->top_veri__DOT__nres));
	vcdp->chgBus  (c+1021,(vlTOPp->top_veri__DOT__core__DOT__cnt),32);
	vcdp->chgBit  (c+1022,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__sys_c));
	vcdp->chgBus  (c+1023,((0xfffffffU & (vlTOPp->top_veri__DOT__core__DOT__hub___DOT__dc 
					      >> 4U))),28);
	vcdp->chgBus  (c+1024,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ac),16);
	vcdp->chgBus  (c+1025,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__dc),32);
	vcdp->chgBus  (c+1026,(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__lock_state),8);
	vcdp->chgBit  (c+1027,((1U & ((IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__lock_state) 
				      >> (7U & vlTOPp->top_veri__DOT__core__DOT__hub___DOT__dc)))));
	vcdp->chgBus  (c+1028,((0x3fffU & ((IData)(vlTOPp->top_veri__DOT__core__DOT__hub___DOT__ac) 
					   >> 2U))),14);
	vcdp->chgBit  (c+1029,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1030,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1031,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1032,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1033,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1034,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1035,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1036,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1037,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1038,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1039,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1040,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1041,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1042,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1043,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1044,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1045,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1046,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1047,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1048,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1049,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1050,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1051,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1052,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
    }
}

void Vtop_veri::traceChgThis__232(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1053,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1054,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1055,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1056,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vtop_veri::traceChgThis__233(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1057,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1058,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1059,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1060,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vtop_veri::traceChgThis__234(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1061,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1062,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1063,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1064,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vtop_veri::traceChgThis__235(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1065,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1066,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1067,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1068,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vtop_veri::traceChgThis__236(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1069,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1070,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1071,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1072,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vtop_veri::traceChgThis__237(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1073,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1074,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1075,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1076,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vtop_veri::traceChgThis__238(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1077,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1078,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1079,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1080,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vtop_veri::traceChgThis__239(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1081,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1082,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1083,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1084,((0xfU & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vtop_veri::traceChgThis__240(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1085,(vlTOPp->top_veri__DOT__core__DOT__ena_bus));
    }
}

void Vtop_veri::traceChgThis__241(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1086,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vtop_veri::traceChgThis__242(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1087,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1088,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1089,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1090,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1091,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1092,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1093,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1094,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1095,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1096,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1097,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vtop_veri::traceChgThis__243(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1098,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vtop_veri::traceChgThis__244(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1099,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vtop_veri::traceChgThis__245(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1100,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1101,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1102,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1103,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1104,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1105,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1106,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1107,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1108,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1109,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1110,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vtop_veri::traceChgThis__246(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1111,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vtop_veri::traceChgThis__247(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1112,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vtop_veri::traceChgThis__248(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1113,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1114,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1115,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1116,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1117,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1118,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1119,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1120,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1121,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1122,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1123,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vtop_veri::traceChgThis__249(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1124,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vtop_veri::traceChgThis__250(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1125,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vtop_veri::traceChgThis__251(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1126,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1127,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1128,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1129,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1130,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1131,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1132,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1133,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1134,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1135,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1136,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vtop_veri::traceChgThis__252(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1137,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vtop_veri::traceChgThis__253(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1138,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vtop_veri::traceChgThis__254(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1139,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1140,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1141,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1142,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1143,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1144,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1145,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1146,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1147,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1148,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1149,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vtop_veri::traceChgThis__255(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1150,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vtop_veri::traceChgThis__256(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1151,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vtop_veri::traceChgThis__257(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1152,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1153,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1154,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1155,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1156,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1157,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1158,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1159,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1160,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1161,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1162,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vtop_veri::traceChgThis__258(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1163,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vtop_veri::traceChgThis__259(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1164,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vtop_veri::traceChgThis__260(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1165,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1166,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1167,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1168,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1169,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1170,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1171,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1172,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1173,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1174,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1175,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vtop_veri::traceChgThis__261(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1176,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vtop_veri::traceChgThis__262(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1177,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vtop_veri::traceChgThis__263(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1178,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1179,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1180,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1181,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1182,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1183,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1184,((1U == (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1185,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1186,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1187,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1188,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vtop_veri::traceChgThis__264(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1189,((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vtop_veri::traceChgThis__265(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp244,127,0,4);
    VL_SIGW(__Vtemp246,127,0,4);
    VL_SIGW(__Vtemp248,127,0,4);
    VL_SIGW(__Vtemp250,127,0,4);
    VL_SIGW(__Vtemp252,127,0,4);
    VL_SIGW(__Vtemp254,127,0,4);
    VL_SIGW(__Vtemp256,127,0,4);
    VL_SIGW(__Vtemp258,127,0,4);
    // Body
    {
	vcdp->chgBus  (c+1190,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1191,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1192,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1193,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1194,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+1195,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+1707,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+1708,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp244[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s));
	__Vtemp244[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s);
	__Vtemp244[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))));
	__Vtemp244[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+1709,(__Vtemp244),128);
	vcdp->chgBus  (c+1713,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1714,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1715,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1716,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1717,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+1718,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+2230,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+2231,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp246[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s));
	__Vtemp246[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s);
	__Vtemp246[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))));
	__Vtemp246[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+2232,(__Vtemp246),128);
	vcdp->chgBus  (c+2236,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+2237,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+2238,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+2239,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+2240,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+2241,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+2753,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+2754,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp248[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s));
	__Vtemp248[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s);
	__Vtemp248[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))));
	__Vtemp248[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+2755,(__Vtemp248),128);
	vcdp->chgBus  (c+2759,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+2760,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+2761,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+2762,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+2763,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+2764,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+3276,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+3277,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp250[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s));
	__Vtemp250[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s);
	__Vtemp250[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))));
	__Vtemp250[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+3278,(__Vtemp250),128);
	vcdp->chgBus  (c+3282,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+3283,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+3284,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+3285,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+3286,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+3287,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+3799,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+3800,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp252[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s));
	__Vtemp252[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s);
	__Vtemp252[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))));
	__Vtemp252[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+3801,(__Vtemp252),128);
	vcdp->chgBus  (c+3805,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+3806,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+3807,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+3808,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+3809,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+3810,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+4322,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+4323,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp254[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s));
	__Vtemp254[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s);
	__Vtemp254[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))));
	__Vtemp254[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+4324,(__Vtemp254),128);
	vcdp->chgBus  (c+4328,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+4329,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+4330,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+4331,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+4332,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+4333,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+4845,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+4846,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp256[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s));
	__Vtemp256[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s);
	__Vtemp256[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))));
	__Vtemp256[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+4847,(__Vtemp256),128);
	vcdp->chgBus  (c+4851,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+4852,((1U & (IData)(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+4853,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+4854,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+4855,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+4856,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+5368,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+5369,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp258[0U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s));
	__Vtemp258[1U] = (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
			  & vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s);
	__Vtemp258[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
								| vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))));
	__Vtemp258[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
								 | vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+5370,(__Vtemp258),128);
    }
}

void Vtop_veri::traceChgThis__266(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5374,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5375,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5376,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vtop_veri::traceChgThis__267(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5377,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5378,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5379,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vtop_veri::traceChgThis__268(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5380,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5381,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5382,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vtop_veri::traceChgThis__269(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5383,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5384,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5385,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vtop_veri::traceChgThis__270(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5386,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5387,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5388,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vtop_veri::traceChgThis__271(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5389,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5390,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5391,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vtop_veri::traceChgThis__272(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5392,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5393,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5394,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vtop_veri::traceChgThis__273(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5395,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5396,(vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5397,((0U != (3U & (vlTOPp->top_veri__DOT__core__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vtop_veri::traceChgThis__274(Vtop_veri__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_veri* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5398,(vlTOPp->clock));
	vcdp->chgBit  (c+5399,(vlTOPp->inp_resn));
	vcdp->chgBus  (c+5400,(vlTOPp->io),32);
	vcdp->chgBit  (c+5401,(vlTOPp->sda_in));
	vcdp->chgBus  (c+5402,(vlTOPp->ledg),8);
	vcdp->chgBit  (c+5403,((1U & (~ (IData)(vlTOPp->inp_resn)))));
    }
}
