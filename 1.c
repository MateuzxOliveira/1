#include <stdio.h>
int main(){
  int i, qtd_vogais=0;
  char nome[10];
  printf("\n Nome: ");
  fgets(nome,10,stdin);
  for(i=0;i<10;i++){
    if(toupper(nome[i])=='A'||toupper(nome[i])=='E'||toupper(nome[i])=='I'||toupper(nome[i])=='O'||toupper(nome[i])=='U'){
      qtd_vogais++;
    }
  }
  printf("\n Quantidade de vogais: %d\n",qtd_vogais);
}
