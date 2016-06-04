#include <stdio.h>

int main() {

    double volume, r;

    scanf("%lf", &r);

    volume = (4.0/3.0) * 3.14159 * r*r*r;

    printf("VOLUME = %.3f\n", volume);

    return 0;
}
