#include <stdio.h>

int main() {
  float sp = 67836.43;
  float rj = 36678.66;
  float mg = 29229.88;
  float es = 27165.48;
  float outros = 19849.53;

  float total = sp + rj + mg + es + outros;
  printf("Total: %.2f\n", total);

  float percentualSP = (sp / total) * 100;
  float percentualRJ = (rj / total) * 100;
  float percentualMG = (mg / total) * 100;
  float percentualES = (es / total) * 100;
  float percentualOutros = (outros / total) * 100;

  printf("Percentual SP: %.2f%%\n", percentualSP);
  printf("Percentual RJ: %.2f%%\n", percentualRJ);
  printf("Percentual MG: %.2f%%\n", percentualMG);
  printf("Percentual ES: %.2f%%\n", percentualES);
  printf("Percentual Outros: %.2f%%\n", percentualOutros);

  return 0;
}