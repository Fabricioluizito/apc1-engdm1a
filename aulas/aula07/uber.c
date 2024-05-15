#include <stdio.h>
int main(){

int avaliacao;

  printf("informe a sua avaliação de 1 a 5: ");
  int deu_certo = scanf("%i", &avaliacao);

  // if(avaliacao == 1) {
  //   printf("o motorista ganhou *\n");
  // } else if(avaliacao == 2) {
  //   printf("o motorista ganhou **\n");
  // } else if(avaliacao == 3) {
  //   printf("o motorista ganhou ***\n");
  // } else if(avaliacao == 4) {
  //   printf("o motorista ganhou ****\n");
  // } else if(avaliacao == 5) {
  //   printf("o motorista ganhou *****\n");
  // } else {
  //   printf("informe uma valiação válida!!!\n");
  // }

switch(avaliacao) {
  case 1: printf("o motorista ganhou *\n"); break;
   case 2: printf("o motorista ganhou **\n");  break;
   case 3: printf("o motorista ganhou ***\n");  break;
   case 4: printf("o motorista ganhou ****\n");  break;
   case 5: printf("o motorista ganhou *****\n");  break;
  default: printf("informe uma valiação válida!!!\n");
}