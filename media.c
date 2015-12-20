#include<stdio.h>
int main(){
    int num=0, quant=0, quant_im=0,i;
    float media=0.0;
    for(i=1;i<=10;i++){
        printf(" %d - Digite um valor inteiro: ", i);
        scanf("%d", &num);
 	 	 //Aqui você só soma os valores
		media = media+num;
        if ((num%2)==0){            
            quant++;
    	}
        else{
            quant_im++;
        }
    }
    
    //Aqui você já tem a soma total, então divide por 10
	media=media/10;
	
	// Você tinha esquecido do "%d" em dois printf
	// Esses valores só devem ser printados no final, quando já tiver o resultado final
	printf("\n Valores pares: %d", quant);
    printf("\n Impares: %d", quant_im);
    printf("\n A media dos valores lidos eh: %.2f", media);
	return 0;
}
