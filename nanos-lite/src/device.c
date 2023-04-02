#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

struct timeval {
  uint64_t tv_sec;     /* seconds */
  uint64_t tv_usec;    /* microseconds */
};
struct timezone {
  int tz_minuteswest;     /* minutes west of Greenwich */
  int tz_dsttime;         /* type of DST correction */
};

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  char * tmp = (char *)buf;
  int i;
  for(i =0 ; i < len; ++i){
    putch(*tmp);
    tmp++;
  }
  return i;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

int rtc_gettimeofday(struct timeval *restrict tv, struct timezone *restrict tz){
  uint64_t t = io_read(AM_TIMER_UPTIME).us;
  printf("get usec: %lx\n", t);
  (*tv).tv_usec = t;
  (*tv).tv_sec = t / 1000000;
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
