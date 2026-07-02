#include <stdio.h>

double calculaPesoIdeal(double alt, char sexo)
{
    if (sexo == 'M' || sexo == 'm')
    {
        return 72.7 * alt - 58.0;
    }
    else
    {
        return 62.1 * alt - 44.7;
    }
}

int main(void)
{
    printf("Homem: %.2f\n", calculaPesoIdeal(1.75, 'M'));
    printf("Mulher: %.2f\n", calculaPesoIdeal(1.60, 'F'));
    return 0;
}