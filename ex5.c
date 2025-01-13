#include <stdio.h>
#include <string.h>

int main() {
  char nome[50];
  strcpy(nome, "Linus Torvalds");

  printf("Nome: %s\n", nome);

  int tamanho = strlen(nome);
  printf("Tamanho: %d\n", tamanho);

  char nomeReverso[50];
  for (int i = 0; i < tamanho; i++) {
    nomeReverso[i] = nome[tamanho - i - 1];
  }
  nomeReverso[tamanho] = '\0';

  printf("Nome reverso: %s\n", nomeReverso);

  return 0;
}

