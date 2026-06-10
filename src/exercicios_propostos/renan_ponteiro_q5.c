#include <stdio.h>
#include <string.h>

int main()
{
    char *nomes[5] = {"Maria", "João", "José", "Pedro", "Mateus"};
    char nome[6];

    for (int i = 0; i < 5; i++)
    {
        printf("nomes[%d] = %s\n", i, *(nomes + i));
    }
    
    printf("\nTrocando os nomes posições 2 e 3..\n");
    strcpy(nome, nomes[2]);
    *(nomes + 2) = *(nomes + 3);
    *(nomes + 3) = nome;

    for (int i = 0; i < 5; i++)
    {
        printf("nomes[%d] = %s\n", i, *(nomes + i));
    }

    return 0;
}
