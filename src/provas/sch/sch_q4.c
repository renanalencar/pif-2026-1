#include <stdio.h>

int fatorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", fatorial(n));
    return 0;
}

// Gabarito esperado:

// A função deve ser recursiva.
// Caso-base: n <= 1.
// Caso recursivo: n * fatorial(n - 1).