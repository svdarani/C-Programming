 
#include <stdio.h>

int main() {
    int N;           
    int delay;       
    int total = 0;   
    int delayed = 0; 

    scanf("%d", &N); 
   
    for (int i = 0; i < N; i++) {
        scanf("%d", &delay);       
        total = total + delay;    
        if (delay > 30) 
        {   
            delayed = delayed + 1;
        }
    }
    printf("Total Delay: %d\n", total);
    printf("Delayed Deliveries: %d\n", delayed);

    return 0;
}

// Delivery Delay Risk System //