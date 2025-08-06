#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

void simplificar(int *numerador, int *denominador) {
    int divisor = mdc(*numerador, *denominador);
    *numerador /= divisor;
    *denominador /= divisor;
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int n1, d1, n2, d2;
        char barra1, barra2, operador;

        scanf("%d %c %d %c %d %c %d", &n1, &barra1, &d1, &operador, &n2, &barra2, &d2);

        int numerador, denominador;

        switch (operador) {
            case '+':
                numerador = n1 * d2 + n2 * d1;
                denominador = d1 * d2;
                break;
            case '-':
                numerador = n1 * d2 - n2 * d1;
                denominador = d1 * d2;
                break;
            case '*':
                numerador = n1 * n2;
                denominador = d1 * d2;
                break;
            case '/':
                numerador = n1 * d2;
                denominador = n2 * d1;
                break;
        }

        if (denominador < 0) {
            numerador *= -1;
            denominador *= -1;
        }

        int numerador_original = numerador;
        int denominador_original = denominador;

        simplificar(&numerador, &denominador);

        if (denominador < 0) {
            numerador *= -1;
            denominador *= -1;
        }

        printf("%d/%d = %d/%d\n", numerador_original, denominador_original, numerador, denominador);
    }

    return 0;
}
