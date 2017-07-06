// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdig__Syms.h"


//======================

void Vdig::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vdig* t=(Vdig*)userthis;
    Vdig__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vdig::traceChgThis(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
						   >> 3U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 4U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0xfU)) 
				 | vlTOPp->__Vm_traceActivity[1U]) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0xaU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1aU))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 3U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 5U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x10U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0xcU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 3U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 6U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x11U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0xeU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 3U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 7U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x12U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x10U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1dU))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 3U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 8U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x13U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x12U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 3U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 9U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x14U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x14U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 3U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xaU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0x15U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x16U)) 
			       | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((((vlTOPp->__Vm_traceActivity[0U] 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 3U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xbU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0x16U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x18U)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0xaU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1aU))))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0xcU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0xeU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x10U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1dU))))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x12U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x14U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x16U)) 
			       | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x18U)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0xfU)) 
			       | vlTOPp->__Vm_traceActivity[1U])))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x10U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x11U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x12U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x13U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x14U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x15U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 3U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x16U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | vlTOPp->__Vm_traceActivity[1U])))) {
	    vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 1U))))) {
	    vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 2U))))) {
	    vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 3U))))) {
	    vlTOPp->traceChgThis__31(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 4U))))) {
	    vlTOPp->traceChgThis__32(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 5U))))) {
	    vlTOPp->traceChgThis__33(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 6U))))) {
	    vlTOPp->traceChgThis__34(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 7U))))) {
	    vlTOPp->traceChgThis__35(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[0U] 
					 >> 4U)) | 
				     (vlTOPp->__Vm_traceActivity[0U] 
				      >> 5U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 6U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 7U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 8U)) 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 9U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0xaU)) 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__36(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__37(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1aU))))) {
	    vlTOPp->traceChgThis__38(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1aU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__39(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__40(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1bU))))) {
	    vlTOPp->traceChgThis__41(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1bU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__42(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__43(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1cU))))) {
	    vlTOPp->traceChgThis__44(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1cU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__45(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__46(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1dU))))) {
	    vlTOPp->traceChgThis__47(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1dU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__48(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 8U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__49(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 8U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1eU))))) {
	    vlTOPp->traceChgThis__50(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 8U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1eU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__51(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 9U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__52(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 9U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1fU))))) {
	    vlTOPp->traceChgThis__53(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 9U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1fU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__54(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xaU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__55(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xaU)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__56(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0xaU)) | vlTOPp->__Vm_traceActivity[2U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__57(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xbU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__58(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xbU)) | (vlTOPp->__Vm_traceActivity[2U] 
						>> 1U))))) {
	    vlTOPp->traceChgThis__59(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0xbU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 1U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__60(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0xdU))))) {
	    vlTOPp->traceChgThis__61(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1aU))))) {
	    vlTOPp->traceChgThis__62(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xdU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xeU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						  >> 0x1aU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x14U))))) {
	    vlTOPp->traceChgThis__63(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1bU))))) {
	    vlTOPp->traceChgThis__64(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xdU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xeU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						  >> 0x1bU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x16U))))) {
	    vlTOPp->traceChgThis__65(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1cU))))) {
	    vlTOPp->traceChgThis__66(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xdU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xeU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						  >> 0x1cU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x18U))))) {
	    vlTOPp->traceChgThis__67(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1dU))))) {
	    vlTOPp->traceChgThis__68(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xdU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xeU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						  >> 0x1dU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1aU))))) {
	    vlTOPp->traceChgThis__69(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1eU))))) {
	    vlTOPp->traceChgThis__70(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xdU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xeU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						  >> 0x1eU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__71(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1fU))))) {
	    vlTOPp->traceChgThis__72(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xdU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xeU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						  >> 0x1fU)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__73(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__74(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xdU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xeU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x19U)) | vlTOPp->__Vm_traceActivity[2U]) 
			       | vlTOPp->__Vm_traceActivity[3U])))) {
	    vlTOPp->traceChgThis__75(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 1U))))) {
	    vlTOPp->traceChgThis__76(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xdU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xeU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x19U)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 1U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__77(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1aU))))) {
	    vlTOPp->traceChgThis__78(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1bU))))) {
	    vlTOPp->traceChgThis__79(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1cU))))) {
	    vlTOPp->traceChgThis__80(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1dU))))) {
	    vlTOPp->traceChgThis__81(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1eU))))) {
	    vlTOPp->traceChgThis__82(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x1fU))))) {
	    vlTOPp->traceChgThis__83(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__84(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[2U] 
						>> 1U))))) {
	    vlTOPp->traceChgThis__85(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0xeU))))) {
	    vlTOPp->traceChgThis__86(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x14U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__87(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x16U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__88(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x18U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__89(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1aU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__90(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1cU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__91(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1eU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__92(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | vlTOPp->__Vm_traceActivity[2U]) 
				| vlTOPp->__Vm_traceActivity[3U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__93(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[2U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[3U] 
					       >> 2U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__94(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xfU)) | vlTOPp->__Vm_traceActivity[1U])))) {
	    vlTOPp->traceChgThis__95(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x10U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 1U))))) {
	    vlTOPp->traceChgThis__96(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x11U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 2U))))) {
	    vlTOPp->traceChgThis__97(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x12U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 3U))))) {
	    vlTOPp->traceChgThis__98(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x13U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 4U))))) {
	    vlTOPp->traceChgThis__99(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x14U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 5U))))) {
	    vlTOPp->traceChgThis__100(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x15U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 6U))))) {
	    vlTOPp->traceChgThis__101(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x16U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 7U))))) {
	    vlTOPp->traceChgThis__102(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[0U] 
					 >> 0x17U)) 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 0x18U)) 
				    | (vlTOPp->__Vm_traceActivity[0U] 
				       >> 0x19U)) | 
				   (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0x1bU)) 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0x1dU)) 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__103(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__104(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | vlTOPp->__Vm_traceActivity[1U])))) {
	    vlTOPp->traceChgThis__105(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | vlTOPp->__Vm_traceActivity[1U]) 
				     | (vlTOPp->__Vm_traceActivity[1U] 
					>> 1U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 2U)) 
				   | (vlTOPp->__Vm_traceActivity[1U] 
				      >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 4U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 6U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__106(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__107(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 2U))))) {
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
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__115(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__116(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0xeU))))) {
	    vlTOPp->traceChgThis__117(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x10U))))) {
	    vlTOPp->traceChgThis__118(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x12U))))) {
	    vlTOPp->traceChgThis__119(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x14U))))) {
	    vlTOPp->traceChgThis__120(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x16U))))) {
	    vlTOPp->traceChgThis__121(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x18U))))) {
	    vlTOPp->traceChgThis__122(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x19U))))) {
	    vlTOPp->traceChgThis__123(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1aU))))) {
	    vlTOPp->traceChgThis__124(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1aU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x14U)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 3U))))) {
	    vlTOPp->traceChgThis__125(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1bU))))) {
	    vlTOPp->traceChgThis__126(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1bU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x16U)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 4U))))) {
	    vlTOPp->traceChgThis__127(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1cU))))) {
	    vlTOPp->traceChgThis__128(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1cU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x18U)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 5U))))) {
	    vlTOPp->traceChgThis__129(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1dU))))) {
	    vlTOPp->traceChgThis__130(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1dU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 6U))))) {
	    vlTOPp->traceChgThis__131(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1eU))))) {
	    vlTOPp->traceChgThis__132(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1eU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 7U))))) {
	    vlTOPp->traceChgThis__133(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1fU))))) {
	    vlTOPp->traceChgThis__134(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1fU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 8U))))) {
	    vlTOPp->traceChgThis__135(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__136(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | vlTOPp->__Vm_traceActivity[2U]) 
				| vlTOPp->__Vm_traceActivity[3U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__137(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 1U))))) {
	    vlTOPp->traceChgThis__138(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[2U] 
						   >> 1U)) 
				| (vlTOPp->__Vm_traceActivity[3U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xaU))))) {
	    vlTOPp->traceChgThis__139(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1aU))))) {
	    vlTOPp->traceChgThis__140(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x14U))))) {
	    vlTOPp->traceChgThis__141(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 3U))))) {
	    vlTOPp->traceChgThis__142(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__143(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x16U))))) {
	    vlTOPp->traceChgThis__144(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 4U))))) {
	    vlTOPp->traceChgThis__145(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__146(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x18U))))) {
	    vlTOPp->traceChgThis__147(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 5U))))) {
	    vlTOPp->traceChgThis__148(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1dU))))) {
	    vlTOPp->traceChgThis__149(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x1aU))))) {
	    vlTOPp->traceChgThis__150(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 6U))))) {
	    vlTOPp->traceChgThis__151(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__152(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x1cU))))) {
	    vlTOPp->traceChgThis__153(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 7U))))) {
	    vlTOPp->traceChgThis__154(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__155(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x1eU))))) {
	    vlTOPp->traceChgThis__156(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 8U))))) {
	    vlTOPp->traceChgThis__157(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__158(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| vlTOPp->__Vm_traceActivity[2U]) 
			       | vlTOPp->__Vm_traceActivity[3U])))) {
	    vlTOPp->traceChgThis__159(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| vlTOPp->__Vm_traceActivity[2U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__160(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__161(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 2U))))) {
	    vlTOPp->traceChgThis__162(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xaU))))) {
	    vlTOPp->traceChgThis__163(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[2U] 
					 >> 2U)) | 
				     (vlTOPp->__Vm_traceActivity[2U] 
				      >> 4U)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 5U)) 
				   | (vlTOPp->__Vm_traceActivity[2U] 
				      >> 6U)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 7U)) 
				 | (vlTOPp->__Vm_traceActivity[2U] 
				    >> 8U)) | (vlTOPp->__Vm_traceActivity[2U] 
					       >> 9U)) 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__164(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__165(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__166(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xcU))))) {
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
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[2U] 
					 >> 0x13U)) 
				     | (vlTOPp->__Vm_traceActivity[2U] 
					>> 0x15U)) 
				    | (vlTOPp->__Vm_traceActivity[2U] 
				       >> 0x17U)) | 
				   (vlTOPp->__Vm_traceActivity[2U] 
				    >> 0x19U)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1bU)) 
				 | (vlTOPp->__Vm_traceActivity[2U] 
				    >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1fU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__174(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x14U))))) {
	    vlTOPp->traceChgThis__175(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x16U))))) {
	    vlTOPp->traceChgThis__176(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x18U))))) {
	    vlTOPp->traceChgThis__177(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1aU))))) {
	    vlTOPp->traceChgThis__178(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__179(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__180(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | vlTOPp->__Vm_traceActivity[3U])))) {
	    vlTOPp->traceChgThis__181(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__182(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 3U))))) {
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
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__191(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 2U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 4U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__192(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 2U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 5U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__193(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 2U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 6U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__194(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 2U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 7U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__195(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 2U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 8U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__196(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 2U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 9U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__197(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 2U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xaU)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__198(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 2U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xbU)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__199(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__200(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__201(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 4U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xdU))))) {
	    vlTOPp->traceChgThis__202(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 4U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__203(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__204(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 5U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xdU))))) {
	    vlTOPp->traceChgThis__205(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 5U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__206(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__207(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 6U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xdU))))) {
	    vlTOPp->traceChgThis__208(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 6U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__209(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__210(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 7U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xdU))))) {
	    vlTOPp->traceChgThis__211(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 7U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__212(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__213(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 8U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xdU))))) {
	    vlTOPp->traceChgThis__214(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 8U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__215(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__216(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 9U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xdU))))) {
	    vlTOPp->traceChgThis__217(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 9U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__218(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__219(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xaU) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xdU))))) {
	    vlTOPp->traceChgThis__220(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xaU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x19U))))) {
	    vlTOPp->traceChgThis__221(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__222(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xbU) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xdU))))) {
	    vlTOPp->traceChgThis__223(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xbU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x19U))))) {
	    vlTOPp->traceChgThis__224(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x1000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__225(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__226(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xdU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x19U))))) {
	    vlTOPp->traceChgThis__227(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__228(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x8000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__229(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__230(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__231(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__232(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__233(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__234(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__235(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__236(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80000000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__237(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__238(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__239(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0xaU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x1aU))))) {
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
					    >> 0x1bU))))) {
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
					    >> 0x1cU))))) {
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
					     >> 0x1dU))))) {
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
					     >> 0x1eU))))) {
	    vlTOPp->traceChgThis__252(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__253(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__254(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x14U) | (vlTOPp->__Vm_traceActivity[1U] 
					     >> 0x1fU))))) {
	    vlTOPp->traceChgThis__255(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__256(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__257(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x16U) | vlTOPp->__Vm_traceActivity[2U])))) {
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
					     >> 1U))))) {
	    vlTOPp->traceChgThis__261(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__262(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__263(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x8000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__264(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__265(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__266(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__267(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__268(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity[2U]))) {
	    vlTOPp->traceChgThis__269(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity[2U]))) {
	    vlTOPp->traceChgThis__270(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__271(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity[0U] = 0U;
    vlTOPp->__Vm_traceActivity[1U] = 0U;
    vlTOPp->__Vm_traceActivity[2U] = 0U;
    vlTOPp->__Vm_traceActivity[3U] = 0U;
}

void Vdig::traceChgThis__2(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+1,(vlTOPp->dig__DOT__outx),256);
	vcdp->chgBus  (c+9,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+10,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+11,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+12,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+13,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+14,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+15,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+16,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+17,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+18,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+19,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+20,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+21,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+22,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+23,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+24,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+25,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+26,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+27,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+28,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+29,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+30,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+31,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+32,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+33,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+34,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+35,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+36,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+37,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+38,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+39,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+40,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+41,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+42,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+43,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
	vcdp->chgBus  (c+44,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__px),9);
	vcdp->chgBus  (c+45,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_a),9);
	vcdp->chgBus  (c+46,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__sx),32);
	vcdp->chgBit  (c+47,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vclk));
	vcdp->chgBus  (c+48,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast),4);
    }
}

void Vdig::traceChgThis__3(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+49,(((((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vdig::traceChgThis__4(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+50,(((((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vdig::traceChgThis__5(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+51,(((((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vdig::traceChgThis__6(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+52,(((((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vdig::traceChgThis__7(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+53,(((((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vdig::traceChgThis__8(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+54,(((((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vdig::traceChgThis__9(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+55,(((((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vdig::traceChgThis__10(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+56,(((((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__outa 
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
				      << (0x18U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
						   >> 6U)))
				   : 0U)) & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__dira)),32);
    }
}

void Vdig::traceChgThis__11(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+57,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+58,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vdig::traceChgThis__12(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+59,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+60,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vdig::traceChgThis__13(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+61,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+62,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vdig::traceChgThis__14(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+63,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+64,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vdig::traceChgThis__15(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+65,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+66,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vdig::traceChgThis__16(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+67,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+68,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vdig::traceChgThis__17(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+69,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+70,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vdig::traceChgThis__18(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+71,(((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
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
	vcdp->chgBus  (c+72,(((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
			       ? ((0x20000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid)
				   ? (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast))
				   : (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__broadcast) 
				       << 4U) | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband)))
			       : (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete))),8);
    }
}

void Vdig::traceChgThis__19(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+73,(vlTOPp->dig__DOT__hub___DOT__mem_q),32);
    }
}

void Vdig::traceChgThis__20(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+74,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+75,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vdig::traceChgThis__21(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+76,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+77,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vdig::traceChgThis__22(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+78,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+79,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vdig::traceChgThis__23(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+80,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+81,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vdig::traceChgThis__24(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+82,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+83,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vdig::traceChgThis__25(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+84,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+85,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vdig::traceChgThis__26(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+86,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+87,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vdig::traceChgThis__27(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+88,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 2U)))));
	vcdp->chgBit  (c+89,((1U & ((0x40000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)
				     ? (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> (0x1fU & 
					    ((IData)(0x1aU) 
					     + (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly))))
				     : ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 2U)))));
    }
}

void Vdig::traceChgThis__28(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+90,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+92,((((QData)((IData)((0x92U 
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
    }
}

void Vdig::traceChgThis__29(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+94,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+96,((((QData)((IData)((0x92U 
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
    }
}

void Vdig::traceChgThis__30(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+98,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+100,((((QData)((IData)((0x92U 
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
    }
}

void Vdig::traceChgThis__31(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+102,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+104,((((QData)((IData)((0x92U 
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
    }
}

void Vdig::traceChgThis__32(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+106,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+108,((((QData)((IData)((0x92U 
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
    }
}

void Vdig::traceChgThis__33(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+110,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+112,((((QData)((IData)((0x92U 
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
    }
}

void Vdig::traceChgThis__34(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+114,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+116,((((QData)((IData)((0x92U 
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
    }
}

void Vdig::traceChgThis__35(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+118,((((QData)((IData)((0x92U 
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
	vcdp->chgQuad (c+120,((((QData)((IData)((0x92U 
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
    }
}

void Vdig::traceChgThis__36(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+122,(vlTOPp->dig__DOT__dirx),256);
    }
}

void Vdig::traceChgThis__37(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp195,127,0,4);
    VL_SIGW(__Vtemp198,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp195, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)))));
	__Vtemp198[0U] = __Vtemp195[0U];
	__Vtemp198[1U] = __Vtemp195[1U];
	__Vtemp198[2U] = __Vtemp195[2U];
	__Vtemp198[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp195[3U]);
	__Vtemp198[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp198[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp198[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp198[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+130,(__Vtemp198),248);
    }
}

void Vdig::traceChgThis__38(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+138,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+139,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__39(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+140,((1U & ((~ (IData)((0U 
						 != vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vdig::traceChgThis__40(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp199,127,0,4);
    VL_SIGW(__Vtemp202,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp199, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)))));
	__Vtemp202[0U] = __Vtemp199[0U];
	__Vtemp202[1U] = __Vtemp199[1U];
	__Vtemp202[2U] = __Vtemp199[2U];
	__Vtemp202[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp199[3U]);
	__Vtemp202[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp202[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp202[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp202[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+141,(__Vtemp202),248);
    }
}

void Vdig::traceChgThis__41(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+149,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+150,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__42(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+151,((1U & ((~ (IData)((0U 
						 != vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vdig::traceChgThis__43(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp203,127,0,4);
    VL_SIGW(__Vtemp206,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp203, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)))));
	__Vtemp206[0U] = __Vtemp203[0U];
	__Vtemp206[1U] = __Vtemp203[1U];
	__Vtemp206[2U] = __Vtemp203[2U];
	__Vtemp206[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp203[3U]);
	__Vtemp206[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp206[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp206[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp206[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+152,(__Vtemp206),248);
    }
}

void Vdig::traceChgThis__44(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+160,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+161,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__45(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+162,((1U & ((~ (IData)((0U 
						 != vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vdig::traceChgThis__46(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp207,127,0,4);
    VL_SIGW(__Vtemp210,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp207, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)))));
	__Vtemp210[0U] = __Vtemp207[0U];
	__Vtemp210[1U] = __Vtemp207[1U];
	__Vtemp210[2U] = __Vtemp207[2U];
	__Vtemp210[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp207[3U]);
	__Vtemp210[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp210[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp210[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp210[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+163,(__Vtemp210),248);
    }
}

void Vdig::traceChgThis__47(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+171,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+172,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__48(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+173,((1U & ((~ (IData)((0U 
						 != vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vdig::traceChgThis__49(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp211,127,0,4);
    VL_SIGW(__Vtemp214,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp211, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)))));
	__Vtemp214[0U] = __Vtemp211[0U];
	__Vtemp214[1U] = __Vtemp211[1U];
	__Vtemp214[2U] = __Vtemp211[2U];
	__Vtemp214[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp211[3U]);
	__Vtemp214[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp214[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp214[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp214[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+174,(__Vtemp214),248);
    }
}

void Vdig::traceChgThis__50(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+182,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+183,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__51(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+184,((1U & ((~ (IData)((0U 
						 != vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vdig::traceChgThis__52(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp215,127,0,4);
    VL_SIGW(__Vtemp218,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp215, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)))));
	__Vtemp218[0U] = __Vtemp215[0U];
	__Vtemp218[1U] = __Vtemp215[1U];
	__Vtemp218[2U] = __Vtemp215[2U];
	__Vtemp218[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp215[3U]);
	__Vtemp218[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp218[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp218[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp218[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+185,(__Vtemp218),248);
    }
}

void Vdig::traceChgThis__53(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+193,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+194,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__54(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+195,((1U & ((~ (IData)((0U 
						 != vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vdig::traceChgThis__55(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp219,127,0,4);
    VL_SIGW(__Vtemp222,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp219, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)))));
	__Vtemp222[0U] = __Vtemp219[0U];
	__Vtemp222[1U] = __Vtemp219[1U];
	__Vtemp222[2U] = __Vtemp219[2U];
	__Vtemp222[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp219[3U]);
	__Vtemp222[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp222[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp222[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp222[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+196,(__Vtemp222),248);
    }
}

void Vdig::traceChgThis__56(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+204,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+205,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__57(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+206,((1U & ((~ (IData)((0U 
						 != vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vdig::traceChgThis__58(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp223,127,0,4);
    VL_SIGW(__Vtemp226,255,0,8);
    // Body
    {
	VL_EXTEND_WQ(124,62, __Vtemp223, (((QData)((IData)(
							   (0x7fffffffU 
							    & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr))) 
					   << 0x1fU) 
					  | (QData)((IData)(
							    (0x7fffffffU 
							     & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)))));
	__Vtemp226[0U] = __Vtemp223[0U];
	__Vtemp226[1U] = __Vtemp223[1U];
	__Vtemp226[2U] = __Vtemp223[2U];
	__Vtemp226[3U] = ((0xf0000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					  << 0x1cU)) 
			  | __Vtemp223[3U]);
	__Vtemp226[4U] = ((0xf8000000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					  << 0x1bU)) 
			  | (0x7ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					   >> 4U)));
	__Vtemp226[5U] = ((0xfc000000U & ((IData)((QData)((IData)(
								  (0x7fffffffU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU)))))))) 
					  << 0x1aU)) 
			  | (0x3ffffffU & (VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c))) 
					   >> 5U)));
	__Vtemp226[6U] = ((0x3ffffffU & ((IData)((QData)((IData)(
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
	__Vtemp226[7U] = (0x3ffffffU & ((IData)(((QData)((IData)(
								 (0x7fffffffU 
								  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
										>> 0x1fU))))))) 
						 >> 0x20U)) 
					>> 6U));
	vcdp->chgArray(c+207,(__Vtemp226),248);
    }
}

void Vdig::traceChgThis__59(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+215,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
			        ? (2U & ((((0x8000000U 
					    & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
					    ? (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z)
					    : (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c)) 
					  << 1U) ^ 
					 (0x7eU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x19U))))
			        : ((2U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					  >> 0x1aU)) 
				   | (1U & (~ VL_REDXOR_32(
							   (3U 
							    & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							       >> 0x1aU)))))))),2);
	vcdp->chgBit  (c+216,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__60(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+217,((1U & ((~ (IData)((0U 
						 != vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__alu_r))) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z) 
					| (~ ((6U == 
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
    }
}

void Vdig::traceChgThis__61(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+218,(vlTOPp->dig__DOT__bus_ack),8);
	vcdp->chgBit  (c+219,(vlTOPp->dig__DOT__hub___DOT__mem_w));
	vcdp->chgBit  (c+220,((1U & (IData)(vlTOPp->dig__DOT__bus_ack))));
	vcdp->chgBit  (c+221,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 1U))));
	vcdp->chgBit  (c+222,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 2U))));
	vcdp->chgBit  (c+223,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 3U))));
	vcdp->chgBit  (c+224,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 4U))));
	vcdp->chgBit  (c+225,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 5U))));
	vcdp->chgBit  (c+226,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 6U))));
	vcdp->chgBit  (c+227,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 7U))));
    }
}

void Vdig::traceChgThis__62(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+228,((1U & ((0U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__63(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+229,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cond) 
			       & ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 0x1cU)))
				   ? (~ (IData)(vlTOPp->dig__DOT__bus_ack))
				   : ((0x1eU == (0x1fU 
						 & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						    >> 0x1bU)))
				       ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
				       : ((0x3eU == 
					   (0x3fU & 
					    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					     >> 0x1aU)))
					   ? (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match))
					   : ((0x3fU 
					       == (0x3fU 
						   & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1aU))) 
					      & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vdig::traceChgThis__64(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+230,((1U & ((0U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__65(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+231,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vdig::traceChgThis__66(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+232,((1U & ((0U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__67(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+233,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vdig::traceChgThis__68(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+234,((1U & ((0U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__69(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+235,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vdig::traceChgThis__70(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+236,((1U & ((0U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__71(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+237,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vdig::traceChgThis__72(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+238,((1U & ((0U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__73(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+239,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vdig::traceChgThis__74(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+240,((1U & ((0U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__75(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+241,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vdig::traceChgThis__76(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+242,((1U & ((0U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__77(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+243,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cond) 
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
				        : ((0x3fU == 
					    (0x3fU 
					     & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						>> 0x1aU))) 
					   & (~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc)))))))));
    }
}

void Vdig::traceChgThis__78(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+244,(((IData)(vlTOPp->dig__DOT__bus_sel) 
			       & ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 0x1cU))) 
				  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m) 
				     >> 4U)))));
	vcdp->chgBit  (c+245,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     & (~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					   >> 0x17U))))));
	vcdp->chgBus  (c+246,((3U & ((1U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__79(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+247,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 1U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+248,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 1U) & (~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+249,((3U & ((2U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__80(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+250,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 2U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+251,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 2U) & (~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+252,((3U & ((4U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__81(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+253,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 3U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+254,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 3U) & (~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+255,((3U & ((8U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__82(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+256,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 4U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+257,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 4U) & (~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+258,((3U & ((0x10U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__83(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+259,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 5U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+260,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 5U) & (~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+261,((3U & ((0x20U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__84(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+262,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 6U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+263,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 6U) & (~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+264,((3U & ((0x40U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__85(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+265,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 7U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+266,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 7U) & (~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+267,((3U & ((0x80U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__86(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+268,(vlTOPp->dig__DOT__hub___DOT__mem_wb),4);
	vcdp->chgBus  (c+269,(vlTOPp->dig__DOT__hub___DOT__mem_d),32);
	vcdp->chgBus  (c+270,(vlTOPp->dig__DOT__hub___DOT__ramq),32);
    }
}

void Vdig::traceChgThis__87(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+271,((1U & ((0U == (7U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__88(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+272,((1U & ((0U == (7U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__89(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+273,((1U & ((0U == (7U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__90(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+274,((1U & ((0U == (7U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__91(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+275,((1U & ((0U == (7U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__92(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+276,((1U & ((0U == (7U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__93(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+277,((1U & ((0U == (7U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__94(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+278,((1U & ((0U == (7U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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
					      (7U & 
					       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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
    }
}

void Vdig::traceChgThis__95(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+279,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+280,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+281,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+282,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+283,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+284,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__96(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+285,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+286,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+287,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+288,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+289,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+290,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__97(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+291,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+292,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+293,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+294,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+295,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+296,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__98(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+297,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+298,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+299,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+300,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+301,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+302,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__99(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+303,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+304,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+305,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+306,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+307,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+308,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__100(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+309,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+310,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+311,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+312,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+313,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+314,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__101(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+315,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+316,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+317,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+318,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+319,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+320,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__102(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+321,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+322,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+323,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+324,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+325,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+326,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__103(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+327,(vlTOPp->dig__DOT__bus_r),8);
	vcdp->chgBit  (c+328,((0U != (IData)(vlTOPp->dig__DOT__bus_r))));
    }
}

void Vdig::traceChgThis__104(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+329,(vlTOPp->dig__DOT__hub___DOT__sys));
	vcdp->chgBus  (c+330,(vlTOPp->dig__DOT__hub___DOT__enc),8);
	vcdp->chgBit  (c+331,((0xffU == (IData)(vlTOPp->dig__DOT__hub___DOT__enc))));
	vcdp->chgBus  (c+332,(((0xfU == (0xfU & (IData)(vlTOPp->dig__DOT__hub___DOT__enc)))
			        ? ((3U == (3U & ((IData)(vlTOPp->dig__DOT__hub___DOT__enc) 
						 >> 4U)))
				    ? ((0x40U & (IData)(vlTOPp->dig__DOT__hub___DOT__enc))
				        ? 7U : 6U) : 
				   ((0x10U & (IData)(vlTOPp->dig__DOT__hub___DOT__enc))
				     ? 5U : 4U)) : 
			       ((3U == (3U & (IData)(vlTOPp->dig__DOT__hub___DOT__enc)))
				 ? ((4U & (IData)(vlTOPp->dig__DOT__hub___DOT__enc))
				     ? 3U : 2U) : (
						   (1U 
						    & (IData)(vlTOPp->dig__DOT__hub___DOT__enc))
						    ? 1U
						    : 0U)))),3);
	vcdp->chgBus  (c+333,(vlTOPp->dig__DOT__hub___DOT__num),3);
	vcdp->chgBus  (c+334,((0xffU & ((IData)(1U) 
					<< (IData)(vlTOPp->dig__DOT__hub___DOT__num)))),8);
	vcdp->chgBit  (c+335,(vlTOPp->dig__DOT__hub___DOT__cog_start));
    }
}

void Vdig::traceChgThis__105(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+336,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+337,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+338,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+339,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__106(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+340,(vlTOPp->dig__DOT__pll),8);
    }
}

void Vdig::traceChgThis__107(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+341,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+342,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+343,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+344,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__108(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+345,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+346,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+347,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+348,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__109(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+349,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+350,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+351,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+352,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__110(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+353,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+354,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+355,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+356,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__111(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+357,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+358,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+359,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+360,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__112(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+361,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+362,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+363,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+364,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__113(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+365,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+366,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+367,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+368,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__114(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+369,(vlTOPp->dig__DOT__ptr_w),8);
	vcdp->chgBit  (c+370,((1U & (IData)(vlTOPp->dig__DOT__ptr_w))));
	vcdp->chgBit  (c+371,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				     >> 1U))));
	vcdp->chgBit  (c+372,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				     >> 2U))));
	vcdp->chgBit  (c+373,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				     >> 3U))));
	vcdp->chgBit  (c+374,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				     >> 4U))));
	vcdp->chgBit  (c+375,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				     >> 5U))));
	vcdp->chgBit  (c+376,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				     >> 6U))));
	vcdp->chgBit  (c+377,((1U & ((IData)(vlTOPp->dig__DOT__ptr_w) 
				     >> 7U))));
    }
}

void Vdig::traceChgThis__115(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+378,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__116(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+379,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__117(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+380,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__118(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+381,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__119(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+382,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__120(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+383,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__121(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+384,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__122(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+385,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__123(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+386,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+387,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+388,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+389,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+390,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+391,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+392,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
	vcdp->chgBus  (c+393,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr),32);
    }
}

void Vdig::traceChgThis__124(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+394,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))));
    }
}

void Vdig::traceChgThis__125(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+395,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vdig::traceChgThis__126(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+396,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))));
    }
}

void Vdig::traceChgThis__127(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+397,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vdig::traceChgThis__128(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+398,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))));
    }
}

void Vdig::traceChgThis__129(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+399,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vdig::traceChgThis__130(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+400,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))));
    }
}

void Vdig::traceChgThis__131(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+401,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vdig::traceChgThis__132(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+402,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))));
    }
}

void Vdig::traceChgThis__133(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+403,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vdig::traceChgThis__134(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+404,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))));
    }
}

void Vdig::traceChgThis__135(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+405,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vdig::traceChgThis__136(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+406,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))));
    }
}

void Vdig::traceChgThis__137(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+407,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vdig::traceChgThis__138(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+408,((1U & ((1U & ((~ (IData)(
						       (3U 
							== 
							(3U 
							 & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
							    >> 0x1bU))))) 
					    & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					       >> 0x1aU)))
				      ? vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr
				      : vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))));
    }
}

void Vdig::traceChgThis__139(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+409,((1U & ((0x38U == (0x3fU 
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
    }
}

void Vdig::traceChgThis__140(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+410,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+411,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+412,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vdig::traceChgThis__141(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+413,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+414,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+415,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+416,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+417,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+418,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+419,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+420,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+421,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vdig::traceChgThis__142(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+422,((1U & ((4U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+423,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m) 
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
    }
}

void Vdig::traceChgThis__143(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+424,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+425,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+426,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vdig::traceChgThis__144(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+427,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+428,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+429,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+430,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+431,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+432,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+433,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+434,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+435,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vdig::traceChgThis__145(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+436,((1U & ((4U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+437,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m) 
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
    }
}

void Vdig::traceChgThis__146(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+438,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+439,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+440,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vdig::traceChgThis__147(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+441,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+442,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+443,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+444,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+445,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+446,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+447,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+448,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+449,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vdig::traceChgThis__148(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+450,((1U & ((4U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+451,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m) 
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
    }
}

void Vdig::traceChgThis__149(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+452,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+453,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+454,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vdig::traceChgThis__150(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+455,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+456,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+457,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+458,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+459,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+460,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+461,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+462,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+463,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vdig::traceChgThis__151(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+464,((1U & ((4U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+465,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m) 
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
    }
}

void Vdig::traceChgThis__152(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+466,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+467,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+468,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vdig::traceChgThis__153(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+469,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+470,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+471,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+472,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+473,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+474,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+475,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+476,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+477,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vdig::traceChgThis__154(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+478,((1U & ((4U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+479,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m) 
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
    }
}

void Vdig::traceChgThis__155(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+480,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+481,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+482,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vdig::traceChgThis__156(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+483,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+484,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+485,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+486,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+487,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+488,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+489,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+490,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+491,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vdig::traceChgThis__157(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+492,((1U & ((4U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+493,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m) 
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
    }
}

void Vdig::traceChgThis__158(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+494,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+495,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+496,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vdig::traceChgThis__159(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+497,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+498,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+499,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+500,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+501,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+502,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+503,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+504,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+505,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vdig::traceChgThis__160(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+506,((1U & ((4U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+507,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m) 
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
    }
}

void Vdig::traceChgThis__161(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+508,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i),32);
	vcdp->chgBus  (c+509,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
				       >> 0x12U))),4);
	vcdp->chgBus  (c+510,((0x3fU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					>> 0x1aU))),6);
    }
}

void Vdig::traceChgThis__162(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+511,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (4U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+512,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (6U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+513,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (8U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+514,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (9U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						 >> 9U))))));
	vcdp->chgBit  (c+515,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (0xaU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+516,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (0xbU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+517,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (0xeU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBit  (c+518,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio) 
			       & (0xfU == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 9U))))));
	vcdp->chgBus  (c+519,(((1U & ((~ (IData)((3U 
						  == 
						  (3U 
						   & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						      >> 0x1bU))))) 
				      & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					 >> 0x1aU)))
			        ? ((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
						   << 0x1fU)) 
				   | ((0x40000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						   >> 1U)) 
					  << 0x1eU)) 
				      | ((0x20000000U 
					  & ((IData)(
						     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
    }
}

void Vdig::traceChgThis__163(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+520,((1U & ((4U == (0xfU & 
					     (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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
	vcdp->chgBit  (c+521,((1U & (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m) 
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
    }
}

void Vdig::traceChgThis__164(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+522,(vlTOPp->dig__DOT__bus_a),128);
	vcdp->chgBus  (c+526,((0xffffU & ((((((((vlTOPp->dig__DOT__bus_a[3U] 
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
    }
}

void Vdig::traceChgThis__165(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+527,(vlTOPp->dig__DOT__bus_d),256);
	vcdp->chgBus  (c+535,((((((((vlTOPp->dig__DOT__bus_d[7U] 
				     | vlTOPp->dig__DOT__bus_d[6U]) 
				    | vlTOPp->dig__DOT__bus_d[5U]) 
				   | vlTOPp->dig__DOT__bus_d[4U]) 
				  | vlTOPp->dig__DOT__bus_d[3U]) 
				 | vlTOPp->dig__DOT__bus_d[2U]) 
				| vlTOPp->dig__DOT__bus_d[1U]) 
			       | vlTOPp->dig__DOT__bus_d[0U])),32);
	vcdp->chgBit  (c+536,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+537,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+538,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+539,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+540,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+541,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+542,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+543,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT____Vcellinp__cog___ena));
    }
}

void Vdig::traceChgThis__166(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+544,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__167(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+545,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__168(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+546,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__169(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+547,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__170(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+548,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__171(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+549,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__172(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+550,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__173(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+551,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__174(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+552,(vlTOPp->dig__DOT__bus_e),8);
	vcdp->chgBus  (c+553,(vlTOPp->dig__DOT__bus_w),8);
	vcdp->chgBus  (c+554,(vlTOPp->dig__DOT__bus_s),16);
	vcdp->chgBit  (c+555,((0U != (IData)(vlTOPp->dig__DOT__bus_e))));
	vcdp->chgBit  (c+556,((0U != (IData)(vlTOPp->dig__DOT__bus_w))));
	vcdp->chgBus  (c+557,((3U & (((((((((IData)(vlTOPp->dig__DOT__bus_s) 
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
					  >> 4U)) | 
				      ((IData)(vlTOPp->dig__DOT__bus_s) 
				       >> 2U)) | (IData)(vlTOPp->dig__DOT__bus_s)))),2);
    }
}

void Vdig::traceChgThis__175(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+558,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+559,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+560,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+561,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+562,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+563,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+564,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+566,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+567,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+568,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+569,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+570,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+571,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__176(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+572,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+573,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+574,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+575,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+576,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+577,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+578,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+580,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+581,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+582,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+583,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+584,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+585,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__177(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+586,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+587,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+588,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+589,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+590,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+591,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+592,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+594,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+595,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+596,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+597,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+598,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+599,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__178(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+600,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+601,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+602,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+603,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+604,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+605,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+606,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+608,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+609,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+610,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+611,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+612,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+613,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__179(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+614,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+615,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+616,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+617,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+618,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+619,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+620,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+622,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+623,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+624,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+625,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+626,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+627,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__180(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+628,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+629,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+630,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+631,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+632,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+633,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+634,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+636,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+637,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+638,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+639,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+640,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+641,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__181(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+642,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+643,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+644,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+645,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+646,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+647,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+648,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+650,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+651,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+652,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+653,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+654,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+655,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__182(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+656,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+657,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+658,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+659,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+660,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+661,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+662,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot),63);
	vcdp->chgBus  (c+664,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
					       << 0x1fU)) 
			       | ((0x40000000U & ((IData)(
							  (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
							   >> 1U)) 
						  << 0x1eU)) 
				  | ((0x20000000U & 
				      ((IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
						>> 2U)) 
				       << 0x1dU)) | 
				     ((0x10000000U 
				       & ((IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot 
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
	vcdp->chgBus  (c+665,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+666,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+667,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+668,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+669,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__183(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+670,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+671,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+672,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+673,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+675,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+676,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+677,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+678,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__184(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+679,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+680,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+681,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+682,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+684,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+685,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+686,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+687,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__185(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+688,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+689,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+690,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+691,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+693,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+694,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+695,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+696,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__186(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+697,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+698,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+699,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+700,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+702,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+703,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+704,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+705,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__187(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+706,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+707,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+708,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+709,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+711,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+712,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+713,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+714,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__188(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+715,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+716,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+717,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+718,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+720,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+721,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+722,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+723,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__189(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+724,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+725,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+726,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+727,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+729,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+730,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+731,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+732,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__190(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+733,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+734,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+735,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+736,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+738,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+739,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+740,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+741,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__191(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+742,(vlTOPp->dig__DOT__cog_ena),8);
	vcdp->chgBit  (c+743,(vlTOPp->dig__DOT__hub___DOT__ec));
	vcdp->chgBit  (c+744,(vlTOPp->dig__DOT__hub___DOT__ed));
	vcdp->chgBus  (c+745,(vlTOPp->dig__DOT__hub___DOT__cog_e),8);
	vcdp->chgBus  (c+746,(vlTOPp->dig__DOT__hub___DOT__lock_e),8);
	vcdp->chgBus  (c+747,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+748,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+749,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+750,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+751,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+752,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+753,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+754,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ptr),28);
    }
}

void Vdig::traceChgThis__192(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+755,((0xffffU & ((1U & (IData)(vlTOPp->dig__DOT__bus_sel))
					   ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run)
					       ? vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vdig::traceChgThis__193(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+756,((0xffffU & ((2U & (IData)(vlTOPp->dig__DOT__bus_sel))
					   ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run)
					       ? vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vdig::traceChgThis__194(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+757,((0xffffU & ((4U & (IData)(vlTOPp->dig__DOT__bus_sel))
					   ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run)
					       ? vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vdig::traceChgThis__195(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+758,((0xffffU & ((8U & (IData)(vlTOPp->dig__DOT__bus_sel))
					   ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run)
					       ? vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vdig::traceChgThis__196(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+759,((0xffffU & ((0x10U & (IData)(vlTOPp->dig__DOT__bus_sel))
					   ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run)
					       ? vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vdig::traceChgThis__197(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+760,((0xffffU & ((0x20U & (IData)(vlTOPp->dig__DOT__bus_sel))
					   ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run)
					       ? vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vdig::traceChgThis__198(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+761,((0xffffU & ((0x40U & (IData)(vlTOPp->dig__DOT__bus_sel))
					   ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run)
					       ? vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vdig::traceChgThis__199(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+762,((0xffffU & ((0x80U & (IData)(vlTOPp->dig__DOT__bus_sel))
					   ? ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run)
					       ? vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s
					       : ((0xfffcU 
						   & ((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ptr 
						       + (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)) 
						      << 2U)) 
						  | (3U 
						     & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))
					   : 0U))),16);
    }
}

void Vdig::traceChgThis__200(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+763,(vlTOPp->dig__DOT__bus_q),32);
	vcdp->chgBit  (c+764,(vlTOPp->dig__DOT__hub___DOT__rc));
	vcdp->chgBit  (c+765,(vlTOPp->dig__DOT__hub___DOT__wc));
	vcdp->chgBus  (c+766,(vlTOPp->dig__DOT__hub___DOT__sc),2);
	vcdp->chgBit  (c+767,(vlTOPp->dig__DOT__hub___DOT__rd));
	vcdp->chgBus  (c+768,(vlTOPp->dig__DOT__hub___DOT__sd),2);
	vcdp->chgBus  (c+769,(vlTOPp->dig__DOT__hub___DOT__ad),2);
	vcdp->chgBus  (c+770,(vlTOPp->dig__DOT__hub___DOT__sys_q),3);
	vcdp->chgBus  (c+771,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q3),8);
	vcdp->chgBus  (c+772,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q2),8);
	vcdp->chgBus  (c+773,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q1),8);
	vcdp->chgBus  (c+774,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q0),8);
	vcdp->chgBus  (c+775,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__rom_q),32);
	vcdp->chgBus  (c+776,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__mem),2);
	vcdp->chgBus  (c+777,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+778,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+780,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+782,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+783,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+784,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+785,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+786,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+787,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+789,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+791,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+792,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+793,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+794,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+795,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+796,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+798,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+800,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+801,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+802,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+803,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+804,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+805,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+807,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+809,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+810,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+811,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+812,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+813,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+814,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+816,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+818,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+819,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+820,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+821,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+822,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+823,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+825,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+827,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+828,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+829,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+830,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+831,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+832,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+834,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+836,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+837,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+838,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+839,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+840,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+841,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+843,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+845,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+846,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+847,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+848,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
    }
}

void Vdig::traceChgThis__201(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+849,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+850,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+851,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+852,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+853,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+854,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__202(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+855,(((IData)(vlTOPp->dig__DOT__bus_sel) 
			       & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__203(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp228,127,0,4);
    // Body
    {
	__Vtemp228[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s));
	__Vtemp228[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)));
	__Vtemp228[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))))));
	__Vtemp228[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+856,(__Vtemp228),128);
	vcdp->chgBus  (c+860,((((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__204(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+861,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+862,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+863,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+864,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+865,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+866,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__205(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+867,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 1U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__206(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp230,127,0,4);
    // Body
    {
	__Vtemp230[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s));
	__Vtemp230[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)));
	__Vtemp230[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))))));
	__Vtemp230[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+868,(__Vtemp230),128);
	vcdp->chgBus  (c+872,((((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__207(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+873,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+874,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+875,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+876,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+877,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+878,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__208(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+879,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 2U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__209(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp232,127,0,4);
    // Body
    {
	__Vtemp232[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s));
	__Vtemp232[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)));
	__Vtemp232[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))))));
	__Vtemp232[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+880,(__Vtemp232),128);
	vcdp->chgBus  (c+884,((((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__210(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+885,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+886,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+887,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+888,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+889,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+890,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__211(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+891,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 3U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__212(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp234,127,0,4);
    // Body
    {
	__Vtemp234[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s));
	__Vtemp234[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)));
	__Vtemp234[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))))));
	__Vtemp234[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+892,(__Vtemp234),128);
	vcdp->chgBus  (c+896,((((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__213(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+897,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+898,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+899,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+900,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+901,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+902,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__214(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+903,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 4U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__215(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp236,127,0,4);
    // Body
    {
	__Vtemp236[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s));
	__Vtemp236[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)));
	__Vtemp236[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))))));
	__Vtemp236[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+904,(__Vtemp236),128);
	vcdp->chgBus  (c+908,((((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__216(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+909,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+910,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+911,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+912,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+913,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+914,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__217(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+915,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 5U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__218(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp238,127,0,4);
    // Body
    {
	__Vtemp238[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s));
	__Vtemp238[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)));
	__Vtemp238[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))))));
	__Vtemp238[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+916,(__Vtemp238),128);
	vcdp->chgBus  (c+920,((((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__219(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+921,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+922,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+923,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+924,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+925,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+926,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__220(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+927,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 6U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__221(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp240,127,0,4);
    // Body
    {
	__Vtemp240[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s));
	__Vtemp240[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)));
	__Vtemp240[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))))));
	__Vtemp240[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+928,(__Vtemp240),128);
	vcdp->chgBus  (c+932,((((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__222(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+933,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+934,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+935,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+936,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+937,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+938,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__223(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+939,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 7U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__224(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp242,127,0,4);
    // Body
    {
	__Vtemp242[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s));
	__Vtemp242[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)));
	__Vtemp242[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))))));
	__Vtemp242[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+940,(__Vtemp242),128);
	vcdp->chgBus  (c+944,((((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__225(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+945,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+947,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+948,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+950,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+951,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+953,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+954,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+956,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+957,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+959,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+960,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+962,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+963,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+965,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+966,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+968,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+969,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+971,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+972,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+974,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+975,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+977,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+978,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+980,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+981,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+983,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+984,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+986,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+987,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+989,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+990,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+992,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
    }
}

void Vdig::traceChgThis__226(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+993,(vlTOPp->dig__DOT__bus_sel),8);
	vcdp->chgBit  (c+994,((1U & (IData)(vlTOPp->dig__DOT__bus_sel))));
	vcdp->chgBit  (c+995,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 1U))));
	vcdp->chgBit  (c+996,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 2U))));
	vcdp->chgBit  (c+997,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 3U))));
	vcdp->chgBit  (c+998,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 4U))));
	vcdp->chgBit  (c+999,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 5U))));
	vcdp->chgBit  (c+1000,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 6U))));
	vcdp->chgBit  (c+1001,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 7U))));
    }
}

void Vdig::traceChgThis__227(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1002,(((1U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1003,(((2U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1004,(((4U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1005,(((8U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1006,(((0x10U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1007,(((0x20U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1008,(((0x40U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d
				 : 0U)),32);
	vcdp->chgBus  (c+1009,(((0x80U & (IData)(vlTOPp->dig__DOT__bus_sel))
				 ? vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d
				 : 0U)),32);
    }
}

void Vdig::traceChgThis__228(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1010,(vlTOPp->dig__DOT__cnt),32);
	vcdp->chgBit  (c+1011,(vlTOPp->dig__DOT__hub___DOT__sys_c));
	vcdp->chgBus  (c+1012,((0xfffffffU & (vlTOPp->dig__DOT__hub___DOT__dc 
					      >> 4U))),28);
	vcdp->chgBus  (c+1013,(vlTOPp->dig__DOT__hub___DOT__ac),16);
	vcdp->chgBus  (c+1014,(vlTOPp->dig__DOT__hub___DOT__dc),32);
	vcdp->chgBus  (c+1015,(vlTOPp->dig__DOT__hub___DOT__lock_state),8);
	vcdp->chgBit  (c+1016,((1U & ((IData)(vlTOPp->dig__DOT__hub___DOT__lock_state) 
				      >> (7U & vlTOPp->dig__DOT__hub___DOT__dc)))));
	vcdp->chgBus  (c+1017,((0x3fffU & ((IData)(vlTOPp->dig__DOT__hub___DOT__ac) 
					   >> 2U))),14);
	vcdp->chgBit  (c+1018,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1019,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1020,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1021,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1022,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1023,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1024,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1025,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1026,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1027,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1028,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1029,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1030,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1031,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1032,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1033,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1034,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1035,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1036,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1037,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1038,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1039,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1040,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1041,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
    }
}

void Vdig::traceChgThis__229(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1042,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1043,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1044,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1045,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__230(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1046,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1047,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1048,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1049,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__231(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1050,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1051,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1052,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1053,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__232(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1054,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1055,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1056,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1057,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__233(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1058,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1059,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1060,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1061,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__234(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1062,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1063,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1064,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1065,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__235(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1066,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1067,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1068,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1069,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__236(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1070,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1071,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1072,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1073,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__237(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1074,(vlTOPp->dig__DOT__ena_bus));
    }
}

void Vdig::traceChgThis__238(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1075,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__239(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1076,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1077,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1078,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1079,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1080,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1081,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1082,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1083,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1084,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1085,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1086,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__240(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1087,((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__241(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1088,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__242(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1089,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1090,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1091,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1092,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1093,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1094,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1095,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1096,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1097,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1098,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1099,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__243(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1100,((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__244(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1101,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__245(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1102,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1103,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1104,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1105,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1106,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1107,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1108,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1109,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1110,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1111,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1112,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__246(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1113,((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__247(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1114,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__248(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1115,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1116,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1117,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1118,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1119,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1120,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1121,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1122,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1123,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1124,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1125,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__249(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1126,((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__250(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1127,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__251(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1128,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1129,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1130,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1131,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1132,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1133,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1134,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1135,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1136,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1137,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1138,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__252(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1139,((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__253(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1140,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__254(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1141,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1142,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1143,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1144,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1145,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1146,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1147,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1148,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1149,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1150,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1151,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__255(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1152,((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__256(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1153,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__257(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1154,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1155,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1156,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1157,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1158,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1159,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1160,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1161,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1162,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1163,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1164,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__258(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1165,((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__259(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1166,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__260(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1167,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1168,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1169,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1170,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1171,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1172,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1173,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1174,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1175,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1176,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1177,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__261(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1178,((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__262(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
	vcdp->chgBus  (c+1179,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1180,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1181,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1182,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1183,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+1184,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+1696,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+1697,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp244[0U] = (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s));
	__Vtemp244[1U] = (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s);
	__Vtemp244[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))));
	__Vtemp244[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+1698,(__Vtemp244),128);
	vcdp->chgBus  (c+1702,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1703,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1704,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1705,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1706,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+1707,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+2219,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+2220,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp246[0U] = (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s));
	__Vtemp246[1U] = (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s);
	__Vtemp246[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))));
	__Vtemp246[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+2221,(__Vtemp246),128);
	vcdp->chgBus  (c+2225,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+2226,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+2227,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+2228,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+2229,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+2230,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+2742,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+2743,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp248[0U] = (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s));
	__Vtemp248[1U] = (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s);
	__Vtemp248[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))));
	__Vtemp248[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+2744,(__Vtemp248),128);
	vcdp->chgBus  (c+2748,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+2749,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+2750,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+2751,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+2752,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+2753,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+3265,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+3266,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp250[0U] = (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s));
	__Vtemp250[1U] = (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s);
	__Vtemp250[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))));
	__Vtemp250[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+3267,(__Vtemp250),128);
	vcdp->chgBus  (c+3271,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+3272,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+3273,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+3274,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+3275,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+3276,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+3788,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+3789,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp252[0U] = (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s));
	__Vtemp252[1U] = (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s);
	__Vtemp252[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))));
	__Vtemp252[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+3790,(__Vtemp252),128);
	vcdp->chgBus  (c+3794,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+3795,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+3796,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+3797,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+3798,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+3799,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+4311,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+4312,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp254[0U] = (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s));
	__Vtemp254[1U] = (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s);
	__Vtemp254[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))));
	__Vtemp254[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+4313,(__Vtemp254),128);
	vcdp->chgBus  (c+4317,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+4318,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+4319,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+4320,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+4321,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+4322,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+4834,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+4835,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp256[0U] = (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s));
	__Vtemp256[1U] = (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s);
	__Vtemp256[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))));
	__Vtemp256[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+4836,(__Vtemp256),128);
	vcdp->chgBus  (c+4840,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+4841,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+4842,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+4843,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+4844,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgArray(c+4845,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ram___DOT__r),16384);
	vcdp->chgBus  (c+5357,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+5358,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp258[0U] = (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s));
	__Vtemp258[1U] = (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s);
	__Vtemp258[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))));
	__Vtemp258[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+5359,(__Vtemp258),128);
    }
}

void Vdig::traceChgThis__263(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5363,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5364,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5365,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__264(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5366,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5367,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5368,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__265(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5369,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5370,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5371,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__266(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5372,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5373,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5374,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__267(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5375,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5376,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5377,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__268(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5378,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5379,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5380,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__269(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5381,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5382,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5383,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__270(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5384,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+5385,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+5386,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__271(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5387,(vlTOPp->nres));
	vcdp->chgBus  (c+5388,(vlTOPp->cfg),8);
	vcdp->chgBit  (c+5389,(vlTOPp->clk_cog));
	vcdp->chgBit  (c+5390,(vlTOPp->clk_pll));
	vcdp->chgBus  (c+5391,(vlTOPp->pin_in),32);
	vcdp->chgBus  (c+5392,(vlTOPp->pin_out),32);
	vcdp->chgBus  (c+5393,(vlTOPp->pin_dir),32);
	vcdp->chgBus  (c+5394,(vlTOPp->cog_led),8);
    }
}
