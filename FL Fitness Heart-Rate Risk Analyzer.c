 
#include <stdio.h>

int main() {
    int N;               
    int i;               
    int rate;            
    int maxRate = 0;      
    int dangerCount = 0;  

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &rate);

        if(rate > maxRate) {
            maxRate = rate;
        }
        if(rate > 140) {
            dangerCount = dangerCount + 1;
        }
    }
    printf("Max Heart Rate: %d\n", maxRate);
    printf("Danger Readings: %d\n", dangerCount);

    return 0;
}

// Fitness Heart-Rate Risk Analyze ```y dcd3exsr //