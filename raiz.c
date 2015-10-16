#include <stdio.h>
#include <math.h>
int main(){
    float entrada,raiz;
    printf("\n\n Digite um numero para calcular a raiz: ");
    scanf("%f",&entrada);
    raiz=sqrt(entrada);
    printf("\n\n -> A raiz de %.1f eh %.1f\n\n\n",entrada,raiz);
    return 0;
}
