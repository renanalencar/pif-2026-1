#include <stdio.h>

int main(void)
{
    FILE *cli;
    struct cliente
    {
        int numero;
        char nome[20];
    };
    struct cliente c;
    cli = fopen("input/clientes_ex.dat", "rb+");
    if (cli == NULL)
        printf("\nErro na abertura do arquivo!");
    else
    {
            
        // Verifica se o arquivo não está vazio    
        if (feof(cli))
        {
            printf("\nNenhum cliente salvo!");
            return 1;
        }
        
        fread(&c, sizeof(struct cliente), 1, cli);
        if (ferror(cli))
            printf("\nErro na leitura!");
        else
            printf("\nLeitura realizada com sucesso!");
        
        printf("\nNúmero do cliente lido: %d", c.numero);
        printf("\nNome do cliente lido: %s", c.nome);
        fread(&c, sizeof(struct cliente), 1, cli);
        if (ferror(cli))
            printf("\nErro na leitura ");
        else
            printf("\nLeitura realizada com sucesso!\n");
        
        fclose(cli);
    }
    getchar();
    return 0;
}