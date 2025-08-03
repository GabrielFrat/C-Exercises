#include <stdio.h>

int main() {
    int N;
    double hora, minuto, segundos;
    scanf("%d", &N);

    hora = N / 3600;
    minuto = (N % 3600) / 60;
    segundos = N % 60;

    printf("%d:%d:%d\n", (int)hora, (int)minuto, (int)segundos);

    return 0;
}