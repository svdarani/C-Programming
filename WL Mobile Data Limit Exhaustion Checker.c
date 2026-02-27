 
#include <stdio.h>
int main() {
    int totalData,N,usage,days=0,i=0;
    scanf("%d",&totalData);
    scanf("%d",&N);
    while(i<N && totalData>0){
        scanf("%d",&usage);
        totalData-=usage;
        days++;
        if(totalData<=0) totalData=0;
        i++;
    }
    printf("Days Used: %d\n",days);
    printf("Remaining Data: %dGB\n",totalData);
    return 0;
}  