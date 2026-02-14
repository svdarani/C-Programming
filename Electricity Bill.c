#include <stdio.h>

int main() { 
  float units;
  scanf("%f", &units);
  
  if (units >= 100 && units <= 200) {
      printf("Bill amount = Rs. %.0f", units*5);
  }
    return 0;
}
 
 