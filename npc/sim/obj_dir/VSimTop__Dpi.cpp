// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VSimTop::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VSimTop__Dpi.h"
#include "VSimTop.h"

#ifndef VL_DPIDECL_catch_ebreak_
#define VL_DPIDECL_catch_ebreak_
void catch_ebreak(int* i) {
    // DPI export at ../build/SimTop.v:1895:9
    return VSimTop::catch_ebreak(i);
}
#endif

