#include <stdio.h>

int maior(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main(void)
{
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    printf("Maior: %d\n", maior(x, y));
    return 0;
}