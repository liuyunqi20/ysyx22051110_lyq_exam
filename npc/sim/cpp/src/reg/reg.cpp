#include "sim_reg.h"

uint64_t *cpu_gpr = NULL;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

void dump_gpr(uint64_t * gpr) {
  int i;
  for (i = 1; i < 32; i++) {
    printf("%s = 0x%-16lx ", reg_name(i, 64), gpr[i]);
    if(i % 3 == 0)
        printf("\n");
  }
  printf("\n");
}

int reg_str2val(char *s, uint64_t *val){
  if(!strncmp(s, regs[0], 3)){
    *val = 0;
    return 1;
  }
  for(int i = 1; i < 32; ++i){
    if(!strncmp(s, regs[i], 3)){
      *val = gpr(i);
      return 1;
    }
  }
  return 0; 
}