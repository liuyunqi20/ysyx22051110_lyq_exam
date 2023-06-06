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
    // DPI export at /home/llyyqq/Desktop/ysyx/ysyx-workbench/npc/playground/src/vsrc/InstMonitor.v:10:10
    extern void catch_ebreak(int* i);

    // DPI IMPORTS
    // DPI import at /home/llyyqq/Desktop/ysyx/ysyx-workbench/npc/playground/src/vsrc/Read_mem_port.v:9:34
    extern void cpu_dmem_read(svBit en, svBit wr, long long raddr, long long* rdata);
    // DPI import at /home/llyyqq/Desktop/ysyx/ysyx-workbench/npc/playground/src/vsrc/Write_mem_port.v:8:34
    extern void cpu_dmem_write(svBit en, svBit wr, long long waddr, long long wdata, char wmask);
    // DPI import at /home/llyyqq/Desktop/ysyx/ysyx-workbench/npc/playground/src/vsrc/RegFileV.v:20:33
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/llyyqq/Desktop/ysyx/ysyx-workbench/npc/playground/src/vsrc/InstMonitor.v:7:34
    extern void set_inst_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
