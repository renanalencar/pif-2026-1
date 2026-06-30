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