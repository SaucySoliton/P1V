// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vdig__Syms_H_
#define _Vdig__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vdig.h"
#include "Vdig___024unit.h"

// SYMS CLASS
class Vdig__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vdig*                          TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    Vdig__Syms(Vdig* topp, const char* namep);
    ~Vdig__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
