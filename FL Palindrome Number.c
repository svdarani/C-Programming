

#include <stdio.h>

int main() {
    int N, temp, digit, reverse = 0;
    scanf("%d", &N);

    temp = N; 

    while(temp > 0) {
        digit = temp % 10;  
        reverse = reverse * 10 + digit;
        temp = temp / 10;   
    }

    if(reverse == N) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
// Palindrome Number //
