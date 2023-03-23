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

#include "sdb.h"

#define NR_WP 32


static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }
  head = NULL;
  free_ = wp_pool;
}

WP * new_wp(char * s){
  if(free_ == NULL)
    assert(0);
  WP * temp = free_;
  free_ = free_->next;
  //initialize watchpoint
  int i;
  for(i = 0; i < LEN_WP_EXPR && s[i] != '\0'; ++i){
    temp->expr_str[i] = s[i];
  }
  if(i == LEN_WP_EXPR) {
    printf("expr in watchpoint is too long!\n");
    assert(0);
  }
  temp->expr_str[i] = '\0';
  bool flag;
  //printf("new_wp: %s\n", temp->expr_str);
  temp->val = expr(temp->expr_str, &flag);
  if(!flag)
    assert(0);
  //printf("watchpoint %d: %s %lu\n", temp->NO, temp->expr_str, temp->val);
  //insert to head list
  temp->next = head;
  head = temp;
  return head;
}

void free_wp(WP * wp){
  if(wp == NULL)
    return;
  if(head == wp){
    //delete head node
    WP * temp = head;
    head = head->next;

    //insert wp to free list
    temp->next = free_;
    free_ = temp;
  }else{
    //find forward node of wp
    WP * h = head;
    while(h && h->next != wp)
      h = h->next;
    h->next = wp->next;

    //insert wp to free list
    wp->next = free_;
    free_ = wp;
  }
} 

void print_wp(){
  WP * h = head;
  while(h){
    printf("watchpoint %d: %s %lu\n", h->NO, h->expr_str, h->val);
    h = h->next;
  }
}

int check_wp(){
  WP * h = head;
  int flag = 1;
  while(h){
    bool expr_flag;
    word_t temp = expr(h->expr_str, &expr_flag);
    if(temp != h->val){
      flag = 0;
      printf("watchpoint %d: %s\n\n", h->NO, h->expr_str);
      printf("Old value = %lu\n", h->val);
      printf("New value = %lu\n", temp);
      h->val = temp;
    }
    h = h->next;
  }
  return flag;
}