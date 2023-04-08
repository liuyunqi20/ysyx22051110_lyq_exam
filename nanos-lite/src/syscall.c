#include <common.h>
#include "syscall.h"
#include <fs.h>
#include <proc.h>

#define NR_SYSCALL 20

struct timeval {
  uint64_t tv_sec;     /* seconds */
  uint64_t tv_usec;    /* microseconds */
};
struct timezone {
  int tz_minuteswest;     /* minutes west of Greenwich */
  int tz_dsttime;         /* type of DST correction */
};
int rtc_gettimeofday(struct timeval *restrict tv, struct timezone *restrict tz);
void naive_uload(PCB *pcb, const char *filename);

#ifdef STRACE
static const char * sys_name[NR_SYSCALL] = {
  "sys_exit",
  "sys_yield",
  "sys_open",
  "sys_read",
  "sys_write",
  "sys_kill",
  "sys_getpid",
  "sys_close",
  "sys_lseek",
  "sys_brk",
  "sys_fstat",
  "sys_time",
  "sys_signal",
  "sys_execve",
  "sys_fork",
  "sys_link",
  "sys_unlink",
  "sys_wait",
  "sys_times",
  "sys_gettimeofday"
};
#endif

uint64_t brk(intptr_t new_brk){
  return 0;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; //a7
  a[1] = c->GPR2; //a0
  a[2] = c->GPR3; //a1
  a[3] = c->GPR4; //a2
  switch (a[0]) {
    case SYS_exit:
      //printf("exit with %d!\n", a[1]); 
      //halt(a[1]);
      naive_uload(NULL, "/bin/menu");
      break;
    case SYS_yield:
      yield(); 
      c->GPR2 = 0; 
      break;
    case SYS_open:
      c->GPR2 = fs_open((char*)a[1], a[2], a[3]);
      break;
    case SYS_read:
      c->GPR2 = fs_read(a[1], (void *)a[2], a[3]);
      break;
    case SYS_write:
      c->GPR2 = fs_write(a[1], (void *)a[2], a[3]);
      break;
    case SYS_close:
      c->GPR2 = fs_close(a[1]);
      break;
    case SYS_lseek:
      c->GPR2 = fs_lseek(a[1], a[2], a[3]);
      break;
    case SYS_brk:
      c->GPR2 = brk((intptr_t)a[1]);
      break;
    case SYS_execve:
      printf("sys exec %s\n", (char *)a[1]);
      naive_uload(NULL, (void *)a[1]);
      halt(-1);
    case SYS_gettimeofday:
      c->GPR2 = rtc_gettimeofday((void *)a[1], (void *)a[2]);
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
#ifdef STRACE
  if((a[0] >=0 ) && (a[0] <= NR_SYSCALL )){
    printf("%s(", sys_name[a[0]]);
    if(a[0] == SYS_read || a[0] == SYS_write || a[0] == SYS_lseek || a[0] == SYS_close)
      printf("%s, ", fd2str(a[1]));
    printf("%lx, %lx)\n", a[2], a[3]);
  }
#endif
}
