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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int buf_idx;

void gen(char c){
  buf[buf_idx++] = c;
}

int choose(int n){
  return rand() % n;
}

void gen_num(){
  int sign = rand() & 1;
  int i = (rand() % 99) + 1;
  if(sign == 1){
    gen('(');
    gen('-');
  }
  //gen('n');gen('u');gen('m');
  sprintf(buf+buf_idx, "%d", i);
  int cnt =0;
  while(i != 0){
    i /= 10;
    cnt++;
  }
  buf_idx += cnt;
    if(sign == 1){
    gen(')');
  }
}

void gen_rand_op(){
  int op = rand() % 4;
  gen(' ');
  switch(op){
    case 0: gen('+'); break;
    case 1: gen('-'); break;
    case 2: gen('*'); break;
    case 3: gen('/'); break;
    default: gen('+'); break;
  }
  gen(' ');
}

static void gen_rand_expr(int depth) {
  if(depth != 0){
    int c = choose(3);
    switch (c) {
      case 0: gen_num(); break;
      case 1: gen('('); gen_rand_expr(depth-1); gen(')'); break;
      default: gen_rand_expr(depth-1); gen_rand_op(); gen_rand_expr(depth-1); break;
    }
  }else{
    gen_num();
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    //test
    buf_idx = 0;
    memset(buf, 0, 1000);
    //test
    gen_rand_expr(10);
    
    //printf("%s\n", buf);

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc -O2 -Wall -Werror /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    if(fscanf(fp, "%d", &result)==0){;}
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
