 
#include <stdio.h>

int main() {
    int N;  
    int Marks;   
    int Total = 0;
    int Failed = 0;
    int Average  = 0; 

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &Marks); 
        Total = Total + Marks;  
        if (Marks < 40) 
        {
            Failed = Failed + 1;
        }
    }
    Average = Total /N;

    printf("Average Score: %d\n", Average);
    printf("Failed Subjects: %d\n", Failed);

    return 0;
}

// Student Score Drop Detector //