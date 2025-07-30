#include <stdio.h>

int main () {
    int cod1, qtde1, cod2, qtde2;
    double price1, price2, total;

    scanf("%d %d %lf", &cod1, &qtde1, &price1);
    scanf("%d %d %lf", &cod2, &qtde2, &price2);

    total = (qtde1 * price1) + (qtde2 * price2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}