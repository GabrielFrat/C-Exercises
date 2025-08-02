#include <stdio.h>

int main(){
    int N;
    // 100, 50, 20, 10, 5, 2 e 1 notas
    scanf("%d", &N);

    if (N < 0 || N > 1000000) {
        return 1;
    }

    printf("%d\n", N);
    if (N >= 100)
    {
        printf("%d nota(s) de R$ 100,00\n", N / 100);
        N %= 100;
    } else {
        printf("0 nota(s) de R$ 100,00\n");
    }

    if (N >= 50)
    {
        printf("%d nota(s) de R$ 50,00\n", N / 50);
        N %= 50;
    } else {
        printf("0 nota(s) de R$ 50,00\n");
    }

    if (N >= 20)
    {
        printf("%d nota(s) de R$ 20,00\n", N / 20);
        N %= 20;
    } else {
        printf("0 nota(s) de R$ 20,00\n");
    }

    if (N >= 10)
    {
        printf("%d nota(s) de R$ 10,00\n", N / 10);
        N %= 10;
    } else {
        printf("0 nota(s) de R$ 10,00\n");
    }
    
    if (N >= 5)
    {
        printf("%d nota(s) de R$ 5,00\n", N / 5);
        N %= 5;
    } else {
        printf("0 nota(s) de R$ 5,00\n");
    }

    if (N >= 2)
    {
        printf("%d nota(s) de R$ 2,00\n", N / 2);
        N %= 2;
    } else {
        printf("0 nota(s) de R$ 2,00\n");
    }

    if (N >= 1)
    {
        printf("%d nota(s) de R$ 1,00\n", N / 1);
        N %= 1;
    } else {
        printf("0 nota(s) de R$ 1,00\n");
    }

    return 0;
}