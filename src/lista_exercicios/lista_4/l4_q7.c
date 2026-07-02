#include <stdio.h>

double calculaMediaPositivos(void)
{
    double valor, soma = 0.0;
    int cont = 0;

    while (1)
    {
        scanf("%lf", &valor);
        if (valor == 0.0)
            break;
        if (valor > 0.0)
        {
            soma += valor;
            cont++;
        }
    }

    if (cont == 0)
        return 0.0;
    return soma / cont;
}

int main(void)
{
    printf("Digite valores positivos, finalize com 0:\n");
    printf("Media = %.2f\n", calculaMediaPositivos());
    return 0;
}