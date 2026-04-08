#include <stdio.h>

int main()
{
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58.0;
        printf("Peso ideal: %.2f kg\n", pesoIdeal);
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2f kg\n", pesoIdeal);
    }
    else
    {
        printf("Sexo invalido.\n");
    }

    return 0;
}