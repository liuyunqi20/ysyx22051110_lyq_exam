#include <NDL.h>
#include <SDL.h>
#include <stdio.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  printf("SDL_PushEvent not implemented\n");
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  if(!NDL_PollEvent(buf, sizeof(buf)))
    return 0;
  char * temp = NULL;
  if(ev == NULL) return 1;
  if((temp = strstr(buf, "kd")) && (temp == buf)){
    ev->type = SDL_KEYDOWN;
    ev->key.type = SDL_KEYDOWN;
    buf[strlen(buf) - 1] = '\0';
    temp += 2;
    while((*temp) == ' ') temp++;
    char keystr[16];
    strncpy(keystr, temp, sizeof(keystr));
    for(int i = 0; i < (sizeof(keyname)/sizeof(char *)); ++i)
      if(!strcmp(keyname[i], keystr)){
        ev->key.keysym.sym = i;
        break;
      }
  }else if((temp = strstr(buf, "ku")) && (temp == buf)){
    ev->type = SDL_KEYUP;
    ev->key.type = SDL_KEYUP;
    buf[strlen(buf) - 1] = '\0';
    temp += 2;
    while((*temp) == ' ') temp++;
    char keystr[16];
    strncpy(keystr, temp, sizeof(keystr));
    for(int i = 0; i < (sizeof(keyname)/sizeof(char *)); ++i)
      if(!strcmp(keyname[i], keystr)){
        ev->key.keysym.sym = i;
        break;
      }
  }else
    ev->type = SDL_USEREVENT;
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  while(!NDL_PollEvent(buf, sizeof(buf))){;}
  char * temp = NULL;
  if((temp = strstr(buf, "kd")) && (temp == buf)){
    event->type = SDL_KEYDOWN;
    event->key.type = SDL_KEYDOWN;
    buf[strlen(buf) - 1] = '\0';
    temp += 2;
    while((*temp) == ' ') temp++;
    char keystr[16];
    strncpy(keystr, temp, sizeof(keystr));
    for(int i = 0; i < (sizeof(keyname)/sizeof(char *)); ++i)
      if(!strcmp(keyname[i], keystr)){
        event->key.keysym.sym = i;
        break;
      }
  }else if((temp = strstr(buf, "ku")) && (temp == buf)){
    event->type = SDL_KEYUP;
    event->key.type = SDL_KEYUP;
    buf[strlen(buf) - 1] = '\0';
    temp += 2;
    while((*temp) == ' ') temp++;
    char keystr[16];
    strncpy(keystr, temp, sizeof(keystr));
    for(int i = 0; i < (sizeof(keyname)/sizeof(char *)); ++i)
      if(!strcmp(keyname[i], keystr)){
        event->key.keysym.sym = i;
        break;
      }
  }else
    event->type = SDL_USEREVENT;
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents not implemented\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  static uint8_t keystate[(sizeof(keyname)/sizeof(char*))];
  SDL_Event event;
  while(SDL_PollEvent(&event)){
    if(event.type == SDL_KEYDOWN)
      keystate[(event.key.keysym.sym)] = 1;
  }
  return keystate;
}
