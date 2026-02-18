#include <stdio.h>

int main() {
    int N;  
    int rainfall;   
    int total = 0;
    int heavyDays = 0; 

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &rainfall); 
        total = total + rainfall;  
        if (rainfall > 50) 
        {
            heavyDays = heavyDays + 1;
        }
    }

    printf("Total Rainfall: %d\n", total);
    printf("Heavy Rain Days: %d\n", heavyDays);

    return 0;
}

// Rainfall Pattern Analyzer //