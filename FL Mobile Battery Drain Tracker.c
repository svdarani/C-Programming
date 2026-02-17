#include <stdio.h>

int main() {
    
    int batteryPercent; 
    int N;
    int Drain;

    scanf("%d", &batteryPercent);
    scanf("%d", &N);
    for (int i=0 ; i < N; i++){
        scanf ("%d", &Drain);
      batteryPercent = batteryPercent - Drain;
    }
        printf("Remaining Battery: %d%%\n", batteryPercent);

    return 0;
}

// Mobile Battery Drain Tracker //
