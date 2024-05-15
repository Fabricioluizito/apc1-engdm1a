#include <stdio.h>
int main() {

  int numero;
  int numero_valido = 0;

  while (numero_valido == 0) {
    printf("diga um numero entre 1 e 10:");
    int deu_certo = scanf("%i", &numero);
    numero_valido = numero >= 1 && numero <= 10;

    if (deu_certo && numero_valido) {
      printf("segue o jogo!\n");
    } else {
      getchar(); // limpar /n
      printf(" numero invalido. Diga algo válido\n");
    }
  }
  do {
    printf("diga um numero entre 1 e 10:");
    int deu_certo = scanf("%i", &numero);
    int numero_valido = numero >= 1 && numero <= 10;

    if (deu_certo && numero_valido) {
      printf("segue o jogo!\n");
    } else {
      getchar(); // limpar /n
      printf(" numero invalido. Diga algo válido\n");
    }

  } while (numero_valido == 0);

  return 0;