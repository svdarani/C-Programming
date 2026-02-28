#include <stdio.h>
int main() {
    int maxWeight,N,weight,total=0,entered=0,i=0;
    scanf("%d",&maxWeight);
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&weight);
        if(total+weight>maxWeight) break;
        total+=weight;
        entered++;
        i++;
    }
    printf("People Entered: %d\n",entered);
    if(total>maxWeight) printf("Overload Status: Yes\n");
    else printf("Overload Status: No\n");
    return 0;
}