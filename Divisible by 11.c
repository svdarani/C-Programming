#include <stdio.h>

int main() { 
  int number;
  scanf("%d", &number);
  
  if (number % 11 == 0) {
      printf("Divisible by 11");
  }
    else {
      printf("Not Divisible by 11");
  }
    return 0;
}
