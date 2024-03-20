/*. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.*/

#include <stdio.h> 

  int main() {

    float valor_da_hora_de_trabalho = 150.0f;
    float total_hora_trabalho = 100.0f; 
    
       const float IR = 0.25f;

       const float INCC = 0.11f; 

       const float IR_INSS = IR + INCC;

    float valor_salario_bruto = valor_da_hora_de_trabalho * total_hora_trabalho; 
    float valor_imposto_renda = valor_salario_bruto * IR;
    float valor_imposto_previdencia = valor_salario_bruto * INCC;
    float valor_salario_liquido = valor_salario_bruto - valor_imposto_renda - valor_imposto_previdencia;

  printf("--------------------------------  \n");
  printf("   C O N T R A   C H E Q U E      \n");
  printf("--------------------------------  \n");
    
  printf("Salario bruto          :\x1b[34m %14.2f\x1b[0m\n", valor_salario_bruto); 
    
  printf("Imposto de renda       :\x1b[31m %14.2f\x1b[0m\n", valor_imposto_renda);
    
  printf("Imposto de previdencia :\x1b[31m %14.2f\x1b[0m\n" ,valor_imposto_previdencia);
    
  printf("Salario liquido        :\x1b[34m %14.2f\x1b[0m\n", valor_salario_liquido);

  
  return 0;
}
