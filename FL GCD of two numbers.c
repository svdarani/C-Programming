  #include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
#include <stdio.h>

int main() {
    int A, B, gcd = 1;
    scanf("%d %d", &A, &B);
    for(int i = 1; i <= A && i <= B; i++) {
        if(A % i == 0 && B % i == 0) {
            gcd = i;
        }
    }

    printf("%d\n", gcd);

    return 0;
}

// GCD of two numbers  

