#include <stdio.h>
#include <unistd.h>
#include <NDL.h>

#define TIMER_HZ 1

int main(){
    int count = 0;
    printf("timer test begin: \n");
    uint32_t cur_tick = NDL_GetTicks(); 
    while(count < 20){
        while((NDL_GetTicks() - cur_tick) / TIMER_HZ < 500000) {;}
        printf("What a nice day!\n");
        count++;
        cur_tick = NDL_GetTicks();
    }
    printf("timer test end\n");
    return 0;
}