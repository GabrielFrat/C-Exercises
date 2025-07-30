#include <stdio.h>

int main() {
    double pi = 3.14159, A, R;

    scanf("%lf", &R);
    A = (4.0 / 3) * pi * (R * R * R);
    printf("VOLUME = %.3lf\n", A);

    return 0;
}