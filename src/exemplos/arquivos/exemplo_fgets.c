#include <stdio.h>
int main()
{
    FILE *p;
    char cadeia[5];
    p = fopen("input/cadeias.txt", "r"); // Modo READ (LEITURA)
    if (p == NULL)
        printf("\nErro na abertura!");
    else
    {
        while (!feof(p))
        {
            fgets(cadeia, 5, p);
            if (ferror(p))
                printf("\nErro na leitura da cadeia!");
            else
            {
                printf("\nLeitura realizada com sucesso!");
                printf("\tCadeia lida: %s", cadeia);
            }
        }
    }
    printf("\nPressione qualquer tecla para continuar...");
    getchar(); // Pausa a execução do programa
    fclose(p);
    
    return 0;
}