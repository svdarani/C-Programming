#include <stdio.h>
int mai   n() {
    int N,status,streak=0,maxStreak=0,i=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&status);
        if(status==0){
            streak++;
            if(streak>maxStreak) maxStreak=streak;
        } else streak=0;
        i++;
    }
    printf("Longest Failure Streak: %d\n",maxStreak);
    return 0;
}