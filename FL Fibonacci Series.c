
#include <stdio.h>
int main() {
    int A, i;
    int first = 0, second = 1, temp;
    scanf("%d", &A);
    for(i = 1; i <= A; i++) {
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
