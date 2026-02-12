#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    
    if (a>0){
        printf("Its an positive number");
    }
    else if (a<0){
        printf("Its an negative number");
    }
    else{
        printf("Zero");
    }
    return 0;
}