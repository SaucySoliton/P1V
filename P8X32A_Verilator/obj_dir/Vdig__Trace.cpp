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
						   >> 2U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 4U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x17U)) 
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
						   >> 2U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 5U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x18U)) 
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
						   >> 2U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 6U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x19U)) 
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
						   >> 2U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 7U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x1aU)) 
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
						   >> 2U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 8U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x1bU)) 
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
						   >> 2U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 9U)) | (vlTOPp->__Vm_traceActivity[0U] 
						 >> 0x1cU)) 
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
						   >> 2U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xaU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0x1dU)) 
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
						   >> 2U)) 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xbU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0x1eU)) 
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
				  >> 2U))))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x17U)) 
			       | vlTOPp->__Vm_traceActivity[1U])))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x18U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x19U)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x1aU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x1bU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x1cU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x1dU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 2U)) | (vlTOPp->__Vm_traceActivity[0U] 
					       >> 0x1eU)) 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 2U)) | vlTOPp->__Vm_traceActivity[1U])))) {
	    vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 1U))))) {
	    vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 2U))))) {
	    vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 3U))))) {
	    vlTOPp->traceChgThis__31(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 4U))))) {
	    vlTOPp->traceChgThis__32(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 5U))))) {
	    vlTOPp->traceChgThis__33(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 6U))))) {
	    vlTOPp->traceChgThis__34(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 7U))))) {
	    vlTOPp->traceChgThis__35(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__36(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1aU))))) {
	    vlTOPp->traceChgThis__37(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1bU))))) {
	    vlTOPp->traceChgThis__38(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1cU))))) {
	    vlTOPp->traceChgThis__39(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1dU))))) {
	    vlTOPp->traceChgThis__40(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1eU))))) {
	    vlTOPp->traceChgThis__41(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1fU))))) {
	    vlTOPp->traceChgThis__42(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__43(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[2U] 
					      >> 1U))))) {
	    vlTOPp->traceChgThis__44(vlSymsp, vcdp, code);
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
	    vlTOPp->traceChgThis__45(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__46(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1aU))))) {
	    vlTOPp->traceChgThis__47(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 4U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1aU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__48(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__49(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1bU))))) {
	    vlTOPp->traceChgThis__50(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 5U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1bU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__51(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__52(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1cU))))) {
	    vlTOPp->traceChgThis__53(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 6U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1cU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__54(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__55(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1dU))))) {
	    vlTOPp->traceChgThis__56(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 7U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1dU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__57(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 8U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__58(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 8U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1eU))))) {
	    vlTOPp->traceChgThis__59(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 8U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1eU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__60(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 9U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x19U))))) {
	    vlTOPp->traceChgThis__61(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 9U)) | (vlTOPp->__Vm_traceActivity[1U] 
					      >> 0x1fU))))) {
	    vlTOPp->traceChgThis__62(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 9U)) | (vlTOPp->__Vm_traceActivity[1U] 
					       >> 0x1fU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__63(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xaU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__64(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xaU)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__65(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0xaU)) | vlTOPp->__Vm_traceActivity[2U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__66(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xbU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__67(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xbU)) | (vlTOPp->__Vm_traceActivity[2U] 
						>> 1U))))) {
	    vlTOPp->traceChgThis__68(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity[0U] 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0xbU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 1U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__69(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0xdU))))) {
	    vlTOPp->traceChgThis__70(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1aU))))) {
	    vlTOPp->traceChgThis__71(vlSymsp, vcdp, code);
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
				  >> 0x15U))))) {
	    vlTOPp->traceChgThis__72(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1bU))))) {
	    vlTOPp->traceChgThis__73(vlSymsp, vcdp, code);
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
				  >> 0x17U))))) {
	    vlTOPp->traceChgThis__74(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1cU))))) {
	    vlTOPp->traceChgThis__75(vlSymsp, vcdp, code);
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
				  >> 0x19U))))) {
	    vlTOPp->traceChgThis__76(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1dU))))) {
	    vlTOPp->traceChgThis__77(vlSymsp, vcdp, code);
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
				  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__78(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1eU))))) {
	    vlTOPp->traceChgThis__79(vlSymsp, vcdp, code);
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
				  >> 0x1dU))))) {
	    vlTOPp->traceChgThis__80(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1fU))))) {
	    vlTOPp->traceChgThis__81(vlSymsp, vcdp, code);
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
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__82(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__83(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xdU)) | (
						   vlTOPp->__Vm_traceActivity[0U] 
						   >> 0xeU)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x19U)) | vlTOPp->__Vm_traceActivity[2U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__84(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[0U] 
				     >> 0xdU)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0xeU)) 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 1U))))) {
	    vlTOPp->traceChgThis__85(vlSymsp, vcdp, code);
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
				  >> 3U))))) {
	    vlTOPp->traceChgThis__86(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0xeU))))) {
	    vlTOPp->traceChgThis__87(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x15U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__88(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x17U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__89(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x19U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__90(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1bU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__91(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1dU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__92(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[1U] 
				    >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1fU)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__93(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | vlTOPp->__Vm_traceActivity[2U]) 
				| (vlTOPp->__Vm_traceActivity[3U] 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xbU))))) {
	    vlTOPp->traceChgThis__94(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((vlTOPp->__Vm_traceActivity[0U] 
				   | (vlTOPp->__Vm_traceActivity[0U] 
				      >> 0xeU)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x19U)) 
				 | (vlTOPp->__Vm_traceActivity[2U] 
				    >> 1U)) | (vlTOPp->__Vm_traceActivity[3U] 
					       >> 3U)) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__95(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[0U] 
					 >> 0xfU)) 
				     | (vlTOPp->__Vm_traceActivity[0U] 
					>> 0x10U)) 
				    | (vlTOPp->__Vm_traceActivity[0U] 
				       >> 0x11U)) | 
				   (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0x12U)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0x13U)) 
				 | (vlTOPp->__Vm_traceActivity[0U] 
				    >> 0x14U)) | (vlTOPp->__Vm_traceActivity[0U] 
						  >> 0x15U)) 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0x16U))))) {
	    vlTOPp->traceChgThis__96(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x17U)) | vlTOPp->__Vm_traceActivity[1U])))) {
	    vlTOPp->traceChgThis__97(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x18U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 1U))))) {
	    vlTOPp->traceChgThis__98(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 2U))))) {
	    vlTOPp->traceChgThis__99(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 3U))))) {
	    vlTOPp->traceChgThis__100(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 4U))))) {
	    vlTOPp->traceChgThis__101(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 5U))))) {
	    vlTOPp->traceChgThis__102(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 6U))))) {
	    vlTOPp->traceChgThis__103(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 7U))))) {
	    vlTOPp->traceChgThis__104(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[0U] 
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__105(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | vlTOPp->__Vm_traceActivity[1U])))) {
	    vlTOPp->traceChgThis__106(vlSymsp, vcdp, code);
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
	    vlTOPp->traceChgThis__107(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__108(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__109(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__110(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__111(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__112(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__113(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__114(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 8U))))) {
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
				  >> 0x19U))))) {
	    vlTOPp->traceChgThis__124(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1aU))))) {
	    vlTOPp->traceChgThis__125(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1aU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x15U)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 5U))))) {
	    vlTOPp->traceChgThis__126(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1bU))))) {
	    vlTOPp->traceChgThis__127(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1bU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x17U)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 6U))))) {
	    vlTOPp->traceChgThis__128(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1cU))))) {
	    vlTOPp->traceChgThis__129(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1cU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 7U))))) {
	    vlTOPp->traceChgThis__130(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1dU))))) {
	    vlTOPp->traceChgThis__131(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1dU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 8U))))) {
	    vlTOPp->traceChgThis__132(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1eU))))) {
	    vlTOPp->traceChgThis__133(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1eU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 9U))))) {
	    vlTOPp->traceChgThis__134(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[1U] 
						 >> 0x1fU))))) {
	    vlTOPp->traceChgThis__135(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[1U] 
						   >> 0x1fU)) 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 0xaU))))) {
	    vlTOPp->traceChgThis__136(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__137(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | vlTOPp->__Vm_traceActivity[2U]) 
				| (vlTOPp->__Vm_traceActivity[3U] 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xbU))))) {
	    vlTOPp->traceChgThis__138(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x19U)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 1U))))) {
	    vlTOPp->traceChgThis__139(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  | (vlTOPp->__Vm_traceActivity[1U] 
				     >> 0x19U)) | (
						   vlTOPp->__Vm_traceActivity[2U] 
						   >> 1U)) 
				| (vlTOPp->__Vm_traceActivity[3U] 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xcU))))) {
	    vlTOPp->traceChgThis__140(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1aU))))) {
	    vlTOPp->traceChgThis__141(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x15U))))) {
	    vlTOPp->traceChgThis__142(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 5U))))) {
	    vlTOPp->traceChgThis__143(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__144(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x17U))))) {
	    vlTOPp->traceChgThis__145(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1bU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 6U))))) {
	    vlTOPp->traceChgThis__146(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1cU))))) {
	    vlTOPp->traceChgThis__147(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x19U))))) {
	    vlTOPp->traceChgThis__148(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1cU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 7U))))) {
	    vlTOPp->traceChgThis__149(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1dU))))) {
	    vlTOPp->traceChgThis__150(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x1bU))))) {
	    vlTOPp->traceChgThis__151(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1dU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 8U))))) {
	    vlTOPp->traceChgThis__152(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1eU))))) {
	    vlTOPp->traceChgThis__153(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x1dU))))) {
	    vlTOPp->traceChgThis__154(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1eU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 9U))))) {
	    vlTOPp->traceChgThis__155(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[1U] 
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__156(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[2U] 
						 >> 0x1fU))))) {
	    vlTOPp->traceChgThis__157(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[1U] 
				   >> 0x1fU)) | (vlTOPp->__Vm_traceActivity[3U] 
						 >> 0xaU))))) {
	    vlTOPp->traceChgThis__158(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__159(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| vlTOPp->__Vm_traceActivity[2U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__160(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| vlTOPp->__Vm_traceActivity[2U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__161(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__162(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 3U))))) {
	    vlTOPp->traceChgThis__163(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				| (vlTOPp->__Vm_traceActivity[2U] 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity[3U] 
					      >> 0xcU))))) {
	    vlTOPp->traceChgThis__164(vlSymsp, vcdp, code);
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
	    vlTOPp->traceChgThis__165(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__166(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__167(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__168(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xdU))))) {
	    vlTOPp->traceChgThis__169(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xeU))))) {
	    vlTOPp->traceChgThis__170(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0xfU))))) {
	    vlTOPp->traceChgThis__171(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x10U))))) {
	    vlTOPp->traceChgThis__172(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x11U))))) {
	    vlTOPp->traceChgThis__173(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x12U))))) {
	    vlTOPp->traceChgThis__174(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x13U))))) {
	    vlTOPp->traceChgThis__175(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((((((vlTOPp->__Vm_traceActivity[0U] 
				      | (vlTOPp->__Vm_traceActivity[2U] 
					 >> 0x14U)) 
				     | (vlTOPp->__Vm_traceActivity[2U] 
					>> 0x16U)) 
				    | (vlTOPp->__Vm_traceActivity[2U] 
				       >> 0x18U)) | 
				   (vlTOPp->__Vm_traceActivity[2U] 
				    >> 0x1aU)) | (vlTOPp->__Vm_traceActivity[2U] 
						  >> 0x1cU)) 
				 | (vlTOPp->__Vm_traceActivity[2U] 
				    >> 0x1eU)) | vlTOPp->__Vm_traceActivity[3U]) 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__176(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x15U))))) {
	    vlTOPp->traceChgThis__177(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x17U))))) {
	    vlTOPp->traceChgThis__178(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x19U))))) {
	    vlTOPp->traceChgThis__179(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1bU))))) {
	    vlTOPp->traceChgThis__180(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1dU))))) {
	    vlTOPp->traceChgThis__181(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[2U] 
				  >> 0x1fU))))) {
	    vlTOPp->traceChgThis__182(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__183(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__184(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__185(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__186(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__187(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 7U))))) {
	    vlTOPp->traceChgThis__188(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 8U))))) {
	    vlTOPp->traceChgThis__189(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 9U))))) {
	    vlTOPp->traceChgThis__190(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xaU))))) {
	    vlTOPp->traceChgThis__191(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xbU))))) {
	    vlTOPp->traceChgThis__192(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity[0U] 
			       | (vlTOPp->__Vm_traceActivity[3U] 
				  >> 0xcU))))) {
	    vlTOPp->traceChgThis__193(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__194(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__195(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 4U))))) {
	    vlTOPp->traceChgThis__196(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 4U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__197(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 5U))))) {
	    vlTOPp->traceChgThis__198(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 5U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__199(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 6U))))) {
	    vlTOPp->traceChgThis__200(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 6U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__201(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 7U))))) {
	    vlTOPp->traceChgThis__202(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 7U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__203(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 8U))))) {
	    vlTOPp->traceChgThis__204(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 8U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__205(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 9U))))) {
	    vlTOPp->traceChgThis__206(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 9U)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__207(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xaU))))) {
	    vlTOPp->traceChgThis__208(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xaU)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__209(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					  >> 0xbU))))) {
	    vlTOPp->traceChgThis__210(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity[0U] 
				  >> 3U) | (vlTOPp->__Vm_traceActivity[0U] 
					    >> 0xbU)) 
				| (vlTOPp->__Vm_traceActivity[0U] 
				   >> 0xdU)) | (vlTOPp->__Vm_traceActivity[1U] 
						>> 0x19U))))) {
	    vlTOPp->traceChgThis__211(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 3U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__212(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__213(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 4U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__214(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__215(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 5U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__216(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__217(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 6U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__218(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__219(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 7U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__220(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__221(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 8U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__222(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__223(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 9U) | (vlTOPp->__Vm_traceActivity[1U] 
					  >> 0x19U))))) {
	    vlTOPp->traceChgThis__224(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__225(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xaU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x19U))))) {
	    vlTOPp->traceChgThis__226(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__227(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[0U] 
				>> 0xbU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x19U))))) {
	    vlTOPp->traceChgThis__228(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x1000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__229(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__230(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__231(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__232(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x1000000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__233(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__234(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__235(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x8000000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__236(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10000000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__237(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20000000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__238(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40000000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__239(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80000000U & vlTOPp->__Vm_traceActivity[0U]))) {
	    vlTOPp->traceChgThis__240(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__241(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__242(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0xaU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x1aU))))) {
	    vlTOPp->traceChgThis__243(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__244(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x1000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__245(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0xcU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x1bU))))) {
	    vlTOPp->traceChgThis__246(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__247(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__248(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0xeU) | (vlTOPp->__Vm_traceActivity[1U] 
					    >> 0x1cU))))) {
	    vlTOPp->traceChgThis__249(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x8000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__250(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__251(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x10U) | (vlTOPp->__Vm_traceActivity[1U] 
					     >> 0x1dU))))) {
	    vlTOPp->traceChgThis__252(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__253(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__254(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x12U) | (vlTOPp->__Vm_traceActivity[1U] 
					     >> 0x1eU))))) {
	    vlTOPp->traceChgThis__255(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__256(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__257(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x14U) | (vlTOPp->__Vm_traceActivity[1U] 
					     >> 0x1fU))))) {
	    vlTOPp->traceChgThis__258(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__259(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__260(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x16U) | vlTOPp->__Vm_traceActivity[2U])))) {
	    vlTOPp->traceChgThis__261(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__262(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x1000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__263(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity[1U] 
				>> 0x18U) | (vlTOPp->__Vm_traceActivity[2U] 
					     >> 1U))))) {
	    vlTOPp->traceChgThis__264(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x2000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__265(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x4000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__266(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x8000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__267(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__268(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__269(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__270(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80000000U & vlTOPp->__Vm_traceActivity[1U]))) {
	    vlTOPp->traceChgThis__271(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity[2U]))) {
	    vlTOPp->traceChgThis__272(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity[2U]))) {
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

void Vdig::traceChgThis__2(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->dig__DOT__outx[0]),32);
	vcdp->chgBus  (c+2,(vlTOPp->dig__DOT__outx[1]),32);
	vcdp->chgBus  (c+3,(vlTOPp->dig__DOT__outx[2]),32);
	vcdp->chgBus  (c+4,(vlTOPp->dig__DOT__outx[3]),32);
	vcdp->chgBus  (c+5,(vlTOPp->dig__DOT__outx[4]),32);
	vcdp->chgBus  (c+6,(vlTOPp->dig__DOT__outx[5]),32);
	vcdp->chgBus  (c+7,(vlTOPp->dig__DOT__outx[6]),32);
	vcdp->chgBus  (c+8,(vlTOPp->dig__DOT__outx[7]),32);
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
	vcdp->chgQuad (c+90,((((QData)((IData)((((2U 
						  == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						 << 0x1eU) 
						| ((0x20000000U 
						    & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						       << 0x1dU)) 
						   | (((2U 
							== (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						       << 0x1aU) 
						      | ((0x400000U 
							  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							     << 0x16U)) 
							 | ((0x200000U 
							     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								<< 0x15U)) 
							    | ((0x40000U 
								& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								   << 0x12U)) 
							       | (((1U 
								    == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								   << 0xeU) 
								  | ((0x2000U 
								      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									 << 0xdU)) 
								     | (((1U 
									  == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									 << 0xaU) 
									| ((0x40U 
									    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
									       << 6U)) 
									   | ((0x20U 
									       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 5U)) 
									      | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 2U))))))))))))))) 
			       << 0x20U) | (QData)((IData)(
							   (0x44444440U 
							    | ((0x20000000U 
								& ((~ (IData)(
									      (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
									       >> 0x20U))) 
								   << 0x1dU)) 
							       | ((0x10000000U 
								   & ((IData)(
									      (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
									       >> 0x20U)) 
								      << 0x1cU)) 
								  | ((0x1000000U 
								      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
									 << 0x18U)) 
								     | ((0x200000U 
									 & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x1fU))) 
									    << 0x15U)) 
									| ((0x100000U 
									    & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									       << 0x14U)) 
									   | ((0x10000U 
									       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x10U)) 
									      | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla) 
										<< 8U)))))))))))))),64);
	vcdp->chgQuad (c+92,((((QData)((IData)((((2U 
						  == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						 << 0x1eU) 
						| ((0x20000000U 
						    & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						       << 0x1dU)) 
						   | (((2U 
							== (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						       << 0x1aU) 
						      | ((0x400000U 
							  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							     << 0x16U)) 
							 | ((0x200000U 
							     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								<< 0x15U)) 
							    | ((0x40000U 
								& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								   << 0x12U)) 
							       | (((1U 
								    == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								   << 0xeU) 
								  | ((0x2000U 
								      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									 << 0xdU)) 
								     | (((1U 
									  == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									 << 0xaU) 
									| ((0x40U 
									    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
									       << 6U)) 
									   | ((0x20U 
									       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 5U)) 
									      | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 2U))))))))))))))) 
			       << 0x20U) | (QData)((IData)(
							   (0x44444440U 
							    | ((0x20000000U 
								& ((~ (IData)(
									      (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
									       >> 0x20U))) 
								   << 0x1dU)) 
							       | ((0x10000000U 
								   & ((IData)(
									      (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
									       >> 0x20U)) 
								      << 0x1cU)) 
								  | ((0x1000000U 
								      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
									 << 0x18U)) 
								     | ((0x200000U 
									 & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x1fU))) 
									    << 0x15U)) 
									| ((0x100000U 
									    & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									       << 0x14U)) 
									   | ((0x10000U 
									       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x10U)) 
									      | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb) 
										<< 8U)))))))))))))),64);
    }
}

