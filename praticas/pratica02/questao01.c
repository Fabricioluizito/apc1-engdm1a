// 1. Faça um programa em C que leia três números reais e imprima a média aritmética destes números. //

  #include <stdio.h>

  int main () {
    float num1, num2, num3;
    float media;

    printf("Entre com o primeiro número: ");
    scanf("%f", &num1);

    printf("Entre com o segundo número: ");
    scanf("%f", &num2);

    printf("Entre com o terceiro número: ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A média dos três números é: %f\n", media);

    return 0;
  }


