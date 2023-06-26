#include <stdio.h>
#include <string.h>

#define MAX_N 100
#define MAX_NAME_LEN 20

int main() {
  char nomes[MAX_N][MAX_NAME_LEN + 1]; // +1 para o caractere nulo
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%s", nomes[i]);
  }
  // Ordena os nomes em ordem alfabética
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (strcmp(nomes[i], nomes[j]) > 0) {
      char temp[MAX_NAME_LEN + 1];
      strcpy(temp, nomes[i]);
      strcpy(nomes[i], nomes[j]);
      strcpy(nomes[j], temp);
        }
    }
  }
 printf("%s\n", nomes[k - 1]); // Imprime o nome do k-ésimo aluno
 return 0;
}