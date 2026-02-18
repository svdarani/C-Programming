 
#include <stdio.h>

int main() {
    int N;  
    int patients; 
    int total = 0; 
    int overcrowded = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &patients);
        total = total + patients; 
        if (patients > 100) {  
            overcrowded = overcrowded + 1;
        }
    }
    printf("Total Patients: %d\n", total);
    printf("Overcrowded Days: %d\n", overcrowded);

    return 0;
}

// Hospital Patient Load Monitor //