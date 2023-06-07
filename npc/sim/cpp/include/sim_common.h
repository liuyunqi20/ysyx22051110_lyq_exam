#ifndef __SIM_COMMON_H__
#define __SIM_COMMON_H__

#define str_temp(x) #x
#define str(x) str_temp(x)

#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)

#define MAP(c, f) c(f)

#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE

#include<cstdio>
#include<cstdint>
#include<cassert>
#include<cstring>
#include<cstdlib>

typedef struct {
  int state;
  uint64_t halt_pc;
  uint32_t halt_ret;
} NPCstate;

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

#endif