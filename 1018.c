#include <stdio.h>

int main(){
	int entrada, x;
	int numeros[] = {100, 50, 20, 10, 5, 2, 1};
	scanf("%d", &entrada);
	printf("%d\n", entrada);
	
	for (x = 0; x<7; x++){
		printf("%d nota(s) de R$ %d,00\n", entrada/numeros[x], numeros[x]);
		entrada = entrada % numeros[x];
	}

	return 0;
}