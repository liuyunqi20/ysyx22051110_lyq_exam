#ifndef __SIM_CPU_H__
#define __SIM_CPU_H__
#include "sim_common.h"
#include "sim_memory.h"

typedef struct {
    uint64_t gpr[32];
    uint64_t pc;
} CPU_state;

typedef uint64_t vaddr_t;

void init_cpu_env(int argc, char** argv, char** env);
void init_cpu();
void set_npc_state(int state, uint64_t pc, uint32_t ret);

void init_difftest(char *ref_so_file, long img_size, int port);
void difftest_step(vaddr_t pc);
#endif