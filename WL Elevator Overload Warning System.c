
#include <stdio.h>
int main() {
    int maxWeight,N,weight,total=0,allowed=0,i=0;
    scanf("%d",&maxWeight);
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&weight);
        if(total+weight>maxWeight) break;
        total+=weight;
        allowed++;
        i++;
    }
    printf("Passengers Allowed: %d\n",allowed);
    if(total>maxWeight) printf("Overload: Yes\n");
    else printf("Overload: No\n");
    return 0;
}