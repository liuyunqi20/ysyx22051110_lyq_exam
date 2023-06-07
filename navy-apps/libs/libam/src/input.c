#include <am.h>
#include <navy.h>

#define KEYDOWN_MASK 0x8000

void libam_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t code = inl(KBD_ADDR);
  kbd->keydown = code & KEYDOWN_MASK;
  kbd->keycode = code & ~KEYDOWN_MASK;
}
