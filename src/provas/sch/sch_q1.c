#include <stdio.h>

int main(void)
{
    int i, soma = 0;

    for (i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
        else
        {
            soma += 2 * i;
        }
    }

    printf("%d", soma);
    return 0;
}

// Gabarito
// Questão 1
// Resposta: D. 24

// Justificativa:

// i = 1 → soma += 2, total = 2.
// i = 2 → soma += 2, total = 4.
// i = 3 → soma += 6, total = 10.
// i = 4 → soma += 4, total = 14.
// i = 5 → soma += 10, total = 24.
