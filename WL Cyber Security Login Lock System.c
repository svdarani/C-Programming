#include <stdio.h>
int main() {
    int N, attempt, fails=0, totalFails=0, lock=-1, i=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&attempt);
        if(attempt==0){
            fails++;
            totalFails++;
            if(fails==3 && lock==-1) lock=i+1;
        } else fails=0;
        i++;
    }
    if(lock==-1) printf("Lock Triggered At Attempt: Not Locked\n");
    else printf("Lock Triggered At Attempt: %d\n",lock);
    printf("Total Failed Attempts: %d\n",totalFails);
    return 0;
}