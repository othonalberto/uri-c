#include <stdio.h>

int main() {

    int codPeca1, numPeca1, codPeca2, numPeca2;
    float valorPeca1, valorPeca2, total;

    scanf("%i %i %f", &codPeca1, &numPeca1, &valorPeca1);
    scanf("%i %i %f", &codPeca2, &numPeca2, &valorPeca2);

    total = (numPeca1 * valorPeca1) + (numPeca2 * valorPeca2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
