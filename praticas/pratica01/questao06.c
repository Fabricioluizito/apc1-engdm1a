/* 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/

#include <stdio.h>
#include <math.h>

 int main() {
     // Código para cálculo das raízes
 
   float a, b, c, delta, x1, x2;

   printf("Digite o valor de a: ");
   scanf("%f", &a);

   printf("Digite o valor de b: ");
   scanf("%f", &b);

   printf("Digite o valor de c: ");
   scanf("%f", &c);

   delta = b * b - 4 * a * c;

   if (delta > 0) {
       x1 = (-b + sqrt(delta)) / (2 * a);
       x2 = (-b - sqrt(delta)) / (2 * a);
       printf("As raízes são reais e distintas: x1 = %.2f e x2 = %.2f\n", x1, x2);
   } else if (delta == 0) {
       x1 = -b / (2 * a);
       printf("As raízes são reais e iguais: x = %.2f\n", x1);
   } else {
       float realPart = -b / (2 * a);
       float imaginaryPart = sqrt(-delta) / (2 * a);
       printf("As raízes são complexas: x1 = %.2f + %.2fi e x2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
   
 



