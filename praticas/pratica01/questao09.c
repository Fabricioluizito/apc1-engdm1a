// 9. Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.


#include <stdio.h>

int main() {
    int num1;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    printf("The ASCII value of %d is %c\n", num1, num1);

    return 0;
}

