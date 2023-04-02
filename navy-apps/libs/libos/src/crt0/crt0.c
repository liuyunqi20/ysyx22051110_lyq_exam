#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  char *empty[] =  {NULL };
  environ = empty;
  int ret = main(0, empty, empty);
  printf("main returned %d\n", ret);
  exit(ret);
  assert(0);
}
