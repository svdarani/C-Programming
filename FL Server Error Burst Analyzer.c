 
#include <stdio.h>

int main() {
    int N;          
    int errors;
    int total = 0; 
    int critical = 0; 

    scanf("%d", &N);

    
    for (int i = 0; i < N; i++) {
        scanf("%d", &errors);       
        total = total + errors;
        if (errors > 50) { 
            critical = critical + 1;
        }
    }

    printf("Total Errors: %d\n", total);
    printf("Critical Hours: %d\n", critical);

    return 0;
}

// Server Error Burst Analyzer //