#include <am.h>
#include <nemu.h>
//int    printf    (const char *format, ...);
#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  int i;
  uint32_t vgactl_0 = inl(VGACTL_ADDR);
  int w = (int)(vgactl_0 >> 16) ; 
  int h = (int)(vgactl_0 & 0xffff);
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t vgactl_0 = inl(VGACTL_ADDR);
  int w = (int)(vgactl_0 >> 16) ; 
  int h = (int)(vgactl_0 & 0xffff);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = w * h * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t * cur_pixel = ctl->pixels;
  int fb_w = (int)(inl(VGACTL_ADDR) >> 16); 
  uint32_t *fb = ((uint32_t *)FB_ADDR) + (ctl->y) * fb_w + ctl->x;
  //printf("fb_w: %d, w: %d h: %d\n", fb_w, ctl->w, ctl->h);
  for(int i = 0; i < ctl->h; ++i){
    for(int j = 0; j < ctl->w; ++j){
      fb[j] = *cur_pixel;
      cur_pixel++;
    }
    fb += fb_w;
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
