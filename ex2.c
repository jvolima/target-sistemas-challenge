#include <stdio.h>

int main() {
  int anteriorDoAnterior = 0;
  int anterior = 1;
  int entrada, fibonacci = 0;
  
  printf("Digite um número: ");
  scanf("%d", &entrada);

  for (int i = 0; i < 40; i++) {
    printf("%d\n", fibonacci);

    if (fibonacci == entrada) {
      printf("Pertence a sequência!\n");

      return 0;
    }

    fibonacci = anteriorDoAnterior + anterior;
    anteriorDoAnterior = anterior;
    anterior = fibonacci;
  }

  printf("Não pertence a sequência!\n");

  return 0;
}