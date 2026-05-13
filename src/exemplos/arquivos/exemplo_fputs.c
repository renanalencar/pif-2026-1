#include <stdio.h>
#include <string.h>

int main()
{
    FILE *p;
    char cadeia[30]; // Declara uma string de tamanho 29 + `\0`
    p = fopen("input/cadeias.txt", "a"); // Modo APPEND
    if (p == NULL)
        printf("\nErro na abertura");
    else
    {
        printf("\nDigite uma cadeia de caracteres: ");
        gets(cadeia);
        strcat(cadeia, "\n");
        while (strcmp(cadeia, "fim") != 0)
        {
            fputs(cadeia, p);
            if (ferror(p))
            {
                printf("\nErro na gravação da cadeia!");
            }
            else
            {
                printf("\nGravação realizada com sucesso!");
            }

            printf("\nDigite outra cadeia: ");
            gets(cadeia);
        }
    }
    fclose(p);
    return 0;
}