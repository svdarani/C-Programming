#include <stdio.h>
int main() {
    int N, usage, max=0, surge=0, i=0;
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&usage);
        if(usage>max) max=usage;
        if(usage>5) surge++;
        i++;
    }
    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d\n",surge);
    return 0;
}