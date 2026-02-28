#include <stdio.h>
int main() {
    int balance,N,purchase,i=0,success=0;
    scanf("%d",&balance);
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&purchase);
        if(balance<purchase) break;
        balance-=purchase;
        success++;
        i++;
    }
    printf("Successful Purchases: %d\n",success);
    printf("Final Balance: %d\n",balance);
    return 0;
}