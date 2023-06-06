#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  printf("SDL_BlitSurface\n");
  int x1 ,y1, w1, h1, x1_min, x1_max, y1_max;
  int x2, y2, w2, h2, x2_min, x2_max, y2_max;
  if(srcrect == NULL){
    x1 = 0;
    y1 = 0;
    w1 = src->w;
    h1 = src->h;
  }
  else{
    x1 = srcrect->x;
    y1 = srcrect->y;
    w1 = srcrect->w;
    h1 = srcrect->h;
  }
  if(dstrect == NULL){
    x2 = 0;
    y2 = 0;
    w2 = w1;
    h2 = h1;
  }
  else{
    x2 = dstrect->x;
    y2 = dstrect->y;
    w2 = w1;
    h2 = h1;
  }
  x1_min = x1;      x2_min = x2;
  x1_max = x1 + w1; x2_max = x2 + w2;
  y1_max = y1 + h1; y2_max = y2 + h2;
  //超出部分截断
  if(x1_max > src->w){x1_max = src->w;}
  if(y1_max > src->h){y1_max = src->h;}
  if(x2_max > dst->w){x2_max = dst->w;}
  if(y2_max > dst->h){y2_max = dst->h;}
  int offset1, offset2;
  if(src->format->palette != NULL && dst->format->palette != NULL){ //使用调色板
    while(y1 < y1_max && y2 < y2_max){
      while(x1 < x1_max && x2 < x2_max){
        offset1 = x1 + y1 * src->w;
        offset2 = x2 + y2 * dst->w;
        *((uint8_t *)dst->pixels + offset2) = *((uint8_t *)src->pixels + offset1);
        x1++; x2++;
      }
      y1++; y2++;
      x1 = x1_min; x2 = x2_min;
    }
  }
  else{
    while(y1 < y1_max && y2 < y2_max){
      while(x1 < x1_max && x2 < x2_max){
        offset1 = x1 + y1 * src->w;
        offset2 = x2 + y2 * dst->w;
        *((uint32_t *)dst->pixels + offset2) = *((uint32_t *)src->pixels + offset1);
        x1++; x2++;
      }
      y1++; y2++;
      x1 = x1_min; x2 = x2_min;
    }
  }
}

//往画布的指定矩形区域中填充指定的颜色
void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
  printf("SDL_FillRect\n");
  int x, y, w, h, x_min, x_max, y_max;
  if(dstrect == NULL){
    x = 0;
    y = 0;
    w = dst->w;
    h = dst->h;
  }
  else{
    x = dstrect->x;
    y = dstrect->y;
    w = dstrect->w;
    h = dstrect->h;
  }
  x_min = x;
  x_max = x + w;
  y_max = y + h;
  //超出部分截断
  if(x_max > dst->w){
    x_max = dst->w;
  }
  if(y_max > dst->w){
    y_max = dst->h;
  }
  int offset;
  int i;  
  if(dst->format->palette != NULL){ //使用调色板
    uint8_t num;
    uint32_t _color = (color << 8) | (color >> 24);
    int n = dst->format->palette->ncolors;
    for(num = 0; num < n; num++){
      if((dst->format->palette->colors + num)->val == _color){
        break;
      }
    }
    for(; y < y_max; y++){
      for(; x < x_max; x++){
        offset = x + y * dst->w;
        *(dst->pixels + offset) = num;
      }
      x = x_min;
    }
  }
  else{
    for(; y < y_max; y++){
      for(; x < x_max; x++){
        offset = x + y * dst->w;
        *((uint32_t *)dst->pixels + offset) = color;
      }
      x = x_min;
    }
  }
}

void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  int draw_w = s->w;
  int draw_h = s->h;
  printf("SDL_UpdateRect\n");
  NDL_OpenCanvas(&draw_w, &draw_h);
  if(s->format->palette != NULL){   //使用调色板
    uint8_t pixels[480000];
    int i = 0;
    for(i = 0; i < draw_w * draw_h; i++){
      uint8_t num = *(s->pixels + i);
      SDL_Color *color = (SDL_Color *)(s->format->palette->colors + num);
      pixels[i * 4] = color->b;
      pixels[i * 4 + 1] = color->g;
      pixels[i * 4 + 2] = color->r;
      pixels[i * 4 + 3] = color->a;
    }
    if(x == 0 && y == 0 && w == 0 && h == 0){
      NDL_DrawRect(pixels, 0, 0, draw_w, draw_h);
    }
    else{
      NDL_DrawRect(pixels, x, y, w, h);
    }
  }
  else{
    if(x == 0 && y == 0 && w == 0 && h == 0){
      NDL_DrawRect(s->pixels, 0, 0, draw_w, draw_h);
    }
    else{
      NDL_DrawRect(s->pixels, x, y, w, h);
    }
  }
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
}