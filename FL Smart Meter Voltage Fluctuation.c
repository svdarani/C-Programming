 
#include <stdio.h>

int main() {
    int N;      
    int voltage;
    int minVoltage; 
    int lowEvents = 0; 

    scanf("%d", &N);  
    scanf("%d", &voltage);
    minVoltage = voltage;
    if (voltage < 210) {
        lowEvents = lowEvents + 1;
    }
    for (int i = 1; i < N; i++) {
        scanf("%d", &voltage);
        if (voltage < minVoltage) {
            minVoltage = voltage;
        }
        if (voltage < 210) {
            lowEvents = lowEvents + 1;
        }
    }

    printf("Minimum Voltage: %d\n", minVoltage);
    printf("Low Voltage Events: %d\n", lowEvents);

    return 0;
}

// Smart Meter Voltage Fluctuation //