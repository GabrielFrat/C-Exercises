#include <stdio.h>

int main(){
    int number, hours;
    float salary, salaryTotal;

    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%f", &salary);

    salaryTotal = hours * salary;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salaryTotal);

    return 0;
}