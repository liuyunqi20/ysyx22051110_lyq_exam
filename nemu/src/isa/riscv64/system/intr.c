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
uint64_t mip, mie;
#define MSTATUS_MASK 0x0000000f00001888
#define MPIE_MASK    0x0000000000000080
#define MIE_MASK     0x0000000000000008
#define MPP_MASK     0x0000000000001800
#define MTVEC_MASK   0xfffffffffffffffc
#define MEPC_MASK    0xfffffffffffffffc
#define IRQ_MASK     ((uint64_t)1 << 63)

word_t csr_rw(uint32_t csr_num, uint64_t wdata){
  word_t res;
  //printf("rw %lx\n", wdata);
  switch(csr_num){
    case 0x300: res = mstatus; mstatus = wdata; break;
    case 0x305: res = mtvec;   mtvec   = wdata; break;
    case 0x341: res = mepc;    mepc    = wdata; break;
    case 0x342: res = mcause;  mcause  = wdata; break;
    case 0x304: res = mie;     mie     = wdata; break;
    case 0x344: res = mip;     mip     = wdata; break;
    default:
          printf("rwcsr_unm: %x\n", csr_num);
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
    case 0x304: res = mie;     mie     |= wmask; break;
    case 0x344: res = mip;     mip     |= wmask; break;
    default:
      printf("rscsr_unm: %x\n", csr_num);
      assert(0);
  }
  //printf("rs: %lx\n", res);
  return res;
}

word_t csr_rc(uint32_t csr_num, uint64_t wmask){
  word_t res;
  switch(csr_num){
    case 0x300: res = mstatus; mstatus &= ~wmask; break;
    case 0x305: res = mtvec;   mtvec   &= ~wmask; break;
    case 0x341: res = mepc;    mepc    &= ~wmask; break;
    case 0x342: res = mcause;  mcause  &= ~wmask; break;
    case 0x304: res = mie;     mie     &= ~wmask; break;
    case 0x344: res = mip;     mip     &= ~wmask; break;
    default:
        printf("rccsr_unm: %x\n", csr_num);
      assert(0);
  }
  return res;
}

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
#ifdef CONFIG_ETRACE
  printf("trigger exception %ld at pc = %lx\n", NO, epc);
#endif
  mepc = epc;                                       //set exc inst addr to mepc
  mcause = NO;                                      //set exc code to mcause
  uint64_t is_mie = mstatus & MIE_MASK;
  mstatus &= ~MIE_MASK;                             //set mie to 0
  mstatus = (is_mie << 4) | (mstatus & ~MPIE_MASK); //set mie to mpie
  //printf("epc: %lx\nmcause: %lx\nmstatus: %lx\n", mepc, mcause, mstatus);
  //printf("mtvec: %lx\n", mtvec);
  return mtvec;
}

word_t isa_intr_ret(){
  uint64_t is_mpie = mstatus & MPIE_MASK;
  mstatus  = (is_mpie >> 4) | (mstatus & ~MIE_MASK); //set mpie to mie
  mstatus |= MPIE_MASK;                              // set mpie to 1'b1
  mstatus |= MPP_MASK;                               //set mpp to 2'b11
  if(mcause & IRQ_MASK){ //intrrupt
    return mepc;
  }else{                 //exception
    return mepc + 4;
  }
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
