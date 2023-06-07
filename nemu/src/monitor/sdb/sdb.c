/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/vaddr.h>
#include "sdb.h"
#include <memory/paddr.h>
#include <difftest-def.h>

static int is_batch_mode = false;
extern bool difftest_en;

void init_regex();
void init_wp_pool();

extern uint64_t mepc;
extern uint64_t mcause;
extern uint64_t mtvec;
extern uint64_t mstatus;
extern uint64_t mip;
extern uint64_t mie;
int isa_set_csr_instseq(uintptr_t * addr);
extern void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  set_nemu_state(NEMU_QUIT, 0, 0);
  return -1;
}

static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_w(char *args);
static int cmd_detach(char * args);
static int cmd_attach(char * args);
static int cmd_save(char * args);
static int cmd_load(char * args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Execute by one step", cmd_si },
  { "info", "Print info", cmd_info },
  { "x", "Scan memory", cmd_x },
  { "w", "Set watchpoint", cmd_w},
  { "detach", "exit diff mode", cmd_detach},
  { "attach", "enter diff mode", cmd_attach},
  { "save", "save snapshot", cmd_save},
  { "load", "load snapshot", cmd_load},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char * args){
  char * arg = strtok(NULL, " ");
  int nr_step;
  if(arg == NULL)
    nr_step = 1;
  else
   nr_step = atoi(arg);
  cpu_exec(nr_step);
  return 0;
}

static int cmd_info(char * args){
  char *arg = strtok(NULL, " ");
  if(arg == NULL){
    printf("Invalid info command!\n");
  }else if(!strcmp(arg, "r") || !strcmp(arg, "register")){
    isa_reg_display();
  }else if(!strcmp(arg, "w") || !strcmp(arg, "watchpoints")){
    print_wp();
  }
  return 0;
}

static int cmd_x(char * args){
  int nr_byte;
  word_t addr;
  //get memory print size
  char *arg = strtok(NULL, " ");
  if(arg == NULL){
    printf("Usage: x N EXPR\n");
  }
  nr_byte = atoi(arg);
  //get memory print base address
  arg = strtok(NULL, " ");
  if(arg == NULL){
    printf("missing base address\n");
  }
  char * temp_ptr;
  addr = strtol(arg, &temp_ptr, 16);
  //print memory
  int i = nr_byte;
  while(i > 0){
    printf("0x%lx   ", addr);
    for(int j = 0; j < 4; ++j){
      uint32_t temp = vaddr_read(addr, 4); 
      printf(" %08x", temp);
      i -= 4;
      addr += 4;
      if(i <= 0)
        break;
    }
    printf("\n");
  }
  return 0;
}

static int cmd_w(char * args){
  char * arg = strtok(NULL, " ");
  if(arg == NULL){
    printf("Usage: w [EXPR]\n");
    return 0;
  }
  WP * temp = new_wp(arg);
  printf("watchpoint %d: %s %lu\n", 
    temp->NO, temp->expr_str, temp->val);
  return 0;
}

static int cmd_detach(char * args){
  difftest_en = false;
  return 0;
}

static int cmd_attach(char * args){
  difftest_en = true;
  //TODO: copy csr to ref
  uintptr_t iaddr = 0;
  int steps = isa_set_csr_instseq(&iaddr);
  ref_difftest_memcpy(RESET_VECTOR, (void *)iaddr, steps * 4, DIFFTEST_TO_REF);
    //TODO: set pc to insts
  ref_difftest_exec(steps);
  //copy memory from dut to ref
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), CONFIG_MSIZE, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
  return 0;
}

static int cmd_save(char * args){
  char * arg = strtok(NULL, " ");
  if(arg == NULL){
    printf("Usage: save [PATH]\n");
    return 0;
  }
  FILE * fd = fopen(arg, "wb");
  if(fd == NULL){
    printf("failed to create snapshot %s\n", arg);
    return 0;
  }
  fseek(fd, 0, SEEK_SET);
  fwrite(&cpu, sizeof(cpu), 1, fd);
  uint64_t csr_regs[6] = {mepc, mcause, mtvec, mstatus, mip, mie};
  fwrite(csr_regs, sizeof(csr_regs), 1, fd);
  fwrite(guest_to_host(RESET_VECTOR), CONFIG_MSIZE, 1, fd);
  return 0;
}

static int cmd_load(char * args){
  char * arg = strtok(NULL, " ");
  if(arg == NULL){
    printf("Usage: load [PATH]\n");
    return 0;
  }
  FILE * fd = fopen(arg, "r");
  if(fd == NULL){
    printf("failed to open snapshot %s\n", arg);
    return 0;
  }
  int ret;
  fseek(fd, 0, SEEK_SET);
  ret = fread(&cpu, sizeof(cpu), 1, fd);
  if(!ret) printf("read cpu failed\n");
  uint64_t csr_regs[6];
  ret = fread(csr_regs, sizeof(csr_regs), 1, fd);
  if(!ret) printf("read csr failed\n");
  mepc    = csr_regs[0];
  mcause  = csr_regs[1];
  mtvec   = csr_regs[2];
  mstatus = csr_regs[3];
  mip     = csr_regs[4];
  mie     = csr_regs[5];
  ret = fread(guest_to_host(RESET_VECTOR), CONFIG_MSIZE, 1, fd);
  if(!ret) printf("read memory failed\n");
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
