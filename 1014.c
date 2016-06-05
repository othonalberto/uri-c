#include <stdio.h>

int main() {

    int X;
    float Y, KM;

    scanf("%i %f", &X, &Y);

    KM = X/Y;

    printf("%.3f km/l\n", KM);

    return 0;
}
