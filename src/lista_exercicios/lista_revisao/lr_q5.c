#include <stdio.h>
#include <string.h>

int main()
{
    char frase[200];
    int ascii[200];
    int i, tam;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    tam = strlen(frase);

    if (frase[tam - 1] == '\n')
    {
        frase[tam - 1] = '\0';
        tam--;
    }

    printf("\nCriptografia (ASCII):\n");
    for (i = 0; i < tam; i++)
    {
        ascii[i] = (int)frase[i];
        printf("%d ", ascii[i]);
    }

    printf("\n\nDescriptografia:\n");
    for (i = 0; i < tam; i++)
    {
        printf("%c", (char)ascii[i]);
    }
    printf("\n");

    return 0;
}