// For std::unique_ptr
// #include <memory>

// Include common routines
#include <verilated.h>

// Include model header, generated from Verilating "top.v"
#include "VSimTop.h"
#include <verilated_vcd_c.h>
#include "svdpi.h"
#include "VSimTop__Dpi.h"
#include "verilated_dpi.h"
#include "sim_common.h"
#include "sim_cpu.h"
#include "sim_memory.h"
#include "sim_reg.h"
#include "sim_monitor.h"

#define RESET_TIME 5
#define MAX_STEP 0x7fffffff
#define INTR_T_NO ( ((uint64_t)1 << 63) | 0x7 )

static VerilatedContext * contextp = NULL;
static VSimTop * SimTop = NULL;
static VerilatedVcdC * tfp = NULL;
static FILE * debug_trace_fp = NULL;

NPCstate npc_state;
static uint64_t g_nr_step = 0;
static int ebreak_f = 0;
static int noninst_f = 0;
static uint64_t req_inst_addr = 0;
uint64_t cpu_pc;
uint64_t * cpu_inst = NULL;

extern "C" void set_inst_ptr(const svOpenArrayHandle a) {
  cpu_inst = (uint64_t *)(((VerilatedDpiOpenVar*)a)->datap());
}

void device_update();

// Legacy function required only so linking works on Cygwin and MSVC++
double sc_time_stamp() { return 0; }

void wave_end(){
#ifdef DUMPWAVE
    tfp->dump(contextp->time());
    tfp->close();
#endif
}

void wave_dump(){
#ifdef DUMPWAVE
    tfp->dump(contextp->time());
#endif
}

#define IRINGBUF_SIZE 32
#define IBUF_SIZE 64
struct iring{
  char buf[IRINGBUF_SIZE][IBUF_SIZE];
  int head;
} iringbuf;

#ifdef ITRACE
static void log_write_iringbuf(void){
  int temp = iringbuf.head;
  for(int i = 0; i < IRINGBUF_SIZE; ++i){
    if(iringbuf.buf[temp][0] != '\0'){
      printf("%s\n", iringbuf.buf[temp]);
    }
    if(temp == IRINGBUF_SIZE - 1)
      temp = 0;
    else
      temp++;
  }
}
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void write_itrace(uint64_t pc, uint64_t inst){
    char *p = iringbuf.buf[iringbuf.head];
    p += snprintf(p, IBUF_SIZE, "0x%08lx:", pc);
    int ilen = 4;
    int i;
    uint8_t *temp = (uint8_t *)(&inst);
    for (i = ilen - 1; i >= 0; i --) {
        p += snprintf(p, 4, " %02x", temp[i]);
    }
    memset(p, ' ', 4);
    p += 4;
    disassemble(p, IBUF_SIZE-(p-iringbuf.buf[iringbuf.head]), pc, (uint8_t *)&inst, ilen);
    if(iringbuf.head == (IRINGBUF_SIZE - 1))
    iringbuf.head = 0;
    else
    iringbuf.head += 1;
}
#endif

void set_npc_state(int state, uint64_t pc, uint32_t ret){
    npc_state.state = state;
    npc_state.halt_pc = pc;
    npc_state.halt_ret = ret;
}

void execute_once(){
    //printf("start %lx\n", cpu_pc);
    uint64_t old_pc = cpu_pc;
    while(cpu_pc != old_pc){
        // ----------------- NEG ----------------- 
        contextp->timeInc(1);
        SimTop->clock = !SimTop->clock;
        SimTop->eval();
        wave_dump();
        //output debug info
        /*
        fprintf(debug_trace_fp, "time = %ld pc=%lx wen=%d wnum=%d wdata=%lx\n",
                    contextp->time(), SimTop->io_core_debug_debug_pc, 
                    SimTop->io_core_debug_debug_rf_we,
                    SimTop->io_core_debug_debug_rf_wnum,
                    SimTop->io_core_debug_debug_rf_wdata);
        */
#ifdef ITRACE
        write_itrace(SimTop->io_core_debug_debug_pc, *cpu_inst);
#endif
        // ----------------- POS -----------------
        contextp->timeInc(1);
        SimTop->clock = !SimTop->clock;
        SimTop->eval();
        wave_dump();
        //update current pc
        cpu_pc = SimTop->io_core_debug_debug_pc;
        VSimTop::catch_ebreak(&ebreak_f);
        printf("cur_pc: %lx old_pc: %lx\n", cpu_pc, old_pc);
    }
}

