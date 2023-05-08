#include "sim_monitor.h"
#include <readline/readline.h>
#include <readline/history.h>

void cpu_exec(uint64_t step);

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

#define NR_CMD 6
static int cmd_help(char *args);
static int cmd_c(char *args);
static int cmd_q(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },

  /* TODO: Add more commands */
  { "si", "Execute by one step", cmd_si },
  { "info", "Print info", cmd_info },
  { "x", "Scan memory", cmd_x }
};

static int cmd_q(char *args){
  return -1;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

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
    dump_gpr(cpu_gpr);
  }else{
    uint64_t val;
    if(reg_str2val(arg, &val))
      printf("%s = 0x%-16lx\n", arg, val);
    else 
      printf("No such value!\n");
  }
  return 0;
}

static int cmd_x(char * args){
  int nr_byte;
  uint64_t addr;
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

void sdb_mainloop(){
  printf("enter sdb main \n");
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

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

void init_sdb(){
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}

