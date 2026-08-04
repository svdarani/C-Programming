#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    
    if (num >= 18)
    {
        printf("Eligible to vote");
    }
    else {
    printf("Not Eligible to vote");
    }
    return 0;
}
