#include <stdio.h>
int main()
{
    int A;
    printf("Enter the number: ");
    scanf("%d",&A);
    
    if (A%5==0)
    {
        printf("Divisible by 5");
    }
    else {
        printf("Not divisible by 5");
    }
    
    return 0;
}
