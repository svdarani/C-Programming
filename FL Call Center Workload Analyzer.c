 
#include <stdio.h>

int main() {
    int N;               
    int i;               
    int calls;           
    int totalCalls = 0;   
    int overloaded = 0;   

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &calls);
        totalCalls = totalCalls + calls; 

        if(calls > 40) {
            overloaded = overloaded + 1; 
        }
    }
    printf("Total Calls: %d\n", totalCalls);
    printf("Overloaded Hours: %d\n", overloaded);

    return 0;
}

// Call Center Workload Analyzer //