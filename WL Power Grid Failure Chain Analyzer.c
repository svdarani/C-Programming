#include <stdio.h>
int main() {
    int capacity,N,load,i=0,safe=0,failure=0;
    scanf("%d",&capacity);
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&load);
        if(load>capacity) failure++;
        else safe++;
        i++;
    }
    printf("Safe Hours: %d\n",safe);
    printf("Failure Count: %d\n",failure);
    return 0;
}