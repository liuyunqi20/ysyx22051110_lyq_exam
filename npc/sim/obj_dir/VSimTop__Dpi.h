// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at ../build/SimTop.v:3179:9
    extern void catch_ebreak(int* i);

    // DPI IMPORTS
    // DPI import at ../build/SimTop.v:3274:37
    extern void cpu_dmem_read(svBit en, svBit wr, long long raddr, long long* rdata);
    // DPI import at ../build/SimTop.v:3292:37
    extern void cpu_dmem_write(svBit en, svBit wr, long long waddr, long long wdata, char wmask);
    // DPI import at ../build/SimTop.v:3206:33
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at ../build/SimTop.v:3176:33
    extern void set_inst_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
