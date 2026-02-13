

#include <stdio.h>

int main() {
    int a,b;
    int choice;
    printf("Enter the case num: ");
    scanf("%d",&choice);
    printf("Enter the first value:");
    scanf(" %d",&a);
    printf("Enter the second value:");
    scanf("%d",&b);
    switch(choice){
        case 1 : printf("Sum = %d",a+b); break;
        case 2 : printf("Sum = %d",a-b); break;
        case 3 : printf("Sum = %d",a*b); break;
        case 4 : printf("Sum = %d",a/b); break;
        case 5 : printf("Sum = %d",a%b); break;
        default : printf("Enter valid case");
    }
    return 0;
}