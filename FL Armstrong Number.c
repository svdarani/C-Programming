
#include <stdio.h>
#include <math.h> 

int main() {
    int N, temp, digit, sum = 0, digits = 0;

    scanf("%d", &N);

    temp = N;
    while(temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = N;  
    while(temp > 0) {
        digit = temp % 10;          
        sum = sum + pow(digit, digits);         
        temp = temp / 10;                   
    }

    if(sum == N) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

// Armstrong Number //

