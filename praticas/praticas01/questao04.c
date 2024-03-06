/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h> 

int main() { 

  float preco_inicial = 100.0f;
  float preco_final = 0.0f;
  
  const float ICMS = 0.17f;
  const float CONFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  float valor_imposto_icms = preco_final;
  float valor_imposto_confins = preco_final;
  float valor_imposto_pis_pasep = preco_final;
  
  preco_final = (1 + ICMS + CONFINS + PIS_PASEP ) * preco_inicial; 

  printf("Preco inicial = %f\n", preco_inicial);
  printf("Valor ICMS = %f\n", valor_imposto_icms); 
  printf("Valor CONFINS = %f\n", valor_imposto_icms);
  printf("Valor PIS/PASEP = %f\n", valor_imposto_pis_pasep);
  printf("Preco final = %f\n", preco_final);
    
    
    return 0;
 

}