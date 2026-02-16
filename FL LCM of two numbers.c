
#include <stdio.h>

int main() {
    int A, B, LCM;
    scanf("%d %d", &A, &B);
    LCM = (A > B) ? A : B;
    for( ; ; LCM++) {
        if(LCM % A == 0 && LCM % B == 0) {
            printf("%d\n", LCM);
            break; 
        }
    }

    return 0;
}

// LCM of two numbers  