// For std::unique_ptr
#include <memory>

// Include common routines
#include <verilated.h>

// Include model header, generated from Verilating "top.v"
#include "VSimTop.h"
#include <verilated_vcd_c.h>
#include "svdpi.h"
#include "VSimTop__Dpi.h"
#include "verilated_dpi.h"
#include "sim_monitor.h"
#include "sim_common.h"
#include "sim_cpu.h"

void sdb_mainloop();

int main(int argc, char** argv, char** env) {
    // Prevent unused variable warnings
    if (false && argc && argv && env) {}
    //initialize cpu execute environment
    init_cpu_env(argc, argv, env);
    //initialize monitor
    init_monitor(argc, argv);
    //enter sbd mainloop
    sdb_mainloop();
    return 0;
}
