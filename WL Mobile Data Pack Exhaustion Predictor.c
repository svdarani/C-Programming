#include <stdio.h>
int main() {
    int dataPack,N,usage,i=0,day=0,overused=0;
    scanf("%d",&dataPack);
    scanf("%d",&N);
    while(i<N && dataPack>0){
        scanf("%d",&usage);
        dataPack-=usage;
        day=i+1;
        if(dataPack<0){
            overused=-dataPack;
            break;
        }
        i++;
    }
    if(dataPack>=0) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n",day);
        printf("Overused Data: %d\n",overused);
    }
    return 0;
}