 
#include <stdio.h>

int main() {
    int initialCash;
    int N;             
    int withdraw;      
    int riskCount = 0; 
    scanf("%d", &initialCash); 
    scanf("%d", &N);           
    for (int i = 0; i < N; i++) {
        scanf("%d", &withdraw);
        initialCash = initialCash - withdraw; 
        if (initialCash < 5000) {
            riskCount = riskCount + 1;        
        }
    }
    printf("Remaining Cash: %d\n", initialCash);
    printf("Risk Count: %d\n", riskCount);

    return 0;
}

// ATM Cash Refill Risk Analyzer //