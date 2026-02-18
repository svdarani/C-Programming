 
#include <stdio.h>

int main() {
    int N;      
    int i;               
    int noise;
    int maxNoise = 0;     
    int noisyPeriods = 0; 
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &noise);
        if(noise > maxNoise) {
            maxNoise = noise;
        }
        if(noise > 70) {
            noisyPeriods = noisyPeriods + 1;
        }
    }
    printf("Maximum Noise: %d\n", maxNoise);
    printf("Noisy Periods: %d\n", noisyPeriods);

    return 0;
}
// Classroom Noise Level Monitor //