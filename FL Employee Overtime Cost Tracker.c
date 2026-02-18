 
#include <stdio.h>

int main() {
    int N;                
    int i;                
    int hours;            
    int totalHours = 0;   
    int heavyDays = 0;    
    int costPerHour = 200;
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d", &hours);
        totalHours = totalHours + hours; 
        if(hours > 3) {              
            heavyDays = heavyDays + 1;
        }
    }
    int totalCost = totalHours * costPerHour;
    printf("Total Overtime Hours: %d\n", totalHours);
    printf("Overtime Cost: %d\n", totalCost);
    printf("Heavy Overtime Days: %d\n", heavyDays);

    return 0;
}

// Employee Overtime Cost Tracker //