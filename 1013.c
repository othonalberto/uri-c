#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, primeiro, segundo, maior;

    scanf("%i %i %i", &a, &b, &c);

    maior = (a+b+abs(a-b)) /2;
    maior = (maior + c + abs(maior - c)) /2;

    printf("%d eh o maior\n", maior);

    return 0;
}
