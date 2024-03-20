/*3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
*/

#include <stdio.h> 

int main() {

  float celsius = 0.0f;
  float fahrenheit = 0.0f;   
  
  printf("Informe a temperatura em Celsius: ");
  scanf("%f", &celsius);
  
  fahrenheit = (9.0f / 5.0f) * celsius + 32.0f;
  
  printf("A temperatura em Fahrenheit é %f\n", fahrenheit);
  
  
  
  return 0;
  
  
  
  
}