#include <stdio.h>
int main()
{
    FILE *p;
    int resposta;
    p = fopen("input/arquivo.txt", "w"); // Abre arquivo.txt no modo WRITE
    if (p == NULL)
        printf("\nErro na abertura");
    else
    {
        printf("\nSucesso na abertura");
        resposta = fclose(p);
        if (resposta == 0)
        {
            printf("\nSucesso no fechamento");
        }
        else
        {
            printf("\nErro no fechamento");
        }
    }
    return 0;
}