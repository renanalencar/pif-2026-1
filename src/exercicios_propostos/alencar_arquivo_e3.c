#include <stdio.h>

typedef struct {
  int conta;
  char nome[30];
  float saldo;
} Cliente;

int main(void) {
  FILE *arq = fopen("input/clientes.dat", "rb");
  Cliente c;

  if (arq == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  if (fread(&c, sizeof(Cliente), 1, arq) == 1) {
    printf("Primeira leitura:\n");
    printf("%d %s %.2f\n", c.conta, c.nome, c.saldo);
  }

  rewind(arq);

  if (fread(&c, sizeof(Cliente), 1, arq) == 1) {
    printf("Leitura apos rewind:\n");
    printf("%d %s %.2f\n", c.conta, c.nome, c.saldo);
  }

  fclose(arq);
  return 0;
}