#ifndef __SIM_REG_H__
#define __SIM_REG_H__

#include "sim_common.h"
#include "verilated_dpi.h"

extern uint64_t *cpu_gpr;

static inline int check_reg_idx(int idx) {
  assert(idx >= 0 && idx < 32);
  return idx;
}

#define gpr(idx) (cpu_gpr[check_reg_idx(idx)])

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r);

void dump_gpr(uint64_t * gpr);
int reg_str2val(char *s, uint64_t *val);

#endif