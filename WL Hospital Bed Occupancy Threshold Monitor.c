
#include <stdio.h>
int main() {
    int capacity,N,change,occupied=0,critical=0,i=0;
    scanf("%d",&capacity);
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&change);
        occupied+=change;
        if(occupied>capacity) occupied=capacity;
        if(occupied>capacity*0.9) critical++;
        i++;
    }
    printf("Final Occupied Beds: %d\n",occupied);
    printf("Critical Hours: %d\n",critical);
    return 0;
}