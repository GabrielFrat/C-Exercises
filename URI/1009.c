#include <stdio.h>

int main() {
    char str[100];
    double salary, bonus, total;

    scanf("%s", str);
    scanf("%lf", &salary);
    scanf("%lf", &bonus);    

    total = salary + (bonus * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}