#include<stdio.h>
void ArmazenarVetor(int numeros[5]){
	int i;
	for (i=0; i<=4; i++){
	    printf("\n Digite um numero: ");
	    scanf("%d", &numeros[i]);
    }
}
void ImprimirTotal(int numeros[5]){
	int i;
	for(i=0; i<=4; i++){
		printf("\n -> Numeros %d",numeros[i]);
    }
}
int main(){
    int num[5];
    ArmazenarVetor(num);
    ImprimirTotal(num);
 
}
