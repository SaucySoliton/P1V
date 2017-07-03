// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_veri.h for the primary calling header

#ifndef _Vtop_veri___024unit_H_
#define _Vtop_veri___024unit_H_

#include "verilated.h"
#include "Vtop_veri__Inlines.h"
class Vtop_veri__Syms;

//----------

VL_MODULE(Vtop_veri___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    Vtop_veri__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_veri___024unit& operator= (const Vtop_veri___024unit&);	///< Copying not allowed
    Vtop_veri___024unit(const Vtop_veri___024unit&);	///< Copying not allowed
  public:
    Vtop_veri___024unit(const char* name="TOP");
    ~Vtop_veri___024unit();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop_veri__Syms* symsp, bool first);
  private:
    void	_configure_coverage(Vtop_veri__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
