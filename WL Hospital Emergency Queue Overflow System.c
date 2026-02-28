#include <stdio.h>
int main() {
    int maxCap,N,arrive,i=0,treated=0,rejected=0;
    scanf("%d",&maxCap);
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&arrive);
        if(treated+arrive<=maxCap) treated+=arrive;
        else {
            int canTreat=maxCap-treated;
            treated+=canTreat;
            rejected+=arrive-canTreat;
        }
        i++;
    }
    printf("Treated Patients: %d\n",treated);
    printf("Rejected Patients: %d\n",rejected);
    return 0;
}