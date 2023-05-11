// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMTOP__SYMS_H_
#define VERILATED_VSIMTOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VSimTop.h"

// INCLUDE MODULE CLASSES
#include "VSimTop___024root.h"
#include "VSimTop_CacheDataRam.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VSimTop__Vcb_catch_ebreak_t = void (*) (VSimTop__Syms* __restrict vlSymsp, IData/*31:0*/ &i);

// SYMS CLASS (contains all model state)
class VSimTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSimTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSimTop___024root              TOP;
    VSimTop_CacheDataRam           TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam;
    VSimTop_CacheDataRam           TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_1;
    VSimTop_CacheDataRam           TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_2;
    VSimTop_CacheDataRam           TOP__SimTop__DOT__my_core_top__DOT__my_dcache__DOT__CacheDataRam_3;
    VSimTop_CacheDataRam           TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam;
    VSimTop_CacheDataRam           TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_1;
    VSimTop_CacheDataRam           TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_2;
    VSimTop_CacheDataRam           TOP__SimTop__DOT__my_core_top__DOT__my_icache__DOT__CacheDataRam_3;

    // SCOPE NAMES
    VerilatedScope __Vscope_SimTop__my_core_top__my_id__my_inst_monitor;

    // CONSTRUCTORS
    VSimTop__Syms(VerilatedContext* contextp, const char* namep, VSimTop* modelp);
    ~VSimTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
