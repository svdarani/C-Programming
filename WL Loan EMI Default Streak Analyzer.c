#include <stdio.h>
int main() {
    int N,payment,streak=0,maxStreak=0,i=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&payment);
        if(payment==0){
            streak++;
            if(streak>maxStreak) maxStreak=streak;
        } else streak=0;
        i++;
    }
    printf("Longest Default Streak: %d\n",maxStreak);
    return 0;
}