#include <stdio.h>
int main() {
    int n, temp, remainder;
    int sum=0;
    scanf("%d",&n);
    temp = n;
    for (; temp!=0; temp=temp / 10){
        remainder= temp % 10;
        sum=sum + remainder;
    }
    printf("%d", sum);
    return 0;
}

//Sum of Digits

