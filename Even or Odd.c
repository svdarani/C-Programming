#include <stdio.h>
int main()
{
    int A;
    printf("Enter the number: ");
    scanf("%d",&A);
    
    if (A%2==0)
    {
        printf("Its an even number");
    }
    else if (A%2!=0){
        printf("Its an odd number");
    }
    
    return 0;
}