void Vdig::traceChgThis__29(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+94,((((QData)((IData)((((2U 
						  == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						 << 0x1eU) 
						| ((0x20000000U 
						    & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						       << 0x1dU)) 
						   | (((2U 
							== (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						       << 0x1aU) 
						      | ((0x400000U 
							  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							     << 0x16U)) 
							 | ((0x200000U 
							     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								<< 0x15U)) 
							    | ((0x40000U 
								& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								   << 0x12U)) 
							       | (((1U 
								    == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								   << 0xeU) 
								  | ((0x2000U 
								      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									 << 0xdU)) 
								     | (((1U 
									  == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									 << 0xaU) 
									| ((0x40U 
									    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
									       << 6U)) 
									   | ((0x20U 
									       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 5U)) 
									      | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 2U))))))))))))))) 
			       << 0x20U) | (QData)((IData)(
							   (0x44444440U 
							    | ((0x20000000U 
								& ((~ (IData)(
									      (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
									       >> 0x20U))) 
								   << 0x1dU)) 
							       | ((0x10000000U 
								   & ((IData)(
									      (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
									       >> 0x20U)) 
								      << 0x1cU)) 
								  | ((0x1000000U 
								      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
									 << 0x18U)) 
								     | ((0x200000U 
									 & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x1fU))) 
									    << 0x15U)) 
									| ((0x100000U 
									    & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									       << 0x14U)) 
									   | ((0x10000U 
									       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x10U)) 
									      | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla) 
										<< 8U)))))))))))))),64);
	vcdp->chgQuad (c+96,((((QData)((IData)((((2U 
						  == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						 << 0x1eU) 
						| ((0x20000000U 
						    & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						       << 0x1dU)) 
						   | (((2U 
							== (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						       << 0x1aU) 
						      | ((0x400000U 
							  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							     << 0x16U)) 
							 | ((0x200000U 
							     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								<< 0x15U)) 
							    | ((0x40000U 
								& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								   << 0x12U)) 
							       | (((1U 
								    == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								   << 0xeU) 
								  | ((0x2000U 
								      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									 << 0xdU)) 
								     | (((1U 
									  == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									 << 0xaU) 
									| ((0x40U 
									    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
									       << 6U)) 
									   | ((0x20U 
									       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 5U)) 
									      | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 2U))))))))))))))) 
			       << 0x20U) | (QData)((IData)(
							   (0x44444440U 
							    | ((0x20000000U 
								& ((~ (IData)(
									      (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
									       >> 0x20U))) 
								   << 0x1dU)) 
							       | ((0x10000000U 
								   & ((IData)(
									      (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
									       >> 0x20U)) 
								      << 0x1cU)) 
								  | ((0x1000000U 
								      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
									 << 0x18U)) 
								     | ((0x200000U 
									 & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x1fU))) 
									    << 0x15U)) 
									| ((0x100000U 
									    & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
									       << 0x14U)) 
									   | ((0x10000U 
									       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x10U)) 
									      | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb) 
										<< 8U)))))))))))))),64);
    }
}

