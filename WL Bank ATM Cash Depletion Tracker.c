#include <stdio.h>
int main() {
    int cash,N,withdraw,i=0,success=0;
    scanf("%d",&cash);
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&withdraw);
        if(cash<withdraw) break;
        cash-=withdraw;
        success++;
        i++;
    }
    printf("Successful Withdrawals: %d\n",success);
    printf("Remaining Cash: %d\n",cash);
    return 0;
}