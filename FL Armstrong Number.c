
#include <stdio.h>
#include <math.h> 

int main() {
    int N, temp, digit, sum = 0, digits = 0;

    scanf("%d", &N);

    t = N;
    while(t > 0) {
        digits++;
        t = t / 10;
    }

    t = N;  
    while(t > 0) {
        digit = t % 10;          
        sum = sum + pow(digit, digits);         
        t = t / 10;                   
    }

    if(sum == N) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

// Armstrong Number //

