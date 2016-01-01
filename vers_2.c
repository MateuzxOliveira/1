#include <stdio.h>
typedef struct Info{
	int peso;
	int altura;
}info;
info cria_inf(int peso, int altura){
	info aux;
	aux.peso = peso;
	aux.altura = altura;
	return aux;
}
int main(){
	info dados;
	dados = cria_inf(2,5);
	printf("\n%d | %d\n", dados.peso, dados.altura);
	return 0;	
}
