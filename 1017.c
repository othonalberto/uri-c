#include <stdio.h>
 
int main() {
 
    int tempo, velocidade;
    float gasto;

    scanf("%i %i", &tempo, &velocidade);
        
    gasto = (tempo * velocidade);
        
    printf("%.3f\n", gasto/12);
    
    return 0;
}