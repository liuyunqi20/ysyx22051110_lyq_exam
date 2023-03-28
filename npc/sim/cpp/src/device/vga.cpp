#include "sim_device.h"

uint64_t vga_ctl = 0;

#define SCREEN_W 400
#define SCREEN_H 300

static void *vmem = NULL;
static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "%s-NEMU", str(__GUEST_ISA__));
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * 2,
      SCREEN_H * 2,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen() {
  uint32_t ret = (uint32_t)(vga_ctl >> 32);
  if(ret)
    update_screen();
  vga_ctl = vga_ctl & ~0xffffffff00000000;
}

void init_vga() {
  vga_ctl = (SCREEN_W << 16) | SCREEN_H;
  vga_ctl = vga_ctl & ~0xffffffff00000000;

  vmem = malloc(SCREEN_W * SCREEN_H * sizeof(uint32_t));
  init_screen();
  memset(vmem, 0, SCREEN_W * SCREEN_H * sizeof(uint32_t));
}