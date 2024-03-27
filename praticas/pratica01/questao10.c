// 10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
//

#include <stdio.h>

int main() {
    int numero, unidade, dezena, centena, milhar;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = (numero / 100) % 10;
    milhar = numero / 1000;

    printf("Unidade: %d\n", unidade);
    printf("Dezena: %d\n", dezena);
    printf("Centena: %d\n", centena);
    printf("Milhar: %d\n", milhar);

  return 0;
}