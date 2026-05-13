#include <stdio.h>

int main()
{
    FILE *p;
    char carac;
    p = fopen("input/caract.dat", "r"); // Abre arquivo caract.dat no modo READ
    if (p == NULL)
        printf("\nErro na abertura");
    else
    {
        do
        {
            carac = fgetc(p);
            if (ferror(p))
                printf("\nErro na leitura do caractere!");
            else
            {
                if (!feof(p))
                {
                    printf("\nLeitura realizada com sucesso!");
                    printf("\tCaractere lido: %c", carac);
                }
            }
            // feof retorna se o ponteiro chegou ao fim do arquivo.
            // Se o ponteiro aponta para EOF, feof retorna 1.
            // Caso contrário, retorna 0.
            // EOF significa END OF FILE (fim do arquivo).
        } while (!feof(p));
    }
    fclose(p);
    return 0;
}