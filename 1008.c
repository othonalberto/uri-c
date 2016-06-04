#include <stdio.h>

int main() {

    int numFunc, numHoras;
    float valorHora;

    scanf("%i %i %f", &numFunc, &numHoras, &valorHora);

    printf("NUMBER = %d\n", numFunc);
    printf("SALARY = U$ %.2f\n", numHoras*valorHora);

    return 0;
}
