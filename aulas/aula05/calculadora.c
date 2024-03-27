#include <stdio.h>

int main() {
  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int Deu_certo = scanf("%i", &numero1);

  printf("Entre com o primeiro numero: ");
  Deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numeros é %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtração dos numeros é %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicação dos numeros é %i\n", multiplicacao);

  float divisao = numero1 / (numero2 * 1.0f);
  printf("A divisão dos numeros é %f\n", divisao);

  int resto = numero1 % numero2;
  printf("O resto da divisão dos numeros é %i\n", resto);

  printf("o incremento do primeiro numero é %i\n", ++numero1);
  printf("o decremento do primeiro numero é %i\n", --numero1);
  printf("o incremento do segundo numero é %i\n", ++numero2);
  printf("o decremento do segundo numero é %i\n", --numero2);

  double raiz_quadrada1 = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é %f\n", raiz_quadrada1);

  double potencia = pow(numero1, 4); // numero1 elevado a 4
  printf("A quarta potencia do primeiro numero é %f\n", potencia);

  double logaritimo2 = log2(numero1);
  printf("O logaritimo do primeiro numero na base 2 é %f\n", logaritimo2);
  const double PI = 3.1416;
  double seno = sin(numero1 * PI / 180); // angulo em radiano * PI / 180
  printf("O seno do primeiro numero é %f\n", seno);

  return 0;
}