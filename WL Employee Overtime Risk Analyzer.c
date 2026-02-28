#include <stdio.h>
int main() {
    int N,hours,total=0,risk=0,i=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&hours);
        total+=hours;
        if(hours>4) risk++;
        i++;
    }
    printf("Total Overtime: %d\n",total);
    printf("Burnout Days: %d\n",risk);
    return 0;
}