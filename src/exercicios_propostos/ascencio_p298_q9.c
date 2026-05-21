#include <stdio.h>

int somaDivisores(int n)
{
    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }
    return soma;
}

int main(void)
{
    int num = 10;
    printf("Soma dos divisores de %d é %d\n", num, somaDivisores(num));
    printf("\nPressione qualquer tecla para continuar...");
    getchar();
    return 0;
}
