# include <stdio.h>
int main(){
  int i,num,qtd=0,vetor[]={1,2,3,4,5,5,4,3,3,1,8,5,6,7,4,2,4,4,5,4};
  
	printf("\n\n Digite o numero a ser buscado: ");
	scanf("%d",&num);
	for(i=0;i<20;i++){
	if(vetor[i]==num){
		qtd++;
	}
		}
	if(qtd==0){
		printf("\n -> O numero [%d] nao foi encontrado no vetor.\n\n",num);
	}
	else{
		printf("\n -> O numero [%d] foi encontrado %d vez(es) no vetor.\n\n",num,qtd);
	}
	return 0;
}
