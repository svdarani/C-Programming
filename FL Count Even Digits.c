
#include <stdio.h>
int main() {
    int N,count=0;
    scanf("%d",&N);
    for(int temp=N; temp>0; temp/=10){
        int digit = temp % 10;
        if (digit % 2 ==00){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

// Count Even Digits

