#include <stdio.h>
#include <stdlib.h>

int main(){
    int X;
    double Y, distance;

    scanf("%d %lf", &X, &Y);
    distance = X / Y;

    printf("%.3lf km/l\n", distance);

    return 0;
}