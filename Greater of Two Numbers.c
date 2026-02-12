#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d It is an leap year",year);
    }
    
    else{
    printf("%d It is not an leap year",year);
    }
    return 0;
}