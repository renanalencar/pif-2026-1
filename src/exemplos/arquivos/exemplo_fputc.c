#include <stdio.h>
int main()
{
    FILE *p;
    char carac;
    int resultado;
    // Abre caract.dat no modo APPEND ("ANEXAR")
    p = fopen("input/caract.dat", "a");
    if (p == NULL)
        printf("\nErro na abertura");
    else
    {
        printf("\nDigite um caractere: ");
        scanf("%c%*c", &carac);
        while (carac != 'f')
        {
            fputc(carac, p);
            // Se não houve erro, ferror retorna 0
            if (ferror(p))
            {
                printf("\nErro na gravação do caractere");
            }
            else
            {
                printf("\nGravação realizada com sucesso");
            }

            printf("\nDigite outro caractere: ");
            scanf("%c%*c", &carac);
        }
    }
    resultado = fclose(p);
    if (resultado)
    {
        printf("\nOcorreu um erro ao fechar o arquivo.");
    }
    else
    {
        printf("\nArquivo fechado com sucesso!");
    }
    return 0;
}