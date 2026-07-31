
#include <stdio.h>

int main() {
    int X, Y, LCM;
    scanf("%d %d", &X, &Y);
    LCM = (X > Y) ? X : Y;
    for( ; ; LCM++) {
        if(LCM % X == 0 && LCM % Y == 0) {
            printf("%d\n", LCM);
            break; 
        }
    }

    return 0;
}

// LCM of two numbers  
