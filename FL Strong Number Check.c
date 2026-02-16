  #include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int N, temp, digit, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &N);

    temp = N;

    while(temp > 0) {
        digit = temp % 10;
        sum = sum + factorial(digit);
        temp = temp / 10;       
    }
    
    if(sum == N) 
{
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
 
// Strong Number Check

