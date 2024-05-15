/* 6. Faça um programa em C que liste todos os múltiplos de n, entre 1 e 100.
 */

#include <stdio.h>

int main() {

  int numero;
  printf("Diga um numero");
  int deu_certo = scanf("%i", &numero);
  if (deu_certo) {
    for (int i = 1; i <= numero; i++) {
      if (i % numero == 0) {
        printf("%i, ", i);
      }
    }
    printf("\n");
  } else {
    printf(" diga algo válido/n");
  }

  return 0;
}