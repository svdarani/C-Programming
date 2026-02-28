#include <stdio.h>
int main() {
    int fuel,N,consumed,trips=0,i=0;
    scanf("%d",&fuel);
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&consumed);
        if(fuel<consumed) break;
        fuel-=consumed;
        trips++;
        i++;
    }
    printf("Completed Trips: %d\n",trips);
    printf("Remaining Fuel: %d\n",fuel);
    return 0;
}