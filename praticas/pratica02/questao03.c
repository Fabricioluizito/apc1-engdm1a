// 3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32). 

#include <stdio.h> 

  int main () {

  float  celsius, faherenheit;
  printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);
    faherenheit = (celsius * 9/5) + 32;
  printf("%.2f graus Celcius equivalem a %.2f graus Faherenheit \n" , celsius, faherenheit);
  

    
  return 0;
}