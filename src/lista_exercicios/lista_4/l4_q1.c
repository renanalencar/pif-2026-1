#include <stdio.h>

int soma(int n)
{
    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }
    return soma;
}

int main(void)
{
    int n = 10;
    printf("Soma de 1 ate %d = %d\n", n, soma(n));
    return 0;
}