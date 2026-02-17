
#include <stdio.h>

int main() {
    int salary;
    int absentdays; 
    int finalsalary;

    scanf("%d", &salary);
    scanf("%d", &absentdays);
    finalsalary = salary;
    for (int i=0 ; i < absentdays; i++){
      finalsalary = finalsalary - 100;
    }
        printf("Final Salary : ₹%d\n", finalsalary);

    return 0;
}

// Salary Deduction Calculator //