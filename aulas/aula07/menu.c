#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;

  do {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Resultado\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao => ");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n')
      ; // limpar buffer do teclado

    switch (opcao) {
    case 1: {
      deu_certo = system("clear");
      char nome[31];
      printf("Nome do jogador: ");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n')
        ;
      printf("Olá %s\n", nome);
      printf("Pressione ENTER p/ iniciar");
      getchar();
      break;
    }
    case 2: {
      
      deu_certo = system("clear");
      printf("Resultado\n");
      printf("1o lugar - Fabrício - 1000\n");
      printf("2o lugar - Ana - 800\n");
      printf("3o lugar - José - 300\n");
      printf("4o lugar - Mauricio - 400\n");
      printf("5o lugar - Felipe - 700\n");
      printf("Pressione ENTER para voltar");
      getchar ();
      
      break;
    }
    case 3: break;
    case 4: break;
    default:
      opcao 0;
      printf("Opcao invalida! Pressione ENTER p/ continuar");
      getchar();
    }
  } while (opcao != 4);

  return 0;
}
