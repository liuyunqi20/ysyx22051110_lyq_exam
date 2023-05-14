#include "sim_memory.h"
#include "sys/time.h"

#define RTC_ADDR    0xa0000048
#define SERIAL_PORT 0xa00003f8
#define FB_ADDR     0xa1000000
#define VGACTL_ADDR 0xa0000100
#define KBD_ADDR    0xa0000060
#define MT_ADDR         0xbff8
#define MTCMP_ADDR      0x4000

extern uint64_t vga_ctl;
extern void * vgafb_mem;
uint32_t i8042_data_io_handler();
void difftest_skip_ref();
void wave_end();


static uint8_t pmem[MSIZE] PG_ALIGN = {};

static uint64_t mtrace_max_addr = 0x80000000 + MSIZE;
static uint64_t mtrace_min_addr = 0x8000a000;

extern uint64_t cpu_pc;

uint64_t get_pmem_addr(uint64_t paddr) { return (uint64_t)(pmem + (paddr - MBASE)); }

uint64_t vaddr_read(uint64_t addr, int len){
  //printf("raddr: %lx pc=0x%lx\n", addr, cpu_pc);
  assert((addr >= MBASE) && (addr < (MBASE + MSIZE)));
  return pmem_read(get_pmem_addr(addr), len);
}

void vaddr_write(uint64_t addr, int len, uint64_t data){
  //printf("waddr: %lx\n", addr);
  assert((addr >= MBASE) && (addr < (MBASE + MSIZE)));
  pmem_write(get_pmem_addr(addr), len, data);
}

uint64_t pmem_read(uint64_t addr, int len) {
  //printf("0x%lx", (uint64_t)addr);
  uint64_t ret = 0;
  switch (len) {
    case 1: ret = *(uint8_t  *)addr; break;
    case 2: ret = *(uint16_t *)addr; break;
    case 4: ret = *(uint32_t *)addr; break;
    case 8: ret = *(uint64_t *)addr; break;
    default: assert(0);
  }
  //printf(" :0x%x\n", (uint32_t)ret);
  return ret;
}

void pmem_write(uint64_t addr, int len, uint64_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = (uint8_t)data; return;
    case 2: *(uint16_t *)addr = (uint16_t)data; return;
    case 4: *(uint32_t *)addr = (uint32_t)data; return;
    case 8: *(uint64_t *)addr = (uint64_t)data; return;
    default: assert(0);
  }
}

extern "C" void cpu_dmem_read(svBit en, svBit wr, long long raddr, long long * rdata){
  if(en && !wr){
    //printf("raddr: %lx\n", raddr);
    raddr = raddr & ~0x7;
    // ---------------- mmio ---------------- 
      if((uint64_t)raddr == (uint64_t)MT_ADDR || (uint64_t)raddr == (uint64_t)MTCMP_ADDR){
        difftest_skip_ref();
        return;
      }
      if(raddr == RTC_ADDR) { 
        struct timeval temp;
        gettimeofday(&temp, NULL);
        *rdata = (long long)temp.tv_usec;
        //printf("time: %ld\n", temp.tv_usec);
        difftest_skip_ref();
        return;
      }
      if(raddr == VGACTL_ADDR) {
        *rdata = vga_ctl;
        difftest_skip_ref();
        return;
      }
      if(raddr == KBD_ADDR) {
        *rdata = i8042_data_io_handler();
        difftest_skip_ref();
        return;
      }
    // ---------------- memory ---------------- 
    if(!(raddr >= MBASE && raddr < (MBASE + MSIZE))){
       printf("pc: %lx r: %lx\n", cpu_pc, (uint64_t)raddr); wave_end(); }
    //     *rdata = 0; return;}
    assert(raddr >= MBASE && raddr < (MBASE + MSIZE));
    uint64_t ret;
    ret = (long long)vaddr_read(raddr, 8);
    *rdata = ret;

#ifdef MTRACE
  if((raddr >= mtrace_min_addr) && (raddr < mtrace_max_addr))
    printf("0x%08x: r %016lx at pc=%lx\n", (uint32_t)raddr, ret, cpu_pc);
#endif
  }
}

extern "C" void cpu_dmem_write(svBit en, svBit wr, long long waddr, long long wdata, char wmask){
  if(en && wr){
    waddr = waddr & ~0x7;
    //printf("waddr: %llx wdata: %llx\n", waddr, wdata);
    // ---------------- mmio ---------------- 
      if((uint64_t)waddr == (uint64_t)MT_ADDR || (uint64_t)waddr == (uint64_t)MTCMP_ADDR){
        difftest_skip_ref();
        return;
      }
      if((uint64_t)waddr == (uint64_t)SERIAL_PORT) { 
        putchar((uint8_t)wdata); 
        difftest_skip_ref();
        return;
      }
      if((uint64_t)waddr == (uint64_t)VGACTL_ADDR) { 
        if((uint8_t)wmask == 0xf0)
          vga_ctl |= ((wdata << 32) & 0xffffffff00000000);
        difftest_skip_ref();
        return;
      }
      if((uint64_t)waddr >= (uint64_t)FB_ADDR)     { 
        uint64_t offset = (uint64_t)waddr - FB_ADDR;
        if((uint8_t)wmask == 0xf0){
          *(uint32_t *)((uint64_t)vgafb_mem + offset + 4) = (uint32_t)wdata;
        }
        else if((uint8_t)wmask == 0x0f){
          *(uint32_t *)((uint64_t)vgafb_mem + offset) = (uint32_t)wdata;
        }
        difftest_skip_ref();
        return;
      }
    // ---------------- memory ---------------- 
    if(!(waddr >= MBASE && waddr < (MBASE + MSIZE))){
      printf("pc: %lx w: %lx %lx\n", cpu_pc, (uint64_t)waddr, (uint64_t)wdata); wave_end();
    }
    assert(waddr >= MBASE && waddr < (MBASE + MSIZE));
    uint64_t temp_data = wdata;
    int len = 0;
    for(int i = 0; i < 8; ++i){
      if(wmask & (1 << i)){
        len +=1;
        vaddr_write((uint64_t)((uint8_t*)waddr + i), 1, temp_data);
      }
      temp_data = temp_data >> 8;
    }

#ifdef MTRACE
  if((waddr >= mtrace_min_addr) && (waddr < mtrace_max_addr))
    printf("%d %d0x%08x: w len:%d mask:%02x %016lx at pc=%08x\n", 
          (uint32_t)waddr, len, (uint8_t)wmask, 
          (uint64_t)wdata, (uint32_t)cpu_pc);
#endif
  }
}