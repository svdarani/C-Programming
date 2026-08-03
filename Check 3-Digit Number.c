#include <stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    
    if (c >= 100 && c <= 999)
    {
        printf(" Three-digit number");
    }
    else {
    printf("Not a Three-digit number");
    }
    return 0;
}
