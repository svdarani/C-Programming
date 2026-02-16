
#include <stdio.h>

int main() {
    int N, i, j, count = 0;
    scanf("%d", &N);
    for (i = 2; i <= N; i++) {
        int isPrime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime == 1) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
// Count Prime Numbers
