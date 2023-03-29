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

uint64_t mepc;
uint64_t mcause;
uint64_t mtvec;
uint64_t mstatus;

word_t csr_rw(uint32_t csr_num, uint64_t wdata){
  word_t res;
  printf("trigger rw\n");
  switch(csr_num){
    case 0x300: res = mstatus; mstatus = wdata; break;
    case 0x305: res = mtvec;   mtvec   = wdata; break;
    case 0x341: res = mepc;    mepc    = wdata; break;
    case 0x342: res = mcause;  mcause  = wdata; break;
    default:
      assert(0);
  }
  return res;
}

word_t csr_rs(uint32_t csr_num, uint64_t wmask){
  word_t res;
  switch(csr_num){
    case 0x300: res = mstatus; mstatus |= wmask; break;
    case 0x305: res = mtvec;   mtvec   |= wmask; break;
    case 0x341: res = mepc;    mepc    |= wmask; break;
    case 0x342: res = mcause;  mcause  |= wmask; break;
    default:
      assert(0);
  }
  printf("rs: %lx\n", res);
  return res;
}

word_t csr_rc(uint32_t csr_num, uint64_t wmask){
  word_t res;
  switch(csr_num){
    case 0x300: res = mstatus; mstatus &= ~wmask; break;
    case 0x305: res = mtvec;   mtvec   &= ~wmask; break;
    case 0x341: res = mepc;    mepc    &= ~wmask; break;
    case 0x342: res = mcause;  mcause  &= ~wmask; break;
    default:
      assert(0);
  }
  return res;
}

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  mepc = epc;
  mcause = NO;
  printf("epc: %lx\nmcause: %lx\nmstatus: %lx\n", mepc, mcause, mstatus);
  printf("mtvec: %lx\n", mtvec);
  return mtvec;
}

word_t isa_intr_ret(){
  return mepc + 4;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
