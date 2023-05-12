// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSimTop__Syms.h"
#include "VSimTop.h"
#include "VSimTop___024root.h"
#include "VSimTop_CacheTop.h"
#include "VSimTop_CacheDataRam.h"

void VSimTop___024root____Vdpiexp_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_inst_monitor__DOT__catch_ebreak_TOP(VSimTop__Syms* __restrict vlSymsp, IData/*31:0*/ &i);

// FUNCTIONS
VSimTop__Syms::~VSimTop__Syms()
{
}

VSimTop__Syms::VSimTop__Syms(VerilatedContext* contextp, const char* namep,VSimTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__SimTop__DOT__my_core_top__DOT__my_dcache(Verilated::catName(namep, "SimTop.my_core_top.my_dcache"))
    , TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam(Verilated::catName(namep, "SimTop.my_core_top.my_dcache.CacheDataRam"))
    , TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam_1(Verilated::catName(namep, "SimTop.my_core_top.my_dcache.CacheDataRam_1"))
    , TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam_2(Verilated::catName(namep, "SimTop.my_core_top.my_dcache.CacheDataRam_2"))
    , TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam_3(Verilated::catName(namep, "SimTop.my_core_top.my_dcache.CacheDataRam_3"))
    , TOP__SimTop__DOT__my_core_top__DOT__my_icache(Verilated::catName(namep, "SimTop.my_core_top.my_icache"))
    , TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam(Verilated::catName(namep, "SimTop.my_core_top.my_icache.CacheDataRam"))
    , TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_1(Verilated::catName(namep, "SimTop.my_core_top.my_icache.CacheDataRam_1"))
    , TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_2(Verilated::catName(namep, "SimTop.my_core_top.my_icache.CacheDataRam_2"))
    , TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_3(Verilated::catName(namep, "SimTop.my_core_top.my_icache.CacheDataRam_3"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__SimTop__DOT__my_core_top__DOT__my_dcache = &TOP__SimTop__DOT__my_core_top__DOT__my_dcache;
    TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__CacheDataRam = &TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam;
    TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__CacheDataRam_1 = &TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam_1;
    TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__CacheDataRam_2 = &TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam_2;
    TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__PVT__CacheDataRam_3 = &TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam_3;
    TOP.__PVT__SimTop__DOT__my_core_top__DOT__my_icache = &TOP__SimTop__DOT__my_core_top__DOT__my_icache;
    TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__CacheDataRam = &TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam;
    TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__CacheDataRam_1 = &TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_1;
    TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__CacheDataRam_2 = &TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_2;
    TOP__SimTop__DOT__my_core_top__DOT__my_icache.__PVT__CacheDataRam_3 = &TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_3;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__SimTop__DOT__my_core_top__DOT__my_dcache.__Vconfigure(this, true);
    TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam.__Vconfigure(this, true);
    TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam_1.__Vconfigure(this, false);
    TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam_2.__Vconfigure(this, false);
    TOP__SimTop__DOT__my_core_top__DOT__my_dcache__CacheDataRam_3.__Vconfigure(this, false);
    TOP__SimTop__DOT__my_core_top__DOT__my_icache.__Vconfigure(this, false);
    TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam.__Vconfigure(this, false);
    TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_1.__Vconfigure(this, false);
    TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_2.__Vconfigure(this, false);
    TOP__SimTop__DOT__my_core_top__DOT__my_icache__CacheDataRam_3.__Vconfigure(this, false);
    // Setup scopes
    __Vscope_SimTop__my_core_top__my_id__my_inst_monitor.configure(this, name(), "SimTop.my_core_top.my_id.my_inst_monitor", "my_inst_monitor", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_SimTop__my_core_top__my_id__my_inst_monitor.exportInsert(__Vfinal, "catch_ebreak", (void*)(&VSimTop___024root____Vdpiexp_SimTop__DOT__my_core_top__DOT__my_id__DOT__my_inst_monitor__DOT__catch_ebreak_TOP));
    }
}
