
#include <stdio.h>
#include <math.h>

int main() {
    int N, digit, decimal = 0, base = 0;
    scanf("%d", &N);
    while(N > 0) {
        digit = N % 10;
        decimal = decimal + digit * pow(2, base); 
        N = N / 10; 
        base++;         
    }
    printf("%d\n", decimal);

    return 0;
}

// Binary to Decimal Conversion //