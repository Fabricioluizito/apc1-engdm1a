/*
1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
*/
  #include <stdio.h>

    int main () {
      float nota1 = 5.5f;
      float nota2 = 4.0f;

      printf("Entre com a nota A1: ");
      int deu_bom = scanf("%f", &nota1);

      
      float media = 0.4 * nota1 + nota2 * 0.6; 

      printf("A média final é %f\n", media);

      
    return 0;      

    }