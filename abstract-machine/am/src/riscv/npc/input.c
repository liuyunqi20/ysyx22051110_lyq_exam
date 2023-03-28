#include <am.h>
#include "riscv/riscv.h"
#define KBD_ADDR     0x80000060
#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t code = inl(KBD_ADDR);
  kbd->keydown = code & KEYDOWN_MASK;
  kbd->keycode = code & ~KEYDOWN_MASK;
}
