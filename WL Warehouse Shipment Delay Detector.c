#include <stdio.h>
int main() {
    int N, delay, total=0, delayedDays=0, i=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&delay);
        total+=delay;
        if(delay>2) delayedDays++;
        i++;
    }
    printf("Total Delay: %d\n",total);
    printf("Delayed Days: %d\n",delayedDays);
    return 0;
}