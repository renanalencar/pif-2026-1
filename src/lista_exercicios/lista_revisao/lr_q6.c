#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[300];
    int i = 0, inicio, fim, tamPalavra, metade;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); //gets() mais seguro

    while (frase[i] != '\0')
    {
        // A função isalpha verifica se o valor de frase[i] é uma letra
        while (frase[i] != '\0' && !isalpha(frase[i]))
        {
            i++;
        }

        inicio = i;

        while (frase[i] != '\0' && isalpha(frase[i]))
        {
            i++;
        }

        fim = i - 1;
        tamPalavra = fim - inicio + 1;

        if (tamPalavra > 0)
        {
            metade = tamPalavra / 2;
            for (int j = inicio + metade; j <= fim; j++)
            {
                frase[j] = '?';
            }
        }
    }

    printf("Frase criptografada:\n%s", frase);

    return 0;
}