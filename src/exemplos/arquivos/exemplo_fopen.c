#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *arq;
    char nomeArq[25] = "input/arquivo.dat";
    arq = fopen(nomeArq, "r"); // Abri arquivos.dat no modo READ
    if (arq == NULL)
    {
        printf("\nOcorreu um erro. O arquivo não foi aberto.");
    }
    else
    {
        printf("\nO arquivo foi aberto com sucesso.");
    }
    
    return 0;
}