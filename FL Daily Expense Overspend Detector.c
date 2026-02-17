
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int expenses[N]; 
    int total = 0, overspendDays = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &expenses[i]);
        total += expenses[i];
        if (expenses[i] > 1000) { 
            overspendDays++;
        }
    }
    printf("Total Expense: %d\n", total);
    printf("Overspend Days: %d\n", overspendDays);

    return 0;
}

// Daily Expense Overspend Detector //
