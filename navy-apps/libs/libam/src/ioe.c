#include <am.h>
#include <navy.h>
void libam_timer_init();
void libam_gpu_init();
void libam_audio_init();
void libam_input_keybrd(AM_INPUT_KEYBRD_T *);
void libam_timer_rtc(AM_TIMER_RTC_T *);
void libam_timer_uptime(AM_TIMER_UPTIME_T *);
void libam_gpu_config(AM_GPU_CONFIG_T *);
void libam_gpu_status(AM_GPU_STATUS_T *);
void libam_gpu_fbdraw(AM_GPU_FBDRAW_T *);

static void libam_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void libam_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true;  }
static void libam_uart_config(AM_UART_CONFIG_T *cfg)   { cfg->present = false; }

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = libam_timer_config,
  [AM_TIMER_RTC   ] = libam_timer_rtc,
  [AM_TIMER_UPTIME] = libam_timer_uptime,
  [AM_INPUT_CONFIG] = libam_input_config,
  [AM_INPUT_KEYBRD] = libam_input_keybrd,
  [AM_GPU_CONFIG  ] = libam_gpu_config,
  [AM_GPU_FBDRAW  ] = libam_gpu_fbdraw,
  [AM_GPU_STATUS  ] = libam_gpu_status,
  [AM_UART_CONFIG ] = libam_uart_config,
};

static void fail(void *buf) { printf("ioe not supported\n"); }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]) lut[i] = fail;
  return true;
}

void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