void Vdig::traceChgThis__30(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+98,((((QData)((IData)((((2U 
						  == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						 << 0x1eU) 
						| ((0x20000000U 
						    & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						       << 0x1dU)) 
						   | (((2U 
							== (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						       << 0x1aU) 
						      | ((0x400000U 
							  & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							     << 0x16U)) 
							 | ((0x200000U 
							     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								<< 0x15U)) 
							    | ((0x40000U 
								& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								   << 0x12U)) 
							       | (((1U 
								    == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								   << 0xeU) 
								  | ((0x2000U 
								      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									 << 0xdU)) 
								     | (((1U 
									  == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									 << 0xaU) 
									| ((0x40U 
									    & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
									       << 6U)) 
									   | ((0x20U 
									       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 5U)) 
									      | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 2U))))))))))))))) 
			       << 0x20U) | (QData)((IData)(
							   (0x44444440U 
							    | ((0x20000000U 
								& ((~ (IData)(
									      (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
									       >> 0x20U))) 
								   << 0x1dU)) 
							       | ((0x10000000U 
								   & ((IData)(
									      (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
									       >> 0x20U)) 
								      << 0x1cU)) 
								  | ((0x1000000U 
								      & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
									 << 0x18U)) 
								     | ((0x200000U 
									 & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x1fU))) 
									    << 0x15U)) 
									| ((0x100000U 
									    & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
									       << 0x14U)) 
									   | ((0x10000U 
									       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x10U)) 
									      | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla) 
										<< 8U)))))))))))))),64);
	vcdp->chgQuad (c+100,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb) 
										<< 8U)))))))))))))),64);
    }
}

void Vdig::traceChgThis__31(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+102,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla) 
										<< 8U)))))))))))))),64);
	vcdp->chgQuad (c+104,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb) 
										<< 8U)))))))))))))),64);
    }
}

void Vdig::traceChgThis__32(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+106,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla) 
										<< 8U)))))))))))))),64);
	vcdp->chgQuad (c+108,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb) 
										<< 8U)))))))))))))),64);
    }
}

void Vdig::traceChgThis__33(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+110,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla) 
										<< 8U)))))))))))))),64);
	vcdp->chgQuad (c+112,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb) 
										<< 8U)))))))))))))),64);
    }
}

void Vdig::traceChgThis__34(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+114,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla) 
										<< 8U)))))))))))))),64);
	vcdp->chgQuad (c+116,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb) 
										<< 8U)))))))))))))),64);
    }
}

void Vdig::traceChgThis__35(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+118,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla) 
										<< 8U)))))))))))))),64);
	vcdp->chgQuad (c+120,((((QData)((IData)((((2U 
						   == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
						  << 0x1eU) 
						 | ((0x20000000U 
						     & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1dU)) 
						    | (((2U 
							 == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							<< 0x1aU) 
						       | ((0x400000U 
							   & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
							      << 0x16U)) 
							  | ((0x200000U 
							      & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								 << 0x15U)) 
							     | ((0x40000U 
								 & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0x12U)) 
								| (((1U 
								     == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
								    << 0xeU) 
								   | ((0x2000U 
								       & ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xdU)) 
								      | (((1U 
									   == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
									  << 0xaU) 
									 | ((0x40U 
									     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 6U)) 
									    | ((0x20U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly)) 
										<< 5U)) 
									       | (4U 
										& ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly) 
										<< 2U))))))))))))))) 
				<< 0x20U) | (QData)((IData)(
							    (0x44444440U 
							     | ((0x20000000U 
								 & ((~ (IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x20U))) 
								    << 0x1dU)) 
								| ((0x10000000U 
								    & ((IData)(
									       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
								       << 0x1cU)) 
								   | ((0x1000000U 
								       & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x20U)) 
									  << 0x18U)) 
								      | ((0x200000U 
									  & ((~ (IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x1fU))) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x14U)) 
									    | ((0x10000U 
										& ((IData)(
										(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb 
										>> 0x1fU)) 
										<< 0x10U)) 
									       | ((0x2000U 
										& ((~ (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb)) 
										<< 0xdU)) 
										| (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb) 
										<< 0xcU) 
										| ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb) 
										<< 8U)))))))))))))),64);
    }
}

