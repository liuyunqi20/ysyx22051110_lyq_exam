#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <fcntl.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int offset_center = 0;
static int fb_dev = -1;

uint32_t NDL_GetTicks() {
  struct timeval t;
  int ret = gettimeofday(&t, NULL);
  return t.tv_usec;
}

int NDL_PollEvent(char *buf, int len) {
  int ret = read(evtdev, buf, len);
  if(ret > 0){
    return 1;
  }else
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
  char * ret = NULL;
  char * temp = NULL;
  int h_flag = 0, w_flag = 0;
  while((ret = fgets(strbuf, sizeof(strbuf), fd_dinfo)) != NULL){
    //printf("strbuf: %s\n", strbuf);
    char * w_pos = strstr(strbuf, "WIDTH");
    char * h_pos = strstr(strbuf, "HEIGHT");
    if(w_pos != NULL){
        while(*w_pos != ':' && *w_pos != ' ') w_pos++;
        while((*w_pos == ':' || *w_pos == ' ') && *w_pos != '\0') w_pos++;
        temp = w_pos;
        while(*temp != '\n' && *temp != '\0') temp++;
        screen_w = atoi(w_pos);
        //printf("find w: %d\n", *w);
        w_flag = 1;
    }else if(h_pos != NULL){
        while(*h_pos != ':' && *h_pos != ' ') h_pos++;
        while((*h_pos == ':' || *h_pos == ' ') && *h_pos != '\0') h_pos++;
        temp = h_pos;
        while(*temp != '\n' && *temp != '\0') temp++;
        *temp = '\0';
        screen_h = atoi(h_pos);
        //printf("find h: %d\n", *h);
        h_flag = 1;
    }
    if(w_flag && h_flag)
      break;
  }
  if((*w == 0) && (*h == 0)){
    *w = screen_w;
    *h = screen_h;
    offset_center = 0;
  }else{
    offset_center = (screen_h-(*h))*screen_w/2 + (screen_w-(*w))/2;
  }
  if(!w_flag)
    printf("screen width read failed\n");
  if(!h_flag)
    printf("screen height read failed\n");
  //close /proc/dispinfo
  fclose(fd_dinfo);
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  //printf("x: %d y: %d w: %d h: %d\n", x, y, w, h);
  int offset_pix = screen_w * y + x;
  //to center
  offset_pix += offset_center;
  uint32_t * temp = (uint32_t *)pixels;
  for(int i = 0; i < h; ++i){
    //printf("offset_pix: %d\n", offset_pix);
    //fseek(fb_dev, offset_pix * sizeof(uint32_t), SEEK_SET);
    //fwrite((void *)temp, w * sizeof(uint32_t), 1, fb_dev);
    lseek(fb_dev, offset_pix * sizeof(uint32_t), 0);
    write(fb_dev, (void *)temp, w * sizeof(uint32_t));
    offset_pix += screen_w;
    temp += w;
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
  evtdev = open("/dev/events", O_RDONLY);
  fb_dev = open("/dev/fb", 0);
  return 0;
}

void NDL_Quit() {
  close(evtdev);
  close(fb_dev);
}
