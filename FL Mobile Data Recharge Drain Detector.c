 
#include <stdio.h>

int main() {
    int totalData;        
    int N;          
    int i;      
    int usage; 
    int successfulDays = 0;
    scanf("%d", &totalData);
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &usage);

        if(totalData >= usage) {
            totalData = totalData - usage;
            successfulDays = successfulDays + 1;
        } else {
          
            totalData = totalData - usage;
            break;
        }
    }
    printf("Remaining Data: %d\n", totalData);
    printf("Successful Days: %d\n", successfulDays);

    return 0;
}

// Mobile Data Recharge Drain Detector //