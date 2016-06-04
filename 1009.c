#include <stdio.h>

int main() {

    char nome;
    double salario, totalDeVendas, total;

    scanf("%s %lf %lf", &nome, &salario, &totalDeVendas);

    total = salario + totalDeVendas*0.15;

    printf("TOTAL = R$ %.2f\n", total);


    return 0;
}
