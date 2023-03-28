#include "sim_cpu.h"
#include "sim_reg.h"
#include <dlfcn.h>

#define DIFFTEST_TO_REF 1
#define DIFFTEST_TO_DUT 0
#define DIFFTEST_REG_SIZE (sizeof(uint64_t) * 31)

void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, int direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, int direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

void init_difftest(char *ref_so_file, long img_size, int port){
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (void(*)(uint64_t, void*, size_t, int))dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void(*)(void*, int))dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void(*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    ref_difftest_raise_intr = (void(*)(uint64_t))dlsym(handle, "difftest_raise_intr");
    assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)(int) = (void(*)(int))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    printf("Differential testing: %s\n", ANSI_FMT("ON", ANSI_FG_GREEN));
    printf("The result of every instruction will be compared with %s. \n", ref_so_file);

    ref_difftest_init(port);
    ref_difftest_memcpy(MBASE, (void*)get_pmem_addr(MBASE), img_size, DIFFTEST_TO_REF);
    printf("cpugpr:%lx\n",(uint64_t)cpu_gpr);
    ref_difftest_regcpy(cpu_gpr, DIFFTEST_TO_REF);
    /*CPU_state temp;
    ref_difftest_regcpy((void *)&temp, DIFFTEST_TO_DUT);
    printf("test REF gpr:\n");
        dump_gpr((uint64_t *)(&temp));
    printf("test cpu gpr: \n");
        dump_gpr(cpu_gpr);*/
    printf("[npc] difftest init success!\n");
}

static void checkregs(CPU_state *ref_r, vaddr_t pc) {
    int flag = 0;
    if(!memcmp(&(ref_r->gpr[1]), &(gpr(1)), DIFFTEST_REG_SIZE) &&
        (ref_r->pc == pc))
        flag = 1;
    else
        flag = 0;
    if (flag == 0) {
        extern uint64_t cpu_pc;
        printf("REF gpr: ref_pc=%lx cpu_pc=%lx\n", ref_r->pc, cpu_pc);
        dump_gpr((uint64_t *)ref_r);
        set_npc_state(NPC_ABORT, pc, gpr(10));
    }
}

void difftest_step(vaddr_t pc){
    CPU_state ref_r;
    //REF execute one step
    ref_difftest_exec(1);
    //copy regs from REF
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    //check reg and pc
    checkregs(&ref_r, pc);
}