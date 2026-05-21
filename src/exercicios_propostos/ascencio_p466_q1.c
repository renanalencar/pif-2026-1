#include <stdio.h>

struct cliente {
    int codCli;
    char nome[50];
    char endereco[100];
    char tel[12];
};

struct recebimento {
    int numDoc;
    float valorDoc;
    char dataEmissao[11];
    char dataVencimento[11];
    int codCli;
};

void systemPause() {
    printf("\nPressione qualquer tecla para continuar...");
    getchar();
}

int main()
{
    struct cliente cli;
    struct recebimento rec;
    FILE *arqClientes, *arqRecebimentos;
    arqClientes = fopen("input/clientes.dat", "rb+");
    arqRecebimentos = fopen("input/recebimentos.dat", "rb+");
    if (arqClientes == NULL)
    {
        arqClientes = fopen("input/clientes.dat", "wb+");
        if (arqClientes == NULL)
        {
            printf("Arquivo clientes.dat não pode ser aberto!\n");
            systemPause();
            return 1;
        }
    }
    if (arqRecebimentos == NULL) {
        arqRecebimentos = fopen("input/recebimentos.dat", "wb+");
        if (arqRecebimentos == NULL)
        {
            printf("Arquivo recebimentos.dat não pode ser aberto!\n");
            systemPause();
            return 1;
        }
    }

    printf("\nCódigo do cliente: ");
    scanf("%d%*c", &cli.codCli);
    printf("\nNome: ");
    gets(cli.nome);
    printf("\nEndereço: ");
    gets(cli.endereco);
    printf("\nTelefone: ");
    gets(cli.tel);

    printf("\nNúmero Documento: ");
    scanf("%d%*c", &rec.numDoc);
    printf("\nValor: ");
    scanf("%f%*c", &rec.valorDoc);
    printf("\nData de Emissão (dd/MM/AAAA): ");
    gets(rec.dataEmissao);
    printf("\nData de Vencimento (dd/MM/AAAA): ");
    gets(rec.dataVencimento);
    printf("\nCódigo do Cliente: ");
    scanf("%d%*c", &rec.codCli);


    fwrite(&cli, sizeof(struct cliente), 1, arqClientes);
    if (ferror(arqClientes))
    {
        printf("\nErro ao gravar no arquivo clientes.dat! Tente novamente.");
    } else {
        printf("\nDados gravados com sucesso em clientes.dat!");
    }

    fwrite(&rec, sizeof(struct recebimento), 1, arqRecebimentos);
    if (ferror(arqRecebimentos))
    {
        printf("\nErro ao gravar no arquivo recebimentos.dat! Tente novamente.");
    } else {
        printf("\nDados gravados com sucesso em recebimento.dat!");
    }
    
    fclose(arqClientes);
    fclose(arqRecebimentos);
    systemPause();
    return 0;
}
