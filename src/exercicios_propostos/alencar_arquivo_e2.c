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

  printf("%-10s %-30s %-10s\n", "Conta", "Nome", "Saldo");

  while (fread(&c, sizeof(Cliente), 1, arq) == 1) {
    printf("%-10d %-30s %-10.2f\n", c.conta, c.nome, c.saldo);
  }

  fclose(arq);
  return 0;
}