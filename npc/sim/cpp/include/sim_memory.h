#ifndef __SIM_MEMORY_H__
#define __SIM_MEMORY_H__

#include "sim_common.h"
#include "verilated_dpi.h"

#define PG_ALIGN __attribute((aligned(4096)))
#define MSIZE 0x8000000
#define MBASE 0x80000000

extern "C" void cpu_dmem_read(svBit en, svBit wr, long long raddr, long long * rdata);
extern "C" void cpu_dmem_write(svBit en, svBit wr, long long waddr, long long wdata, char wmask);
uint64_t get_pmem_addr(uint64_t paddr);
uint64_t vaddr_read(uint64_t addr, int len);
void vaddr_write(uint64_t addr, int len, uint64_t data);
uint64_t pmem_read(uint64_t addr, int len);
void pmem_write(uint64_t addr, int len, uint64_t data);

#endif