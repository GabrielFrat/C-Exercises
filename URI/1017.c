#include <stdio.h>

int main(){
    int horas, kmh;
    double kml;

    scanf("%d", &horas);
    scanf("%d", &kmh);
    kml = (horas * kmh) / 12.0;

    printf("%.3lf\n", kml);

    return 0;
}