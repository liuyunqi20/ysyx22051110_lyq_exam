#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>

int main() {
  NDL_Init(0);
  int w, h;
  int sw, sh;
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  //printf("bmp w: %d, h: %d\n", w, h);
  assert(bmp);
  NDL_OpenCanvas(&sw, &sh);
  //printf("w: %d h: %d\n", sw, sh);
  NDL_DrawRect(bmp, sw/2 - w/2, sh/2 - h/2, w, h);
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
