 
#include <stdio.h>

int main() {
    int N;          
    int errors;
    int total = 0; 
    int c = 0; 

    scanf("%d", &N);

    
    for (int i = 0; i < N; i++) {
        scanf("%d", &errors);       
        total = total + errors;
        if (errors > 50000) { 
            c++;
        }
    }

    printf("Total Revenue: %d\n", total);
    printf("Target Days: %d\n", c);

    return 0;
}

// Online Sales Target Tracker //