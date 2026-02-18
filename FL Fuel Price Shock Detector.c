 
#include <stdio.h>

int main() {
    int N; 
    int price;  
    int highest = 0;  
    int highDays = 0;

    scanf("%d", &N); 
    for (int i = 0; i < N; i++) {
        scanf("%d", &price);
        if (price > highest) {  
            highest = price;
        }
        if (price > 100) { 
            highDays = highDays + 1;
        }
    }
    printf("Highest Price: %d\n", highest);
    printf("High Price Days: %d\n", highDays);

    return 0;
}

// Fuel Price Shock Detector //