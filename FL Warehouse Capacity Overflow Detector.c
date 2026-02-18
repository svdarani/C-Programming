 
#include <stdio.h>

int main() {
    int capacity;        
    int N;                
    int i;              
    int items;            
    int overflowDays = 0; 
    scanf("%d", &capacity);
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &items);
        capacity = capacity - items; 
        if(capacity < 0) {
            overflowDays = overflowDays + 1;
        }
    }
    printf("Remaining Capacity: %d\n", capacity);
    printf("Overflow Days: %d\n", overflowDays);

    return 0;
}

// Warehouse Capacity Overflow Detector //