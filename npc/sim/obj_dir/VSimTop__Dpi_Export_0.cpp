// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VSimTop.h"
#include "VSimTop__Syms.h"
#include "verilated_dpi.h"


void VSimTop::catch_ebreak(int* i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root::catch_ebreak\n"); );
    // Variables
    IData/*31:0*/ i__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("catch_ebreak");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VSimTop__Vcb_catch_ebreak_t __Vcb = (VSimTop__Vcb_catch_ebreak_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VSimTop__Syms*)(__Vscopep->symsp()), i__Vcvt);
    for (size_t i__Vidx = 0; i__Vidx < 1; ++i__Vidx) *i = i__Vcvt;
}
