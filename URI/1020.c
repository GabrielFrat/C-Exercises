#include <stdio.h>

int main() {
    int N;
    double ano, mes, dia;

    scanf("%d", &N);

    ano = N /365;
    mes = (N % 365) / 30;
    dia = (N % 365) % 30;

    printf("%d ano(s)\n", (int)ano);
    printf("%d mes(es)\n", (int)mes);
    printf("%d dia(s)\n", (int)dia);

    return 0;
}