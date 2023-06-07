#include <am.h>
#include <navy.h>

void libam_timer_init() {
}

void libam_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t hi = (uint64_t)inl(RTC_ADDR + 4) << 32;
  uint64_t lo = (uint64_t)inl(RTC_ADDR);
  uptime->us = hi + lo;
}

void libam_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
