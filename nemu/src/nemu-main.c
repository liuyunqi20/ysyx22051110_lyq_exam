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

#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  //engine_start();
  /* Test Expr */
  word_t expr(char *e, bool *success);
  FILE *fp = fopen("/home/llyyqq/ics2022/nemu/input", "r");
  assert(fp != NULL);
  bool flag;
  char buf[200];
  unsigned result;
  for(int i = 0; i < 8; ++i){
    if(fscanf(fp, "%u", &result) == 0) {
      printf("no result\n");
    }
    if(fgets(buf, 199, fp) == 0) {;}
    buf[strlen(buf)-1] = '\0';
    printf("%u %s\n",result, buf);
    word_t temp = expr(buf ,&flag);
    printf("result: %u-%u\n", result, (unsigned)temp);
  }

  return is_exit_status_bad();
}
