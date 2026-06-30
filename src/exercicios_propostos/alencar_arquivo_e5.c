#include <stdio.h>

typedef struct {
  int conta;
  char nome[30];
  float saldo;
} Cliente;

void listar(FILE *arq) {
  Cliente c;
  rewind(arq);
  printf("\n%-10s %-30s %-10s\n", "Conta", "Nome", "Saldo");
  while (fread(&c, sizeof(Cliente), 1, arq) == 1) {
    if (c.conta != 0) {
      printf("%-10d %-30s %-10.2f\n", c.conta, c.nome, c.saldo);
    }
  }
}

int main(void) {
  FILE *arq = fopen("input/clientes.dat", "rb+");
  Cliente c;
  int op, numero;

  if (arq == NULL) {
    arq = fopen("input/clientes.dat", "wb+");
    if (arq == NULL) {
      printf("Erro ao criar o arquivo.\n");
      return 1;
    }
  }

  do {
    printf("\n1 - Cadastrar\n");
    printf("2 - Consultar\n");
    printf("3 - Atualizar saldo\n");
    printf("4 - Listar todos\n");
    printf("5 - Listar novamente do inicio\n");
    printf("6 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &op);

    switch (op) {
    case 1:
      printf("Numero da conta: ");
      scanf("%d", &c.conta);
      printf("Nome: ");
      scanf(" %29[^\n]", c.nome);
      printf("Saldo: ");
      scanf("%f", &c.saldo);

      fseek(arq, (c.conta - 1) * sizeof(Cliente), SEEK_SET);
      fwrite(&c, sizeof(Cliente), 1, arq);
      break;

    case 2:
      printf("Numero da conta: ");
      scanf("%d", &numero);
      fseek(arq, (numero - 1) * sizeof(Cliente), SEEK_SET);
      if (fread(&c, sizeof(Cliente), 1, arq) == 1 && c.conta != 0) {
        printf("%d %s %.2f\n", c.conta, c.nome, c.saldo);
      } else {
        printf("Conta nao encontrada.\n");
      }
      break;

    case 3:
      printf("Numero da conta: ");
      scanf("%d", &numero);
      fseek(arq, (numero - 1) * sizeof(Cliente), SEEK_SET);
      if (fread(&c, sizeof(Cliente), 1, arq) == 1 && c.conta != 0) {
        printf("Novo saldo: ");
        scanf("%f", &c.saldo);
        fseek(arq, (numero - 1) * sizeof(Cliente), SEEK_SET);
        fwrite(&c, sizeof(Cliente), 1, arq);
      } else {
        printf("Conta nao encontrada.\n");
      }
      break;

    case 4:
      listar(arq);
      break;

    case 5:
      rewind(arq);
      listar(arq);
      break;
    }
  } while (op != 6);

  fclose(arq);
  return 0;
}