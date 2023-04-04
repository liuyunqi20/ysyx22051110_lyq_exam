#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  FILE * f = fopen(filename, "r");
  int size = fseek(f, 0, SEEK_END);
  printf("size of %s is %d\n", filename, size);
  fseek(f, 0, SEEK_SET);
  char * buf = SDL_malloc(size);
  fread(buf, size, 1, f);
  SDL_Surface * res = STBIMG_LoadFromMemory(buf, size);
  fclose(f);
  free(buf);
  return res;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
