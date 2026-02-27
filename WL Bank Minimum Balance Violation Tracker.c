#include <stdio.h>
int main() {
    int N, initialBalance, transaction, balance, lowDays=0, i=0;
    scanf("%d",&N);
    scanf("%d",&initialBalance);
    balance=initialBalance;
    while(i<N){
        scanf("%d",&transaction);
        balance+=transaction;
        if(balance<2000) lowDays++;
        i++;
    }
    printf("Final Balance: %d\n",balance);
    printf("Low Balance Days: %d\n",lowDays);
    return 0;
}