 
#include <stdio.h>

int main() {
    int N;      
    int usage;      
    int total = 0;  
    int highDays = 0; 

    scanf("%d", &N); 
    for (int i = 0; i < N; i++) {
        scanf("%d", &usage);    
        total = total + usage; 
        if (usage > 2) {
            highDays = highDays + 1;
        }
    }
    printf("Total Data: %d\n", total);
    printf("High Usage Days: %d\n", highDays);

    return 0;
}

// Internet Data Usage Alert //