#include <stdio.h>
int main() {
    int N, vehicles, minutes=0, streak=0, maxStreak=0, i=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&vehicles);
        if(vehicles>20){
            minutes++;
            streak++;
            if(streak>maxStreak) maxStreak=streak;
        } else streak=0;
        i++;
    }
    printf("Congestion Minutes: %d\n",minutes);
    printf("Longest Congestion Streak: %d\n",maxStreak);
    return 0;
}