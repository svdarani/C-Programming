
#include <stdio.h>
int main() {
    int fuel,N,burn,i=0,stage=0,wasted=0;
    scanf("%d",&fuel);
    scanf("%d",&N);
    while(i<N && fuel>=0){
        scanf("%d",&burn);
        fuel-=burn;
        stage=i+1;
        if(fuel<0){
            wasted=-fuel;
            break;
        }
        i++;
    }
    if(fuel>=0) {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0\n");
    } else {
        printf("Emergency Stage: %d\n",stage);
        printf("Fuel Wasted: %d\n",wasted);
    }
    return 0;
}