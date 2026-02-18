#include <stdio.h>

int main() {
    int N; 
    int loss;  
    int total = 0;
    int highLoss = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &loss); 
        total = total + loss;     
        if (loss > 100) {  
            highLoss = highLoss + 1;
        }
    }
    printf("Total Loss: %d\n", total);
    printf("High Loss Days: %d\n", highLoss);

    return 0;
}

// Factory Production Loss Tracker //