#include <stdio.h>
int main() {
    int N,val,prev,drops=0,streak=0,crashDay=-1,i=0;
    scanf("%d",&N);
    scanf("%d",&prev);
    i=1;
    while(i<N){
        scanf("%d",&val);
        if(val<prev){
            drops++;
            streak++;
            if(streak==3 && crashDay==-1) crashDay=i+1;
        } else streak=0;
        prev=val;
        i++;
    }
    if(crashDay==-1) printf("Crash Day: Not Detected\n");
    else printf("Crash Day: %d\n",crashDay);
    printf("Total Drops: %d\n",drops);
    return 0;
}