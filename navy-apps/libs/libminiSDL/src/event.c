#include <NDL.h>
#include <SDL.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

static uint8_t keystate[(sizeof(keyname)/sizeof(char*))];

int str2keysym(char * buf){
  for(int i = 0; i < (sizeof(keyname)/sizeof(char *)); ++i)
    if(!strcmp(keyname[i], buf + 3)){
      return i;
    }
  assert(0);
}

int SDL_PushEvent(SDL_Event *ev) {
  printf("SDL_PushEvent not implemented\n");
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  if(ev == NULL) return 1;
  if(!NDL_PollEvent(buf, sizeof(buf)))
    return 0;
  printf("buf: %s\n", buf);
  if(buf[0] == 'k' && buf[1] == 'd'){
    ev->type = SDL_KEYDOWN;
    ev->key.type = SDL_KEYDOWN;
    ev->key.keysym.sym = str2keysym(buf);
    printf("poll event %d down\n", ev->key.keysym.sym);
    keystate[ev->key.keysym.sym] = 1;
  }else if(buf[0] == 'k' && buf[0] == 'u'){
    ev->type = SDL_KEYUP;
    ev->key.type = SDL_KEYUP;
    ev->key.keysym.sym = str2keysym(buf);
    printf("poll event %d up\n", ev->key.keysym.sym);
    keystate[ev->key.keysym.sym] = 0;
  }else{
    ev->type = SDL_USEREVENT;
    return 0;
  }
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  while(!NDL_PollEvent(buf, sizeof(buf))){;}
  if(buf[0] == 'k' && buf[1] == 'd'){
    event->type = SDL_KEYDOWN;
    event->key.type = SDL_KEYDOWN;
    event->key.keysym.sym = str2keysym(buf);
    keystate[event->key.keysym.sym] = 1;
  }else if(buf[0] == 'k' && buf[0] == 'u'){
    event->type = SDL_KEYUP;
    event->key.type = SDL_KEYUP;
    event->key.keysym.sym = str2keysym(buf);
    keystate[event->key.keysym.sym] = 0;
  }else
    event->type = SDL_USEREVENT;
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents not implemented\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  // SDL_Event event;
  // while(SDL_PollEvent(&event)){
  //   if(event.type == SDL_KEYDOWN)
  //     keystate[(event.key.keysym.sym)] = 1;
  //   else if(event.type == SDL_KEYUP)
  //     keystate[(event.key.keysym.sym)] = 0;
  // }
  return keystate;
}
