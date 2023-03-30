#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

#define INTR_BIT ((uint64_t)1 << 63)

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    uint64_t exc_code = (c->mcause) & ~INTR_BIT;
    //printf("%d\n", c->mcause);
    if(((c->mcause) & INTR_BIT)){
      switch (exc_code) { 
        case 7:  ev.event = EVENT_IRQ_TIMER; break;
        default: ev.event = EVENT_ERROR; break;
      }
    }else{
      switch (exc_code) {
        case 11: ev.event = EVENT_YIELD; break;
        default: ev.event = EVENT_ERROR; break;
      }
    }
    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize mstatus (for difftest)
  asm volatile("csrw mstatus, %0" : : "r"(0xa00001800));
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
