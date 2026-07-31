
#include <stdio.h>
int main() {
    int S,count=0;
    scanf("%d",&S);
    for(int temp=S; temp>0; temp/=10){
        int digit = temp % 10;
        if (digit % 2 ==0){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

// Count Even Digits

