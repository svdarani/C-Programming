 
#include <stdio.h>

int main() {
    int N;            
    int i;                
    int score;            
    int totalRisk = 0;  
    int highRisk = 0;    
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &score);

        totalRisk = totalRisk + score;

        if(score > 50) {
            highRisk = highRisk + 1;
        }
    }
    printf("Total Risk: %d\n", totalRisk);
    printf("High Risk Sessions: %d\n", highRisk);

    return 0;
}

// Online Exam Cheating Risk Detector //