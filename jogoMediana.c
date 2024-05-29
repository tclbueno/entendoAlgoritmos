#include <stdio.h>
#define TAM 5

int main(void) {

  int vet[TAM] = {9, 7, 8, 4, 6}, maiorPosicao = TAM - 1, menorPosicao = 0,
      meio, chute, i = 0, tent = 0, op = 0;

  for (i = 0; i < TAM / 2 + 1; i++) {
    meio = vet[i];
  }

  do {
    printf("\nBem-vindo(a) ao Adivinhe a Mediana!\n\n");

    printf("1 - Jogar\n");
    printf("2 - Saber o valor da primeira posição\n");
    printf("3 - Saber o valor da última posição\n");
    printf("4 - Sair\n\n");

    printf("Escolha uma opção: \n");
    scanf("%d", &op);

    switch (op) {
    case 1:
      for (tent = 0; tent < 10; tent++) {
        printf("Advinhe o valor da mediana do vetor: ");
        scanf("%d", &chute);

        if (tent > 10)
          printf("Suas tentavitas acabaram");
        if (chute == meio) {
          printf("[Parabéns], você acertou!\n");
          break;
        } else if (chute > meio) {
          printf("O numero é menor que o inserido!\n");
        } else {
          printf("O numero é maior que o inserido!\n");
        }
      }
      break;
    case 2:
      for (i = 0; i < TAM; i++) {

        if (i == 0) {
          menorPosicao = vet[i];
        }
      }
      printf("O valor da primeira posição eh %d\n", menorPosicao);
      break;
    case 3:
      if (vet[i] > 0) {
        maiorPosicao = vet[i+1];
      }
       printf("O valor da ultima posição eh %d\n", maiorPosicao);
      break;
    case 4:
       printf("Saindo...\n");
      break;
    default:
      printf("[ERRO!] Opção inválida!\n");
      break;
    }
  } while (op != 4);

  return 0;
}
