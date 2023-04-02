#include <stdio.h>
#include <unistd.h>
#include <NDL.h>

#define TIMER_HZ 6000

int main(){
    int count = 0;
    uint32_t cur_tick = NDL_GetTicks(); 
    while(count < 20){
        while((NDL_GetTicks() - cur_tick) / 6000 < 500000) {;}
        printf("What a nice day!\n");
        count++;
        cur_tick = NDL_GetTicks();
    }
    return 0;
}