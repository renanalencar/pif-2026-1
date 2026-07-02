#include <stdio.h>

int PositivoOuNegativo(int n)
{
    if (n >= 0)
        return 1; /* positivo ou zero */
    return -1;    /* negativo */
}

int main(void)
{
    int n = -7;
    if (PositivoOuNegativo(n) > 0)
        printf("Positivo\n");
    else
        printf("Negativo\n");
    return 0;
}