#include <stdio.h>

int main() {

  printf("\x1b[31m--------------------------\n");
  printf("   N O T A    L E G A L   \n");
  printf("--------------------------\x1b[0m\n");
  printf("ITEM              QTD VALOR         \n");
  printf("\x1b[34m%03i\x1b[0m %10.2f \n" , "Banana manica",  2, 20.00);
  printf("%-13s %03i %10.2f \n" , "Uva globo"    ,  1, 15.00);
  printf("%-13s %03i %10.2f \n" , "Laranja lima" ,  1, 18.00);  

  //printf("s %i %f \n" , "Banana manica",  2, 20.00);
  //printf("s %i %f \n" , "Uva globo",      1, 15.00);
  //printf("s %i %f \n" , "Laranja lima" ,  1, 18.00);
  
  
  printf("------------------------ \n");
  printf("   TOTAL      53.00      \n");
  printf("------------------------ \n");
  

  
  return 0;
  
}
