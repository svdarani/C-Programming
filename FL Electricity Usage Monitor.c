
#include <stdio.h>

int main() {
    int N;
    int units; 
    int total = 0;

    scanf("%d", &N);
    
    for (int i=0 ; i < N; i++){
        scanf("%d", &units);
        total = total + units;
    }
        printf("Total units : %d\n", total);

    return 0;
}

// Electricity Usage Monitor //
