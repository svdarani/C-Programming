#include <stdio.h>
int main() {
    int N, noise, count=0, streak=0, maxStreak=0, i=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&noise);
        if(noise>70){
            count++;
            streak++;
            if(streak>maxStreak) maxStreak=streak;
        } else streak=0;
        i++;
    }
    printf("Noise Violations: %d\n",count);
    printf("Longest Violation Streak: %d\n",maxStreak);
    return 0;
}