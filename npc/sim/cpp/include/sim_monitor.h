#ifndef __SIM_MONITOR_H__
#define __SIM_MONITOR_H__

#include "sim_common.h"
#include "sim_memory.h"
#include "sim_reg.h"

#define LEN_WP_EXPR 100

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char expr_str[LEN_WP_EXPR];
  uint64_t val;
} WP;

// ------------------ monitor ------------------
int init_image();
void init_monitor(int argc, char *argv[]);
// ------------------ sdb ------------------
void init_sdb();
// ------------------ expr ------------------
void init_regex();
uint64_t expr(char *e, bool *success);
// ------------------ watchpoint ------------------
void init_wp_pool();
void free_wp(WP * wp);
WP * new_wp(char * s);
void print_wp();
int check_wp();
void init_sdb();
// ------------------ device ------------------
void init_device();

#endif

