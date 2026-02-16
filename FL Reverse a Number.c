#include <stdio.h>
int main() {
    int n, reversed = 0, remainder, temp;
    scanf("%d", &n);
    temp = n;
    for(; temp != 0; temp = temp / 10) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
    }
    printf("%d" , reversed);
    return 0;
}
//Reverse a Number
