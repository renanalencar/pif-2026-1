#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQUIVO "data/contas.dat"
#define MAX_REGISTROS 100

typedef struct
{
    int numeroConta;
    char nome[50];
    double saldo;
} Cliente;

void limparEntrada(void);
void inicializarArquivo(FILE *fp);
int lerInteiro(const char *msg);
double lerDouble(const char *msg);
void lerString(const char *msg, char *dest, size_t tamanho);

void cadastrarCliente(FILE *fp);
void consultarCliente(FILE *fp);
void atualizarSaldo(FILE *fp);
void encerrarConta(FILE *fp);
void listarClientes(FILE *fp);

int main(void)
{
    FILE *fp = fopen(ARQUIVO, "a+b");

    if (fp == NULL)
    {
        fp = fopen(ARQUIVO, "w+b");
        if (fp == NULL)
        {
            printf("Erro ao criar/abrir o arquivo.\n");
            return 1;
        }
        inicializarArquivo(fp);
    }

    int opcao;

    do
    {
        printf("\n===== SISTEMA DE MANUTENCAO DE CONTAS =====\n");
        printf("1. Cadastrar um novo cliente em uma posicao especifica\n");
        printf("2. Consultar um cliente pelo numero da conta\n");
        printf("3. Atualizar o saldo de um cliente\n");
        printf("4. Encerrar conta (remover cliente)\n");
        printf("5. Listar todos os clientes\n");
        printf("6. Restaurar leitura do arquivo com rewind()\n");
        printf("7. Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limparEntrada();

        switch (opcao)
        {
        case 1:
            cadastrarCliente(fp);
            break;
        case 2:
            consultarCliente(fp);
            break;
        case 3:
            atualizarSaldo(fp);
            break;
        case 4:
            encerrarConta(fp);
            break;
        case 5:
            listarClientes(fp);
            break;
        case 6:
            rewind(fp);
            printf("Leitura reposicionada para o inicio do arquivo com rewind().\n");
            break;
        case 7:
            printf("Encerrando programa.\n");
            break;
        default:
            printf("Opcao invalida.\n");
        }

    } while (opcao != 7);

    fclose(fp);
    return 0;
}

void limparEntrada(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

void inicializarArquivo(FILE *fp)
{
    Cliente vazio;
    vazio.numeroConta = 0;
    strcpy(vazio.nome, "");
    vazio.saldo = 0.0;

    rewind(fp);
    for (int i = 0; i < MAX_REGISTROS; i++)
    {
        fwrite(&vazio, sizeof(Cliente), 1, fp);
    }
    fflush(fp);
}

int lerInteiro(const char *msg)
{
    int valor;
    printf("%s", msg);
    scanf("%d", &valor);
    limparEntrada();
    return valor;
}

double lerDouble(const char *msg)
{
    double valor;
    printf("%s", msg);
    scanf("%lf", &valor);
    limparEntrada();
    return valor;
}

void lerString(const char *msg, char *dest, size_t tamanho)
{
    printf("%s", msg);
    if (fgets(dest, (int)tamanho, stdin) != NULL)
    {
        dest[strcspn(dest, "\n")] = '\0';
    }
}

void cadastrarCliente(FILE *fp)
{
    int posicao = lerInteiro("Informe a posicao (1 a 100): ");

    if (posicao < 1 || posicao > MAX_REGISTROS)
    {
        printf("Posicao invalida.\n");
        return;
    }

    long offset = (posicao - 1) * sizeof(Cliente);
    Cliente cliente;

    fseek(fp, offset, SEEK_SET);
    fread(&cliente, sizeof(Cliente), 1, fp);

    if (cliente.numeroConta != 0)
    {
        printf("Ja existe cliente cadastrado nessa posicao.\n");
        return;
    }

    cliente.numeroConta = lerInteiro("Numero da conta: ");
    lerString("Nome do cliente: ", cliente.nome, sizeof(cliente.nome));
    cliente.saldo = lerDouble("Saldo inicial: ");

    fseek(fp, offset, SEEK_SET);
    fwrite(&cliente, sizeof(Cliente), 1, fp);
    fflush(fp);

    printf("Cliente cadastrado com sucesso.\n");
}

void consultarCliente(FILE *fp)
{
    Cliente cliente;

    rewind(fp);
    while (fread(&cliente, sizeof(Cliente), 1, fp) == 1)
    {
        if (cliente.numeroConta != 0)
        {
            int conta = cliente.numeroConta;
            if (conta == conta)
            {
                /* apenas para manter a leitura do registro atual */
            }
        }
    }

    int contaBuscada = lerInteiro("Informe o numero da conta: ");

    rewind(fp);
    while (fread(&cliente, sizeof(Cliente), 1, fp) == 1)
    {
        if (cliente.numeroConta == contaBuscada)
        {
            printf("\nCliente encontrado:\n");
            printf("Conta: %d\n", cliente.numeroConta);
            printf("Nome : %s\n", cliente.nome);
            printf("Saldo: %.2lf\n", cliente.saldo);
            return;
        }
    }

    printf("Conta nao encontrada.\n");
}

void atualizarSaldo(FILE *fp)
{
    int contaBuscada = lerInteiro("Informe o numero da conta: ");
    Cliente cliente;

    rewind(fp);
    while (fread(&cliente, sizeof(Cliente), 1, fp) == 1)
    {
        if (cliente.numeroConta == contaBuscada)
        {
            long posAtual = ftell(fp) - (long)sizeof(Cliente);

            printf("Cliente: %s\n", cliente.nome);
            printf("Saldo atual: %.2lf\n", cliente.saldo);

            cliente.saldo = lerDouble("Novo saldo: ");

            fseek(fp, posAtual, SEEK_SET);
            fwrite(&cliente, sizeof(Cliente), 1, fp);
            fflush(fp);

            printf("Saldo atualizado com sucesso.\n");
            return;
        }
    }

    printf("Conta nao encontrada.\n");
}

void encerrarConta(FILE *fp)
{
    int contaBuscada = lerInteiro("Informe o numero da conta a remover: ");
    Cliente cliente;
    Cliente vazio = {0, "", 0.0};

    rewind(fp);
    while (fread(&cliente, sizeof(Cliente), 1, fp) == 1)
    {
        if (cliente.numeroConta == contaBuscada)
        {
            long posAtual = ftell(fp) - (long)sizeof(Cliente);

            fseek(fp, posAtual, SEEK_SET);
            fwrite(&vazio, sizeof(Cliente), 1, fp);
            fflush(fp);

            printf("Conta encerrada com sucesso.\n");
            return;
        }
    }

    printf("Conta nao encontrada.\n");
}

void listarClientes(FILE *fp)
{
    Cliente cliente;
    int encontrou = 0;

    printf("\n=== LISTA DE CLIENTES ===\n");

    while (fread(&cliente, sizeof(Cliente), 1, fp) == 1)
    {
        if (cliente.numeroConta != 0)
        {
            printf("Conta: %d | Nome: %s | Saldo: %.2lf\n",
                   cliente.numeroConta, cliente.nome, cliente.saldo);
            encontrou = 1;
        }
    }

    if (!encontrou)
    {
        printf("Nenhum cliente cadastrado.\n");
    }

    printf("Fim da leitura atual. Use a opcao 6 para voltar ao inicio com rewind().\n");
}