void Vdig::traceChgThis__36(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+122,(vlTOPp->dig__DOT__hub___DOT__mem_w));
    }
}

void Vdig::traceChgThis__37(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+123,(((IData)(vlTOPp->dig__DOT__bus_sel) 
			       & ((0U == (0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
						  >> 0x1cU))) 
				  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m) 
				     >> 4U)))));
	vcdp->chgBit  (c+124,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     & (~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					   >> 0x17U))))));
	vcdp->chgBus  (c+125,((3U & ((1U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__38(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+126,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 1U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+127,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 1U) & (~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+128,((3U & ((2U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__39(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+129,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 2U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+130,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 2U) & (~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+131,((3U & ((4U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__40(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+132,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 3U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+133,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 3U) & (~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+134,((3U & ((8U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__41(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+135,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 4U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+136,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 4U) & (~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+137,((3U & ((0x10U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__42(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+138,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 5U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+139,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 5U) & (~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+140,((3U & ((0x20U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__43(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+141,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 6U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+142,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 6U) & (~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+143,((3U & ((0x40U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__44(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+144,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 7U) & ((0U == (0xfU 
						  & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						     >> 0x1cU))) 
					  & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m) 
					     >> 4U)))));
	vcdp->chgBit  (c+145,((1U & (((IData)(vlTOPp->dig__DOT__bus_sel) 
				      >> 7U) & (~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
						   >> 0x17U))))));
	vcdp->chgBus  (c+146,((3U & ((0x80U & (IData)(vlTOPp->dig__DOT__bus_sel))
				      ? (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
					 >> 0x1aU) : 0U))),2);
    }
}

void Vdig::traceChgThis__45(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+147,(vlTOPp->dig__DOT__dirx[0]),32);
	vcdp->chgBus  (c+148,(vlTOPp->dig__DOT__dirx[1]),32);
	vcdp->chgBus  (c+149,(vlTOPp->dig__DOT__dirx[2]),32);
	vcdp->chgBus  (c+150,(vlTOPp->dig__DOT__dirx[3]),32);
	vcdp->chgBus  (c+151,(vlTOPp->dig__DOT__dirx[4]),32);
	vcdp->chgBus  (c+152,(vlTOPp->dig__DOT__dirx[5]),32);
	vcdp->chgBus  (c+153,(vlTOPp->dig__DOT__dirx[6]),32);
	vcdp->chgBus  (c+154,(vlTOPp->dig__DOT__dirx[7]),32);
    }
}

void Vdig::traceChgThis__46(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp265,255,0,8);
    // Body
    {
	__Vtemp265[0U] = vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d;
	__Vtemp265[1U] = vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__dr;
	__Vtemp265[2U] = 0U;
	__Vtemp265[3U] = 0U;
	__Vtemp265[4U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c)));
	__Vtemp265[5U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c)));
	__Vtemp265[6U] = (IData)((QData)((IData)(VL_NEGATE_I((IData)(
								     (1U 
								      & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
									 >> 0x1fU)))))));
	__Vtemp265[7U] = (IData)(((QData)((IData)(VL_NEGATE_I((IData)(
								      (1U 
								       & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
									  >> 0x1fU)))))) 
				  >> 0x20U));
	vcdp->chgArray(c+155,(__Vtemp265),256);
    }
}

void Vdig::traceChgThis__47(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+163,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i)
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
	vcdp->chgBit  (c+164,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__i 
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

void Vdig::traceChgThis__48(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+165,((1U & ((~ (IData)((0U 
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

void Vdig::traceChgThis__49(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp271,255,0,8);
    // Body
    {
	__Vtemp271[0U] = vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d;
	__Vtemp271[1U] = vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__dr;
	__Vtemp271[2U] = 0U;
	__Vtemp271[3U] = 0U;
	__Vtemp271[4U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c)));
	__Vtemp271[5U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c)));
	__Vtemp271[6U] = (IData)((QData)((IData)(VL_NEGATE_I((IData)(
								     (1U 
								      & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
									 >> 0x1fU)))))));
	__Vtemp271[7U] = (IData)(((QData)((IData)(VL_NEGATE_I((IData)(
								      (1U 
								       & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
									  >> 0x1fU)))))) 
				  >> 0x20U));
	vcdp->chgArray(c+166,(__Vtemp271),256);
    }
}

void Vdig::traceChgThis__50(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+174,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i)
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
	vcdp->chgBit  (c+175,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__i 
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

void Vdig::traceChgThis__51(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+176,((1U & ((~ (IData)((0U 
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

void Vdig::traceChgThis__52(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp277,255,0,8);
    // Body
    {
	__Vtemp277[0U] = vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d;
	__Vtemp277[1U] = vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__dr;
	__Vtemp277[2U] = 0U;
	__Vtemp277[3U] = 0U;
	__Vtemp277[4U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c)));
	__Vtemp277[5U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c)));
	__Vtemp277[6U] = (IData)((QData)((IData)(VL_NEGATE_I((IData)(
								     (1U 
								      & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
									 >> 0x1fU)))))));
	__Vtemp277[7U] = (IData)(((QData)((IData)(VL_NEGATE_I((IData)(
								      (1U 
								       & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
									  >> 0x1fU)))))) 
				  >> 0x20U));
	vcdp->chgArray(c+177,(__Vtemp277),256);
    }
}

void Vdig::traceChgThis__53(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+185,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i)
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
	vcdp->chgBit  (c+186,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__i 
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

void Vdig::traceChgThis__54(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+187,((1U & ((~ (IData)((0U 
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

void Vdig::traceChgThis__55(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp283,255,0,8);
    // Body
    {
	__Vtemp283[0U] = vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d;
	__Vtemp283[1U] = vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__dr;
	__Vtemp283[2U] = 0U;
	__Vtemp283[3U] = 0U;
	__Vtemp283[4U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c)));
	__Vtemp283[5U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c)));
	__Vtemp283[6U] = (IData)((QData)((IData)(VL_NEGATE_I((IData)(
								     (1U 
								      & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
									 >> 0x1fU)))))));
	__Vtemp283[7U] = (IData)(((QData)((IData)(VL_NEGATE_I((IData)(
								      (1U 
								       & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
									  >> 0x1fU)))))) 
				  >> 0x20U));
	vcdp->chgArray(c+188,(__Vtemp283),256);
    }
}

void Vdig::traceChgThis__56(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+196,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i)
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
	vcdp->chgBit  (c+197,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__i 
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

void Vdig::traceChgThis__57(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+198,((1U & ((~ (IData)((0U 
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

void Vdig::traceChgThis__58(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp289,255,0,8);
    // Body
    {
	__Vtemp289[0U] = vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d;
	__Vtemp289[1U] = vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__dr;
	__Vtemp289[2U] = 0U;
	__Vtemp289[3U] = 0U;
	__Vtemp289[4U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c)));
	__Vtemp289[5U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c)));
	__Vtemp289[6U] = (IData)((QData)((IData)(VL_NEGATE_I((IData)(
								     (1U 
								      & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
									 >> 0x1fU)))))));
	__Vtemp289[7U] = (IData)(((QData)((IData)(VL_NEGATE_I((IData)(
								      (1U 
								       & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
									  >> 0x1fU)))))) 
				  >> 0x20U));
	vcdp->chgArray(c+199,(__Vtemp289),256);
    }
}

void Vdig::traceChgThis__59(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+207,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i)
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
	vcdp->chgBit  (c+208,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__i 
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

void Vdig::traceChgThis__60(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+209,((1U & ((~ (IData)((0U 
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

void Vdig::traceChgThis__61(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp295,255,0,8);
    // Body
    {
	__Vtemp295[0U] = vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d;
	__Vtemp295[1U] = vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__dr;
	__Vtemp295[2U] = 0U;
	__Vtemp295[3U] = 0U;
	__Vtemp295[4U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c)));
	__Vtemp295[5U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c)));
	__Vtemp295[6U] = (IData)((QData)((IData)(VL_NEGATE_I((IData)(
								     (1U 
								      & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
									 >> 0x1fU)))))));
	__Vtemp295[7U] = (IData)(((QData)((IData)(VL_NEGATE_I((IData)(
								      (1U 
								       & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
									  >> 0x1fU)))))) 
				  >> 0x20U));
	vcdp->chgArray(c+210,(__Vtemp295),256);
    }
}

void Vdig::traceChgThis__62(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+218,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i)
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
	vcdp->chgBit  (c+219,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__i 
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

void Vdig::traceChgThis__63(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+220,((1U & ((~ (IData)((0U 
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

void Vdig::traceChgThis__64(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp301,255,0,8);
    // Body
    {
	__Vtemp301[0U] = vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d;
	__Vtemp301[1U] = vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__dr;
	__Vtemp301[2U] = 0U;
	__Vtemp301[3U] = 0U;
	__Vtemp301[4U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c)));
	__Vtemp301[5U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c)));
	__Vtemp301[6U] = (IData)((QData)((IData)(VL_NEGATE_I((IData)(
								     (1U 
								      & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
									 >> 0x1fU)))))));
	__Vtemp301[7U] = (IData)(((QData)((IData)(VL_NEGATE_I((IData)(
								      (1U 
								       & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
									  >> 0x1fU)))))) 
				  >> 0x20U));
	vcdp->chgArray(c+221,(__Vtemp301),256);
    }
}

void Vdig::traceChgThis__65(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+229,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i)
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
	vcdp->chgBit  (c+230,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__i 
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

void Vdig::traceChgThis__66(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+231,((1U & ((~ (IData)((0U 
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

void Vdig::traceChgThis__67(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp307,255,0,8);
    // Body
    {
	__Vtemp307[0U] = vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d;
	__Vtemp307[1U] = vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__dr;
	__Vtemp307[2U] = 0U;
	__Vtemp307[3U] = 0U;
	__Vtemp307[4U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c)));
	__Vtemp307[5U] = VL_NEGATE_I((IData)((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c)));
	__Vtemp307[6U] = (IData)((QData)((IData)(VL_NEGATE_I((IData)(
								     (1U 
								      & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
									 >> 0x1fU)))))));
	__Vtemp307[7U] = (IData)(((QData)((IData)(VL_NEGATE_I((IData)(
								      (1U 
								       & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
									  >> 0x1fU)))))) 
				  >> 0x20U));
	vcdp->chgArray(c+232,(__Vtemp307),256);
    }
}

void Vdig::traceChgThis__68(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+240,(((0x10000000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i)
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
	vcdp->chgBit  (c+241,(((((6U == (7U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__i 
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

void Vdig::traceChgThis__69(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+242,((1U & ((~ (IData)((0U 
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

void Vdig::traceChgThis__70(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+243,(vlTOPp->dig__DOT__bus_ack),8);
	vcdp->chgBit  (c+244,((1U & (IData)(vlTOPp->dig__DOT__bus_ack))));
	vcdp->chgBit  (c+245,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 1U))));
	vcdp->chgBit  (c+246,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 2U))));
	vcdp->chgBit  (c+247,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 3U))));
	vcdp->chgBit  (c+248,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 4U))));
	vcdp->chgBit  (c+249,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 5U))));
	vcdp->chgBit  (c+250,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 6U))));
	vcdp->chgBit  (c+251,((1U & ((IData)(vlTOPp->dig__DOT__bus_ack) 
				     >> 7U))));
    }
}

void Vdig::traceChgThis__71(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+252,((1U & ((0U == (0xfU & 
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

void Vdig::traceChgThis__72(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+253,(((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cond) 
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

void Vdig::traceChgThis__73(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+254,((1U & ((0U == (0xfU & 
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

void Vdig::traceChgThis__74(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+255,(((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cond) 
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

void Vdig::traceChgThis__75(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+256,((1U & ((0U == (0xfU & 
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

void Vdig::traceChgThis__76(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+257,(((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cond) 
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

void Vdig::traceChgThis__77(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+258,((1U & ((0U == (0xfU & 
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

void Vdig::traceChgThis__78(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+259,(((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cond) 
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

void Vdig::traceChgThis__79(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+260,((1U & ((0U == (0xfU & 
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

void Vdig::traceChgThis__80(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+261,(((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cond) 
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

void Vdig::traceChgThis__81(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+262,((1U & ((0U == (0xfU & 
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

void Vdig::traceChgThis__82(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+263,(((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cond) 
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

void Vdig::traceChgThis__83(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+264,((1U & ((0U == (0xfU & 
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

void Vdig::traceChgThis__84(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+265,(((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cond) 
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

void Vdig::traceChgThis__85(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+266,((1U & ((0U == (0xfU & 
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

void Vdig::traceChgThis__86(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+267,(((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cond) 
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

void Vdig::traceChgThis__87(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__88(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__89(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__90(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__91(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__92(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__93(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__94(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__95(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__96(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+279,(vlTOPp->dig__DOT__bus_r),8);
	vcdp->chgBit  (c+280,((0U != (IData)(vlTOPp->dig__DOT__bus_r))));
    }
}

void Vdig::traceChgThis__97(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+281,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+282,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+283,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+284,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+285,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+286,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__98(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+287,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+288,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+289,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+290,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+291,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+292,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__99(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+293,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+294,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+295,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+296,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+297,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+298,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__100(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+299,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+300,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+301,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+302,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+303,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+304,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__101(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+305,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+306,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+307,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+308,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+309,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+310,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__102(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+311,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+312,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+313,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+314,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+315,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+316,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__103(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+317,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+318,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+319,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+320,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+321,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+322,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__104(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+323,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr)))),32);
	vcdp->chgBus  (c+324,((((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					   >> 0x1eU)) 
				       & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					  >> 1U))) 
				<< (0x1fU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 9U))) 
			       | ((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					     >> 0x1eU)) 
					 & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba))) 
				  << (0x1fU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr)))),32);
	vcdp->chgBit  (c+325,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+326,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba)))));
	vcdp->chgBit  (c+327,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba) 
					>> 1U)))));
	vcdp->chgBit  (c+328,((1U & ((~ (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					 >> 0x1eU)) 
				     & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba)))));
    }
}

void Vdig::traceChgThis__105(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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
    }
}

void Vdig::traceChgThis__106(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+333,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+334,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+335,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+336,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__107(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+337,(vlTOPp->dig__DOT__pll),8);
    }
}

void Vdig::traceChgThis__108(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+338,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+339,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+340,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+341,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__109(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+342,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+343,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+344,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+345,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__110(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+346,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+347,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+348,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+349,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__111(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+350,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+351,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+352,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+353,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__112(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+354,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+355,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+356,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+357,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__113(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+358,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+359,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+360,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+361,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__114(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+362,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__plla));
	vcdp->chgBit  (c+363,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__pllb));
	vcdp->chgBus  (c+364,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__tba),3);
	vcdp->chgBus  (c+365,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__tba),3);
    }
}

void Vdig::traceChgThis__115(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+366,(vlTOPp->dig__DOT__ptr_w),8);
	vcdp->chgBus  (c+367,(vlTOPp->dig__DOT__hub___DOT__num),3);
	vcdp->chgBus  (c+368,((0xffU & ((IData)(1U) 
					<< (IData)(vlTOPp->dig__DOT__hub___DOT__num)))),8);
	vcdp->chgBit  (c+369,(vlTOPp->dig__DOT__hub___DOT__cog_start));
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

void Vdig::traceChgThis__116(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+378,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__117(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+379,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__118(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+380,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__119(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+381,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__120(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+382,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__121(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+383,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__122(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+384,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__123(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+385,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colorphs),4);
    }
}

void Vdig::traceChgThis__124(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__125(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__126(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__127(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__128(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__129(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__130(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__131(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__132(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__133(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__134(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__135(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__136(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__137(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__138(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__139(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__140(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__141(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__142(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__143(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__144(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__145(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__146(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__147(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__148(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__149(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__150(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__151(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__152(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__153(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__154(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__155(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__156(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__157(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__158(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__159(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__160(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__161(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__162(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__163(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__164(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
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

void Vdig::traceChgThis__165(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+522,(vlTOPp->dig__DOT__bus_a[0]),16);
	vcdp->chgBus  (c+523,(vlTOPp->dig__DOT__bus_a[1]),16);
	vcdp->chgBus  (c+524,(vlTOPp->dig__DOT__bus_a[2]),16);
	vcdp->chgBus  (c+525,(vlTOPp->dig__DOT__bus_a[3]),16);
	vcdp->chgBus  (c+526,(vlTOPp->dig__DOT__bus_a[4]),16);
	vcdp->chgBus  (c+527,(vlTOPp->dig__DOT__bus_a[5]),16);
	vcdp->chgBus  (c+528,(vlTOPp->dig__DOT__bus_a[6]),16);
	vcdp->chgBus  (c+529,(vlTOPp->dig__DOT__bus_a[7]),16);
    }
}

void Vdig::traceChgThis__166(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+530,(vlTOPp->dig__DOT__bus_d[0]),32);
	vcdp->chgBus  (c+531,(vlTOPp->dig__DOT__bus_d[1]),32);
	vcdp->chgBus  (c+532,(vlTOPp->dig__DOT__bus_d[2]),32);
	vcdp->chgBus  (c+533,(vlTOPp->dig__DOT__bus_d[3]),32);
	vcdp->chgBus  (c+534,(vlTOPp->dig__DOT__bus_d[4]),32);
	vcdp->chgBus  (c+535,(vlTOPp->dig__DOT__bus_d[5]),32);
	vcdp->chgBus  (c+536,(vlTOPp->dig__DOT__bus_d[6]),32);
	vcdp->chgBus  (c+537,(vlTOPp->dig__DOT__bus_d[7]),32);
	vcdp->chgBus  (c+538,(vlTOPp->dig__DOT__hub_bus_d),32);
	vcdp->chgBit  (c+539,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+540,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+541,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+542,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+543,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+544,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+545,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT____Vcellinp__cog___ena));
	vcdp->chgBit  (c+546,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT____Vcellinp__cog___ena));
    }
}

void Vdig::traceChgThis__167(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+547,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__168(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+548,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__169(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+549,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__170(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+550,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__171(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+551,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__172(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+552,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__173(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+553,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__174(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+554,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colormod),3);
    }
}

void Vdig::traceChgThis__175(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+555,(vlTOPp->dig__DOT__hub_bus_a),16);
    }
}

void Vdig::traceChgThis__176(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+556,(vlTOPp->dig__DOT__bus_e),8);
	vcdp->chgBus  (c+557,(vlTOPp->dig__DOT__bus_w),8);
	vcdp->chgBus  (c+558,(vlTOPp->dig__DOT__bus_s[0]),2);
	vcdp->chgBus  (c+559,(vlTOPp->dig__DOT__bus_s[1]),2);
	vcdp->chgBus  (c+560,(vlTOPp->dig__DOT__bus_s[2]),2);
	vcdp->chgBus  (c+561,(vlTOPp->dig__DOT__bus_s[3]),2);
	vcdp->chgBus  (c+562,(vlTOPp->dig__DOT__bus_s[4]),2);
	vcdp->chgBus  (c+563,(vlTOPp->dig__DOT__bus_s[5]),2);
	vcdp->chgBus  (c+564,(vlTOPp->dig__DOT__bus_s[6]),2);
	vcdp->chgBus  (c+565,(vlTOPp->dig__DOT__bus_s[7]),2);
	vcdp->chgBit  (c+566,((0U != (IData)(vlTOPp->dig__DOT__bus_e))));
	vcdp->chgBit  (c+567,((0U != (IData)(vlTOPp->dig__DOT__bus_w))));
    }
}

void Vdig::traceChgThis__177(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+568,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+569,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+570,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+571,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+572,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+573,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+574,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot),64);
	vcdp->chgBus  (c+576,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
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
	vcdp->chgBus  (c+577,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+578,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+579,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+580,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+581,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__178(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+582,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+583,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+584,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+585,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+586,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+587,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+588,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot),64);
	vcdp->chgBus  (c+590,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
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
	vcdp->chgBus  (c+591,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+592,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+593,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+594,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+595,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__179(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+596,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+597,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+598,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+599,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+600,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+601,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+602,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot),64);
	vcdp->chgBus  (c+604,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
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
	vcdp->chgBus  (c+605,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+606,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+607,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+608,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+609,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__180(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+610,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+611,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+612,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+613,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+614,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+615,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+616,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot),64);
	vcdp->chgBus  (c+618,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
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
	vcdp->chgBus  (c+619,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+620,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+621,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+622,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+623,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__181(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+624,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+625,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+626,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+627,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+628,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+629,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+630,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot),64);
	vcdp->chgBus  (c+632,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
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
	vcdp->chgBus  (c+633,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+634,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+635,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+636,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+637,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__182(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+638,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+639,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+640,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+641,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+642,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+643,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+644,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot),64);
	vcdp->chgBus  (c+646,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
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
	vcdp->chgBus  (c+647,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+648,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+649,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+650,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+651,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__183(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+652,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+653,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+654,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+655,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+656,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+657,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+658,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot),64);
	vcdp->chgBus  (c+660,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
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
	vcdp->chgBus  (c+661,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+662,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+663,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+664,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+665,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__184(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+666,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cond));
	vcdp->chgBit  (c+667,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx))));
	vcdp->chgBit  (c+668,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__wio));
	vcdp->chgBit  (c+669,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_ena));
	vcdp->chgBus  (c+670,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx),2);
	vcdp->chgBit  (c+671,((1U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__jumpx) 
				     >> 1U))));
	vcdp->chgQuad (c+672,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot),64);
	vcdp->chgBus  (c+674,(((0x80000000U & ((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__rot) 
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
	vcdp->chgBus  (c+675,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r),32);
	vcdp->chgBit  (c+676,((1U & VL_REDXOR_32(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__log_r))));
	vcdp->chgBit  (c+677,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_sub));
	vcdp->chgBus  (c+678,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_d),32);
	vcdp->chgBus  (c+679,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_s),32);
    }
}

void Vdig::traceChgThis__185(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+680,(vlTOPp->dig__DOT__hub_bus_s),2);
    }
}

void Vdig::traceChgThis__186(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+681,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+682,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+683,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+684,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+686,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+687,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+688,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+689,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__187(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+690,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+691,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+692,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+693,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+695,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+696,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+697,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+698,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__188(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+699,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+700,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+701,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+702,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+704,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+705,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+706,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+707,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__189(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+708,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+709,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+710,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+711,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+713,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+714,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+715,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+716,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__190(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+717,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+718,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+719,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+720,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+722,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+723,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+724,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+725,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__191(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+726,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+727,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+728,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+729,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+731,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+732,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+733,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+734,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__192(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+735,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+736,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+737,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+738,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+740,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+741,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+742,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+743,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__193(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+744,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__setphsa));
	vcdp->chgBit  (c+745,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__setphsb));
	vcdp->chgBus  (c+746,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__alu_r),32);
	vcdp->chgQuad (c+747,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x),35);
	vcdp->chgBus  (c+749,(((0x80000000U & ((IData)(
						       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							>> 0x21U)) 
					       << 0x1fU)) 
			       | (0x7fffffffU & (IData)(
							(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
							 >> 1U))))),32);
	vcdp->chgBit  (c+750,((1U & (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
					     >> 0x22U)))));
	vcdp->chgBit  (c+751,((1U & (~ (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_x 
						>> 0x20U))))));
	vcdp->chgBit  (c+752,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_alu___DOT__add_cs));
    }
}

void Vdig::traceChgThis__194(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+753,(vlTOPp->dig__DOT__bus_q),32);
	vcdp->chgBit  (c+754,(vlTOPp->dig__DOT__hub___DOT__rc));
	vcdp->chgBit  (c+755,(vlTOPp->dig__DOT__hub___DOT__wc));
	vcdp->chgBus  (c+756,(vlTOPp->dig__DOT__hub___DOT__sc),2);
	vcdp->chgBit  (c+757,(vlTOPp->dig__DOT__hub___DOT__rd));
	vcdp->chgBus  (c+758,(vlTOPp->dig__DOT__hub___DOT__sd),2);
	vcdp->chgBus  (c+759,(vlTOPp->dig__DOT__hub___DOT__ad),2);
	vcdp->chgBus  (c+760,(vlTOPp->dig__DOT__hub___DOT__sys_q),3);
	vcdp->chgBus  (c+761,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q3),8);
	vcdp->chgBus  (c+762,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q2),8);
	vcdp->chgBus  (c+763,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q1),8);
	vcdp->chgBus  (c+764,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__ram_q0),8);
	vcdp->chgBus  (c+765,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__rom_q),32);
	vcdp->chgBus  (c+766,(vlTOPp->dig__DOT__hub___DOT__hub_mem___DOT__mem),2);
	vcdp->chgBus  (c+767,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+768,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+770,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+772,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+773,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+774,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+775,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+776,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+777,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+779,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+781,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+782,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+783,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+784,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+785,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+786,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+788,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+790,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+791,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+792,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+793,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+794,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+795,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+797,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+799,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+800,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+801,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+802,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+803,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+804,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+806,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+808,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+809,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+810,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+811,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+812,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+813,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+815,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+817,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+818,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+819,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+820,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+821,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+822,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+824,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+826,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+827,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+828,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+829,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
	vcdp->chgBus  (c+830,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__outa),32);
	vcdp->chgQuad (c+831,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsa),33);
	vcdp->chgQuad (c+833,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__phsb),33);
	vcdp->chgBus  (c+835,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ix),32);
	vcdp->chgBus  (c+836,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__sy),32);
	vcdp->chgBus  (c+837,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__dly),2);
	vcdp->chgBus  (c+838,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__dly),2);
    }
}

void Vdig::traceChgThis__195(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+839,(vlTOPp->dig__DOT__bus_sel),8);
	vcdp->chgBus  (c+840,(vlTOPp->dig__DOT__cog_ena),8);
	vcdp->chgBit  (c+841,(vlTOPp->dig__DOT__hub___DOT__ec));
	vcdp->chgBit  (c+842,(vlTOPp->dig__DOT__hub___DOT__ed));
	vcdp->chgBus  (c+843,(vlTOPp->dig__DOT__hub___DOT__cog_e),8);
	vcdp->chgBus  (c+844,(vlTOPp->dig__DOT__hub___DOT__lock_e),8);
	vcdp->chgBit  (c+845,((1U & (IData)(vlTOPp->dig__DOT__bus_sel))));
	vcdp->chgBit  (c+846,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 1U))));
	vcdp->chgBit  (c+847,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 2U))));
	vcdp->chgBit  (c+848,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 3U))));
	vcdp->chgBit  (c+849,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 4U))));
	vcdp->chgBit  (c+850,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 5U))));
	vcdp->chgBit  (c+851,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 6U))));
	vcdp->chgBit  (c+852,((1U & ((IData)(vlTOPp->dig__DOT__bus_sel) 
				     >> 7U))));
    }
}

void Vdig::traceChgThis__196(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+853,(((IData)(vlTOPp->dig__DOT__bus_sel) 
			       & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__197(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+854,((0xffffU & ((1U & (IData)(vlTOPp->dig__DOT__bus_sel))
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

void Vdig::traceChgThis__198(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+855,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 1U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__199(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+856,((0xffffU & ((2U & (IData)(vlTOPp->dig__DOT__bus_sel))
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

void Vdig::traceChgThis__200(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+857,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 2U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__201(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+858,((0xffffU & ((4U & (IData)(vlTOPp->dig__DOT__bus_sel))
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

void Vdig::traceChgThis__202(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+859,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 3U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__203(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+860,((0xffffU & ((8U & (IData)(vlTOPp->dig__DOT__bus_sel))
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

void Vdig::traceChgThis__204(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+861,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 4U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__205(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+862,((0xffffU & ((0x10U & (IData)(vlTOPp->dig__DOT__bus_sel))
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

void Vdig::traceChgThis__206(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+863,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 5U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__207(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+864,((0xffffU & ((0x20U & (IData)(vlTOPp->dig__DOT__bus_sel))
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

void Vdig::traceChgThis__208(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+865,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 6U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__209(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+866,((0xffffU & ((0x40U & (IData)(vlTOPp->dig__DOT__bus_sel))
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

void Vdig::traceChgThis__210(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+867,((((IData)(vlTOPp->dig__DOT__bus_sel) 
				>> 7U) & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run))));
    }
}

void Vdig::traceChgThis__211(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+868,((0xffffU & ((0x80U & (IData)(vlTOPp->dig__DOT__bus_sel))
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

void Vdig::traceChgThis__212(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+869,(((1U & (IData)(vlTOPp->dig__DOT__bus_sel))
			        ? vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d
			        : 0U)),32);
	vcdp->chgBus  (c+870,(((2U & (IData)(vlTOPp->dig__DOT__bus_sel))
			        ? vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d
			        : 0U)),32);
	vcdp->chgBus  (c+871,(((4U & (IData)(vlTOPp->dig__DOT__bus_sel))
			        ? vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d
			        : 0U)),32);
	vcdp->chgBus  (c+872,(((8U & (IData)(vlTOPp->dig__DOT__bus_sel))
			        ? vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d
			        : 0U)),32);
	vcdp->chgBus  (c+873,(((0x10U & (IData)(vlTOPp->dig__DOT__bus_sel))
			        ? vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d
			        : 0U)),32);
	vcdp->chgBus  (c+874,(((0x20U & (IData)(vlTOPp->dig__DOT__bus_sel))
			        ? vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d
			        : 0U)),32);
	vcdp->chgBus  (c+875,(((0x40U & (IData)(vlTOPp->dig__DOT__bus_sel))
			        ? vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d
			        : 0U)),32);
	vcdp->chgBus  (c+876,(((0x80U & (IData)(vlTOPp->dig__DOT__bus_sel))
			        ? vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d
			        : 0U)),32);
    }
}

void Vdig::traceChgThis__213(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+877,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+878,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+879,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+880,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+881,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+882,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__214(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp309,127,0,4);
    // Body
    {
	__Vtemp309[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s));
	__Vtemp309[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d)));
	__Vtemp309[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d))))));
	__Vtemp309[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+883,(__Vtemp309),128);
	vcdp->chgBus  (c+887,((((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__215(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+888,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+889,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+890,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+891,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+892,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+893,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__216(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp311,127,0,4);
    // Body
    {
	__Vtemp311[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s));
	__Vtemp311[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d)));
	__Vtemp311[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d))))));
	__Vtemp311[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+894,(__Vtemp311),128);
	vcdp->chgBus  (c+898,((((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__217(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+899,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+900,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+901,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+902,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+903,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+904,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__218(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp313,127,0,4);
    // Body
    {
	__Vtemp313[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s));
	__Vtemp313[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d)));
	__Vtemp313[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d))))));
	__Vtemp313[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+905,(__Vtemp313),128);
	vcdp->chgBus  (c+909,((((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__219(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+910,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+911,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+912,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+913,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+914,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+915,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__220(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp315,127,0,4);
    // Body
    {
	__Vtemp315[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s));
	__Vtemp315[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d)));
	__Vtemp315[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d))))));
	__Vtemp315[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+916,(__Vtemp315),128);
	vcdp->chgBus  (c+920,((((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__221(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+921,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+922,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+923,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+924,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+925,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+926,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__222(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp317,127,0,4);
    // Body
    {
	__Vtemp317[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s));
	__Vtemp317[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d)));
	__Vtemp317[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d))))));
	__Vtemp317[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+927,(__Vtemp317),128);
	vcdp->chgBus  (c+931,((((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__223(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+932,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+933,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+934,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+935,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+936,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+937,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__224(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp319,127,0,4);
    // Body
    {
	__Vtemp319[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s));
	__Vtemp319[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d)));
	__Vtemp319[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d))))));
	__Vtemp319[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+938,(__Vtemp319),128);
	vcdp->chgBus  (c+942,((((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__225(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+943,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+944,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+945,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+946,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+947,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+948,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__226(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp321,127,0,4);
    // Body
    {
	__Vtemp321[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s));
	__Vtemp321[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d)));
	__Vtemp321[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d))))));
	__Vtemp321[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+949,(__Vtemp321),128);
	vcdp->chgBus  (c+953,((((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__227(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+954,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__dira),32);
	vcdp->chgBit  (c+955,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__run));
	vcdp->chgBus  (c+956,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p),9);
	vcdp->chgBit  (c+957,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c));
	vcdp->chgBit  (c+958,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z));
	vcdp->chgBit  (c+959,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cancel));
    }
}

void Vdig::traceChgThis__228(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp323,127,0,4);
    // Body
    {
	__Vtemp323[0U] = ((0xfffffe00U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
			  | (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s));
	__Vtemp323[1U] = ((0xfffc0000U & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
			  | ((0x3fe00U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
					  << 9U)) | 
			     (0x1ffU & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d)));
	__Vtemp323[2U] = (IData)((((QData)((IData)(
						   ((0xfffffe00U 
						     & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d) 
						    | (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__p)))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
								    << 0x17U)) 
								| (0x7fffffU 
								   & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d))))));
	__Vtemp323[3U] = (IData)(((((QData)((IData)(
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
	vcdp->chgArray(c+960,(__Vtemp323),128);
	vcdp->chgBus  (c+964,((((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__z) 
				<< 3U) | (((IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__c) 
					   << 2U) | 
					  (2U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s 
						 >> 0x1eU))))),4);
    }
}

void Vdig::traceChgThis__229(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+965,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+967,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+968,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+970,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+971,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+973,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+974,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+976,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+977,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+979,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+980,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+982,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+983,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+985,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+986,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+988,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+989,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+991,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+992,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+994,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+995,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+997,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						>> 0x1cU)))),8);
	vcdp->chgQuad (c+998,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+1000,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->chgQuad (c+1001,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+1003,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->chgQuad (c+1004,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+1006,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->chgQuad (c+1007,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake),36);
	vcdp->chgBus  (c+1009,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__pll_fake 
						 >> 0x1cU)))),8);
	vcdp->chgQuad (c+1010,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake),36);
	vcdp->chgBus  (c+1012,((0xffU & (IData)((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__pll_fake 
						 >> 0x1cU)))),8);
    }
}

void Vdig::traceChgThis__230(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1013,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+1014,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+1015,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+1016,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+1017,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+1018,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+1019,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ptr),28);
	vcdp->chgBus  (c+1020,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ptr),28);
    }
}

void Vdig::traceChgThis__231(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1021,(vlTOPp->dig__DOT__cnt),32);
	vcdp->chgBit  (c+1022,(vlTOPp->dig__DOT__hub___DOT__sys_c));
	vcdp->chgBus  (c+1023,((0xfffffffU & (vlTOPp->dig__DOT__hub___DOT__dc 
					      >> 4U))),28);
	vcdp->chgBus  (c+1024,(vlTOPp->dig__DOT__hub___DOT__ac),16);
	vcdp->chgBus  (c+1025,(vlTOPp->dig__DOT__hub___DOT__dc),32);
	vcdp->chgBus  (c+1026,(vlTOPp->dig__DOT__hub___DOT__lock_state),8);
	vcdp->chgBit  (c+1027,((1U & ((IData)(vlTOPp->dig__DOT__hub___DOT__lock_state) 
				      >> (7U & vlTOPp->dig__DOT__hub___DOT__dc)))));
	vcdp->chgBus  (c+1028,((0x3fffU & ((IData)(vlTOPp->dig__DOT__hub___DOT__ac) 
					   >> 2U))),14);
	vcdp->chgBit  (c+1029,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1030,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1031,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1032,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1033,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1034,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1035,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1036,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1037,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1038,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1039,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1040,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1041,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1042,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1043,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1044,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1045,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1046,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1047,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1048,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1049,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
	vcdp->chgBit  (c+1050,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__match));
	vcdp->chgBus  (c+1051,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__frq),32);
	vcdp->chgBus  (c+1052,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__frq),32);
    }
}

void Vdig::traceChgThis__232(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1053,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1054,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1055,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1056,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__233(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1057,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1058,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1059,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1060,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__234(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1061,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1062,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1063,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1064,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__235(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1065,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1066,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1067,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1068,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__236(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1069,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1070,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1071,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1072,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__237(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1073,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1074,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1075,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1076,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__238(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1077,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1078,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1079,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1080,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__239(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1081,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr),32);
	vcdp->chgBus  (c+1082,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctra__DOT__ctr 
					>> 0x1aU))),4);
	vcdp->chgBus  (c+1083,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr),32);
	vcdp->chgBus  (c+1084,((0xfU & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_ctrb__DOT__ctr 
					>> 0x1aU))),4);
    }
}

void Vdig::traceChgThis__240(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1085,(vlTOPp->dig__DOT__ena_bus));
    }
}

void Vdig::traceChgThis__241(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1086,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__242(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1087,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1088,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1089,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1090,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1091,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1092,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1093,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1094,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1095,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1096,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1097,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__243(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1098,((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__244(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1099,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__245(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1100,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1101,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1102,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1103,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1104,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1105,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1106,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1107,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1108,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1109,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1110,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__246(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1111,((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__247(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1112,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__248(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1113,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1114,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1115,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1116,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1117,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1118,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1119,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1120,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1121,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1122,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1123,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__249(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1124,((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__250(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1125,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__251(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1126,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1127,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1128,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1129,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1130,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1131,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1132,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1133,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1134,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1135,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1136,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__252(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1137,((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__253(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1138,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__254(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1139,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1140,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1141,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1142,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1143,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1144,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1145,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1146,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1147,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1148,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1149,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__255(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1150,((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__256(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1151,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__257(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1152,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1153,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1154,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1155,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1156,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1157,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1158,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1159,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1160,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1161,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1162,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__258(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1163,((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__259(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1164,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__260(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1165,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1166,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1167,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1168,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1169,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1170,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1171,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1172,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1173,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1174,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1175,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__261(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1176,((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__262(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1177,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cap));
    }
}

void Vdig::traceChgThis__263(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1178,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnts),8);
	vcdp->chgBus  (c+1179,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnt),8);
	vcdp->chgBus  (c+1180,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__set),12);
	vcdp->chgBus  (c+1181,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels),32);
	vcdp->chgBus  (c+1182,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colors),32);
	vcdp->chgBit  (c+1183,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__set))));
	vcdp->chgBit  (c+1184,((1U == (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__cnt))));
	vcdp->chgBus  (c+1185,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__discrete),8);
	vcdp->chgBus  (c+1186,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__phase),4);
	vcdp->chgBus  (c+1187,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__baseband),4);
	vcdp->chgBus  (c+1188,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__composite),3);
    }
}

void Vdig::traceChgThis__264(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1189,((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__colors 
				>> ((0x10U & ((vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					       >> 0x18U) 
					      & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
						 << 3U))) 
				    | (8U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__pixels 
					     << 3U))))),32);
    }
}

void Vdig::traceChgThis__265(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp325,127,0,4);
    VL_SIGW(__Vtemp327,127,0,4);
    VL_SIGW(__Vtemp329,127,0,4);
    VL_SIGW(__Vtemp331,127,0,4);
    VL_SIGW(__Vtemp333,127,0,4);
    VL_SIGW(__Vtemp335,127,0,4);
    VL_SIGW(__Vtemp337,127,0,4);
    VL_SIGW(__Vtemp339,127,0,4);
    // Body
    {
	vcdp->chgBus  (c+1190,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1191,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1192,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1193,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1194,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgBus  (c+1195,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+1196,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp325[0U] = (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s));
	__Vtemp325[1U] = (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s);
	__Vtemp325[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))));
	__Vtemp325[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+1197,(__Vtemp325),128);
	vcdp->chgBus  (c+1201,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1202,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1203,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1204,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1205,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgBus  (c+1206,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+1207,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp327[0U] = (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s));
	__Vtemp327[1U] = (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s);
	__Vtemp327[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))));
	__Vtemp327[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+1208,(__Vtemp327),128);
	vcdp->chgBus  (c+1212,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1213,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1214,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1215,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1216,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgBus  (c+1217,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+1218,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp329[0U] = (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s));
	__Vtemp329[1U] = (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s);
	__Vtemp329[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))));
	__Vtemp329[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+1219,(__Vtemp329),128);
	vcdp->chgBus  (c+1223,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1224,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1225,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1226,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1227,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgBus  (c+1228,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+1229,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp331[0U] = (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s));
	__Vtemp331[1U] = (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s);
	__Vtemp331[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))));
	__Vtemp331[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+1230,(__Vtemp331),128);
	vcdp->chgBus  (c+1234,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1235,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1236,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1237,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1238,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgBus  (c+1239,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+1240,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp333[0U] = (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s));
	__Vtemp333[1U] = (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s);
	__Vtemp333[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))));
	__Vtemp333[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+1241,(__Vtemp333),128);
	vcdp->chgBus  (c+1245,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1246,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1247,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1248,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1249,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgBus  (c+1250,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+1251,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp335[0U] = (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s));
	__Vtemp335[1U] = (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s);
	__Vtemp335[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))));
	__Vtemp335[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+1252,(__Vtemp335),128);
	vcdp->chgBus  (c+1256,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1257,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1258,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1259,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1260,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgBus  (c+1261,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+1262,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp337[0U] = (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s));
	__Vtemp337[1U] = (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s);
	__Vtemp337[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))));
	__Vtemp337[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+1263,(__Vtemp337),128);
	vcdp->chgBus  (c+1267,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__ram_q),32);
	vcdp->chgBit  (c+1268,((1U & (IData)(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc))));
	vcdp->chgBus  (c+1269,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s),32);
	vcdp->chgBus  (c+1270,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d),32);
	vcdp->chgBit  (c+1271,((1U & (~ (IData)((0U 
						 != 
						 (0x7fffffffU 
						  & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						     >> 1U))))))));
	vcdp->chgBus  (c+1272,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__scl),20);
	vcdp->chgBus  (c+1273,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__snc),2);
	__Vtemp339[0U] = (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
			  & (~ vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s));
	__Vtemp339[1U] = (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
			  & vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s);
	__Vtemp339[2U] = (IData)((((QData)((IData)(
						   (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						    ^ vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s))) 
				   << 0x20U) | (QData)((IData)(
							       (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
								| vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))));
	__Vtemp339[3U] = (IData)(((((QData)((IData)(
						    (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
						     ^ vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s))) 
				    << 0x20U) | (QData)((IData)(
								(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__d 
								 | vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__s)))) 
				  >> 0x20U));
	vcdp->chgArray(c+1274,(__Vtemp339),128);
    }
}

void Vdig::traceChgThis__266(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1278,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+1279,(vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+1280,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__0__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__267(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1281,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+1282,(vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+1283,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__1__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__268(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1284,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+1285,(vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+1286,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__2__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__269(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1287,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+1288,(vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+1289,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__3__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__270(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1290,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+1291,(vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+1292,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__4__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__271(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1293,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+1294,(vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+1295,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__5__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__272(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1296,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+1297,(vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+1298,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__6__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__273(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1299,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__m),5);
	vcdp->chgBus  (c+1300,(vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid),32);
	vcdp->chgBit  (c+1301,((0U != (3U & (vlTOPp->dig__DOT__coggen__BRA__7__KET____DOT__cog___DOT__cog_vid___DOT__vid 
					     >> 0x1dU)))));
    }
}

void Vdig::traceChgThis__274(Vdig__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdig* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1302,(vlTOPp->nres));
	vcdp->chgBus  (c+1303,(vlTOPp->cfg),8);
	vcdp->chgBit  (c+1304,(vlTOPp->clk_cog));
	vcdp->chgBit  (c+1305,(vlTOPp->clk_pll));
	vcdp->chgBus  (c+1306,(vlTOPp->pin_in),32);
	vcdp->chgBus  (c+1307,(vlTOPp->pin_out),32);
	vcdp->chgBus  (c+1308,(vlTOPp->pin_dir),32);
	vcdp->chgBus  (c+1309,(vlTOPp->cog_led),8);
    }
}