void execute(uint64_t step){
    uint64_t count = 0;
    for(int i = 0; i < step; ++i){
        execute_once();
        g_nr_step++;
#ifdef DIFFTEST
        if(SimTop->io_core_debug_raise_intr) difftest_raise_intr(INTR_T_NO);
        difftest_step(SimTop->io_core_debug_debug_pc, SimTop->io_core_debug_debug_nextpc);
#endif
        if(npc_state.state != NPC_RUNNING) break;
        if(ebreak_f == 1){
            set_npc_state(NPC_END, SimTop->io_core_debug_debug_pc - 4, gpr(10));
            break;
        }else if(g_nr_step > MAX_STEP){
            set_npc_state(NPC_ABORT, SimTop->io_core_debug_debug_pc - 4, gpr(10));
            break;
        }
#ifdef DEVICE
        device_update();
#endif
    }
}

static void statistic(){
    // ----------------- Final model cleanup -----------------
    printf("total guest instructions %lu\n", g_nr_step);
    //if(npc_state.state == NPC_ABORT)
        dump_gpr(cpu_gpr);
    contextp->timeInc(1);
    wave_dump();
    SimTop->final();
#ifdef DUMPWAVE
    tfp->close();
#endif
}

void cpu_exec(uint64_t step){
    // ----------------- check state before execute -----------------
    switch (npc_state.state) {
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended. To restart the program, "
             "exit NPC and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
    }
    // ----------------- execute  -----------------
    execute(step);
    // ----------------- check npc state after execute -----------------
#ifdef ITRACE
    log_write_iringbuf();
#endif
    switch (npc_state.state) {
        case NPC_RUNNING: npc_state.state = NPC_STOP; break;
        case NPC_END: case NPC_ABORT:
        printf("npc: %s at pc = 0x%-16lx\n" ,
            (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
            (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
                ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
                npc_state.halt_pc);
        // fall through
        case NPC_QUIT: statistic();
    }
}

void init_cpu(){
    npc_state.state = NPC_RUNNING;
    SimTop->reset = 1;
    SimTop->clock = 1;
    SimTop->eval();
    wave_dump();
    g_nr_step = 0;
    //reset == 1 util negedge
    while (1) {
        contextp->timeInc(1);  
        SimTop->clock = !SimTop->clock;
        if (!SimTop->clock) { //negedge
            if(contextp->time() >= RESET_TIME) {
                SimTop->reset = 0;
                SimTop->eval();
                wave_dump();
                break;
            }
        }
        SimTop->eval();
        wave_dump();
    }
    //evaluate to first instruction posedge
    contextp->timeInc(1);
    SimTop->clock = !SimTop->clock;
    SimTop->eval();
    wave_dump();
    cpu_pc = SimTop->io_core_debug_debug_nextpc;
    printf("[npc] cpu init success!\n");
    npc_state.state = NPC_STOP;
}

void init_cpu_env(int argc, char** argv, char** env)
{
    contextp = new VerilatedContext;
    contextp->debug(0);
    //contextp->randReset(2);
    contextp->commandArgs(argc, argv);
    SimTop = new VSimTop(contextp, "TOP");
    contextp->traceEverOn(true);    //compute traced signals
#ifdef DUMPWAVE
    tfp = new VerilatedVcdC();
    SimTop->trace(tfp, 99);
    tfp->open("waveform.vcd");
#endif
    //set scope for exported function from verilog
    const svScope scope = svGetScopeFromName("TOP.SimTop.my_core_top.my_id.my_inst_monitor");
    assert(scope); // Check for nullptr if scope not found
    svSetScope(scope);
    printf("[npc] module init success!\n");

    debug_trace_fp = fopen("../debug_trace.txt", "w");
}