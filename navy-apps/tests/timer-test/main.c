#include <stdio.h>
#include <unistd.h>
#include <NDL.h>

#define TIMER_HZ 6000

int main(){
    int count = 0;
    printf("timer test begin: (0.5s)\n");
    uint32_t cur_tick = NDL_GetTicks(); 
    printf("%d\n", NDL_GetTicks());
    for(int i =0 ; i < 10000; i++) ++i;
    printf("%d\n" , NDL_GetTicks())
    while(count < 20){
        while((NDL_GetTicks() - cur_tick) / 6000 < 500000) {;}
        printf("What a nice day!\n");
        count++;
        cur_tick = NDL_GetTicks();
    }
    printf("timer test end\n");
    return 0;
}