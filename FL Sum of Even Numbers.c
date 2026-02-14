#include <stdio.h>
int main() {
    int N, Sum=0;
    scanf("%d",&N);
    for(int i = 2; i <= N; i++)
    if(i%2 == 0)
    Sum+= i;
    {
    printf("%d ",Sum);
        
    }
    return 0;
} 

//Sum of Even Numbers
