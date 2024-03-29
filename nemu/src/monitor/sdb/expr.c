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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NEQ, TK_AND,
  /* TODO: Add more token types */
  TK_ADD, TK_MINUS, TK_MULT, TK_DIV,
  TK_DNUM, TK_HNUM, TK_LP, TK_RP, 
  TK_NEG, TK_DEREF, TK_REG
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},       // not equal
  {"&&", TK_AND},       // and
  {"\\+", TK_ADD},      // plus
  {"-", TK_MINUS},      // minus
  {"\\*", TK_MULT},     // mult
  {"/", TK_DIV},        // div
  {"0x[a-f,A-F,0-9]+", TK_HNUM}, // hex num
  {"[0-9]+", TK_DNUM},  // dex num
  {"\\(", TK_LP},       // left parentheses
  {")", TK_RP},         // right parentheses
  {"\\$[a-z,0-9]+", TK_REG} //registers
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[128] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            //i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        switch (rules[i].token_type) {
          case TK_NOTYPE:
            break;
          case TK_EQ: case TK_NEQ: case TK_AND:
          case TK_ADD: case TK_MINUS: case TK_MULT: 
          case TK_DIV: case TK_DNUM: case TK_HNUM: 
          case TK_LP: case TK_RP: case TK_REG:
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token++].str[substr_len] = '\0';
            break;
          default: 
            Log("Unknown token\n");
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool check_parentheses(int p, int q){
  int nr_p = 0;
  //printf("%d %d nr:%d\n", p, q, nr_token);
  for(int i = p; i <= q; ++i){
    //printf("check: %d %s\n",i, tokens[i].str);
    if(tokens[i].type == TK_LP){
      nr_p += 1;
    }else if(tokens[i].type == TK_RP){
      if(nr_p > 0)
        nr_p -= 1;
      else{
        printf("bad expression at %s(%d)\n",tokens[i].str, i);
        assert(0);
      }
    }
    if(nr_p == 0 && i < q)
      return false;
  }
  //Log("nr_p=%d, t[p]:%s t[q]:%s",nr_p, tokens[p].str, tokens[q].str);
  if(nr_p == 0 && tokens[p].type == TK_LP 
        && tokens[q].type == TK_RP) 
    return true;
  else if (nr_p == 0)
    return false;
  else
    assert(0);
}

int get_primary_op(int p, int q){
  int temp = -1;  //position of primary operator
  int op_prio = 0;  //priority of operators
  for(int i = p; i <= q; ++i){
    //skip nested parentheses
    //Log("tokens[%d]: %s", i, tokens[i].str);
    if(tokens[i].type == TK_LP){
      int nr_p = 1;
      while(i <= q){
        if(tokens[++i].type == TK_LP) 
          nr_p++;
        else if(tokens[i].type == TK_RP)
          nr_p--;
        if(nr_p == 0) 
          break;
      }
    //set op '+' and '-' as primary op
    }else if((tokens[i].type == TK_ADD || tokens[i].type == TK_MINUS)
      && op_prio <= 4){
      temp = i;
      op_prio = 4;
    //set op '*' and '/' as primary op
    }else if((tokens[i].type == TK_MULT || tokens[i].type == TK_DIV) 
      && op_prio <= 3){
      temp = i;
      op_prio = 3;
    //set op '==' and '!=' as primary op
    }else if((tokens[i].type == TK_EQ || tokens[i].type == TK_NEQ)
      && op_prio <= 7){
      temp = i;
      op_prio = 7;
    //set op '&&' as primary op
    }else if(tokens[i].type == TK_AND && op_prio <= 11){
      temp = i;
      op_prio = 11;
    }
  }
  //printf("primary token: %s(%d)\n", tokens[temp].str, temp);
  if(temp == -1)
    return p;
  return temp;
}

word_t expr_eval(int p, int q){
  if (p > q) {
      /* Bad expression */
      assert(0);
    }
    else if (p == q) {
      /* Single token.
      * For now this token should be a number.
      * Return the value of the number.
      */
      if(tokens[p].type == TK_DNUM){
        return atoi(tokens[p].str);
      }else if(tokens[p].type == TK_HNUM){
        char * temp_ptr;
        return strtol(tokens[p].str, &temp_ptr, 16);
      }else if(tokens[p].type == TK_REG){
        bool flag;
        word_t res = isa_reg_str2val(tokens[p].str, &flag);
        if(flag)  
          return res;
        else
          assert(0);
      }else
        assert(0);
    }
    else if (check_parentheses(p, q) == true) {
      /* The expression is surrounded by a matched pair of parentheses.
      * If that is the case, just throw away the parentheses.
      */
      return expr_eval(p + 1, q - 1);
    }
    else {
      int op = get_primary_op(p, q);
      word_t val1 = 0, val2 = 0;

      if(tokens[op].type == TK_NEG || tokens[op].type == TK_DEREF)
        val1 = expr_eval(op + 1, q);
      else{
        val1 = expr_eval(p, op - 1);
        val2 = expr_eval(op + 1, q);
      }

      switch (tokens[op].type) {
        case TK_ADD: return val1 + val2;
        case TK_MINUS: return val1 - val2;
        case TK_MULT: return val1 * val2;
        case TK_DIV: return val1 / val2;
        case TK_NEG: return -val1;
        case TK_EQ: return val1 == val2;
        case TK_NEQ: return val1 != val2;
        case TK_AND: return val1 && val2;
	case TK_DEREF: return *((word_t *)(uint64_t)val1);
        default: assert(0);
      }
    }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  
  for(int i = 0; i < nr_token; ++i){

    if(tokens[i].type == TK_MINUS 
      && (i == 0 || (tokens[i - 1].type != TK_DNUM && tokens[i - 1].type != TK_REG
        && tokens[i - 1].type != TK_HNUM && tokens[i - 1].type != TK_RP))){
        tokens[i].type = TK_NEG;
    }

    if (tokens[i].type == TK_MULT 
      && (i == 0 || (tokens[i - 1].type != TK_DNUM && tokens[i - 1].type != TK_REG
        && tokens[i - 1].type != TK_HNUM && tokens[i - 1].type != TK_RP))) {
      tokens[i].type = TK_DEREF;
    }
  }
  /* TODO: Insert codes to evaluate the expression. */
  
  word_t res =  (word_t)expr_eval(0, nr_token-1);
  *success = true;
  return res;
}
