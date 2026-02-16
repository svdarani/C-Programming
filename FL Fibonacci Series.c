
#include <stdio.h>
int main() {
    int n, i;
    int first = 0, second = 1, temp;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%d ", first);
        }
        else if(i == 2) {
            printf("%d ", second);
        }
        else {
            temp = first + second;
            printf("%d ", temp);
            first = second;
            second = temp;
        }
    }
    return 0;
}

//Fibonacci Series
