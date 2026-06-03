#include <stdio.h>

typedef struct {
  int conta;
  char nome[30];
  float saldo;
} Cliente;

int main(void) {
  FILE *arq = fopen("input/clientes.dat", "ab+");
  Cliente c;
  int i;

  if (arq == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  for (i = 0; i < 5; i++) {
    printf("Conta: ");
    scanf("%d", &c.conta);

    printf("Nome: ");
    scanf(" %29[^\n]", c.nome);

    printf("Saldo: ");
    scanf("%f", &c.saldo);

    fwrite(&c, sizeof(Cliente), 1, arq);
  }

  fclose(arq);
  return 0;
}