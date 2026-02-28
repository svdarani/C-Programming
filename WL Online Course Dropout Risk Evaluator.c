#include <stdio.h>
int main() {
    int N,hours,inactive=0,i=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&hours);
        if(hours==0) inactive++;
        i++;
    }
    printf("Inactive Weeks: %d\n",inactive);
    if(inactive>=3) printf("Risk Status: High\n");
    else printf("Risk Status: Low\n");
    return 0;
}