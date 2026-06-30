#include <stdio.h>

typedef struct {
  int conta;
  char nome[30];
  float saldo;
} Cliente;

int main(void) {
  FILE *arq = fopen("input/clientes.dat", "rb+");
  Cliente c;
  int numero, posicao = 0;

  if (arq == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  printf("Numero da conta para atualizar: ");
  scanf("%d", &numero);

  while (!feof(arq))
  {
    fread(&c, sizeof(Cliente), 1, arq);
    if (c.conta == numero)
    {
      break;
    }
    posicao++;
  }
  
  if (!feof(arq)) {
    printf("Registro atual: %d %s %.2f\n", c.conta, c.nome, c.saldo);

    printf("Novo saldo: ");
    scanf("%f", &c.saldo);

    fseek(arq, (posicao) * sizeof(Cliente), SEEK_SET);
    fwrite(&c, sizeof(Cliente), 1, arq);
  } else {
    printf("Registro inexistente.\n");
  }

  fclose(arq);
  return 0;
}