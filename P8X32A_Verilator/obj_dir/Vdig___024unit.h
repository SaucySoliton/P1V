// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdig.h for the primary calling header

#ifndef _Vdig___024unit_H_
#define _Vdig___024unit_H_

#include "verilated.h"
#include "Vdig__Inlines.h"
class Vdig__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vdig___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    Vdig__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vdig___024unit& operator= (const Vdig___024unit&);	///< Copying not allowed
    Vdig___024unit(const Vdig___024unit&);	///< Copying not allowed
  public:
    Vdig___024unit(const char* name="TOP");
    ~Vdig___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vdig__Syms* symsp, bool first);
  private:
    void	_configure_coverage(Vdig__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
