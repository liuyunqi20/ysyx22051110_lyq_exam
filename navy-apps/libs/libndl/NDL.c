#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

uint32_t NDL_GetTicks() {
  struct timeval t;
  int ret = gettimeofday(&t, NULL);
  return t.tv_usec;
}

int NDL_PollEvent(char *buf, int len) {
  FILE * fd_ev = fopen("/dev/events", "r");
  char * ret = fgets(buf, len, fd_ev);
  fclose(fd_ev);
  if(ret != NULL)
    return 1;
  else
    return 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  char strbuf[64];
  FILE * fd_dinfo = fopen("/proc/dispinfo", "r");
  printf("fd_dinfo: %lx %d\n",(uint64_t)fd_dinfo, *(int *)fd_dinfo);
  int ret = fgets(strbuf, sizeof(strbuf), fd_dinfo);
  if(ret == 0) {
    printf("read /proc/dispinfo failed\n"); 
    return;
  }
  char * temp = NULL;
  //width
  char * w_pos = strstr(strbuf, "WIDTH");
  if(w_pos == NULL){
    *w = 0;
    printf("No canvas width\n");
    return;
  }
  while(*w_pos != ':' && *w_pos != ' ') w_pos++;
  while((*w_pos == ':' || *w_pos == ' ') && *w_pos != '\0') w_pos++;
  temp = w_pos;
  while(*temp != '\n' && *temp != '\0') temp++;
  *w = atoi(w_pos);
  screen_w = *w;
  fgets(strbuf, sizeof(strbuf), fd_dinfo);
  //height
  char * h_pos = strstr(strbuf, "HEIGHT");
  if(h_pos == NULL){
    *h = 0;
    printf("No canvas height\n");
    return;
  }
  while(*h_pos != ':' && *h_pos != ' ') h_pos++;
  while((*h_pos == ':' || *h_pos == ' ') && *h_pos != '\0') h_pos++;
  temp = h_pos;
  while(*temp != '\n' && *temp != '\0') temp++;
  *temp = '\0';
  *h = atoi(h_pos);
  screen_h = *h;
  //close /proc/dispinfo
  close(fd_dinfo);
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  int fb_dev = (int)(uint64_t)fopen("/dev/fb", "w");
  int offset = screen_w * y + x;
  for(int i = 0; i < h; ++i){
    fseek((FILE *)(uint64_t)fb_dev, offset, SEEK_SET);
    write(fb_dev, pixels, w);
    offset += screen_w;
  }
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
