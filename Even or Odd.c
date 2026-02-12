#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    
    if (a%2==0)
    {
        printf("Its an even number");
    }
    else if (a%2!=0){
        printf("Its an odd number");
    }
    
    return 0;
}