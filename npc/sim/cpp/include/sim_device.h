#ifndef __SIM_DEVICE_H__
#define __SIM_DEVICE_H__

#include "sim_common.h"
#ifdef DEVICE
#include <SDL2/SDL.h>
#endif

void init_vga();
void vga_update_screen();

void init_i8042();


#endif