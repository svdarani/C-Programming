 
#include <stdio.h>

int main() {
    int N;                
    int i;               
    int units;          
    int totalUnits = 0;   
    int spikeHours = 0;   
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &units);
        totalUnits = totalUnits + units; 
        if(units > 5) {
            spikeHours = spikeHours + 1; 
        }
    }
    printf("Total Units: %d\n", totalUnits);
    printf("Spike Hours: %d\n", spikeHours);

    return 0;
}

// Power Consumption Spike Detector //