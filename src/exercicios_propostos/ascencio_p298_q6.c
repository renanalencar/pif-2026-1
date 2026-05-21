#include <stdio.h>

float calculaPeso(float alt, char sexo) {
    // if (sexo == 'F' || sexo == 'f')
    // {
    //     return 62.1 * alt - 44.7;
    // } else
    // {
    //     return 72.7 * alt - 58;
    // }
    switch (sexo)
    {
    case 'F':
    case 'f':
        return 62.1 * alt - 44.7;
    case 'M':
    case 'm':
        return 72.7 * alt - 58;
    default:
        printf("Sexo informado é inválido!\n");
        return 0;
    }
}

int main(void)
{
    float altura, pesoIdeal;
    char sexo;
    printf("Digite altura (em metros): ");
    scanf("%f%*c", &altura);
    printf("Digite sexo (F - Feminino, M - Masculino): ");
    scanf("%c%*c", &sexo);
    pesoIdeal = calculaPeso(altura, sexo);
    printf("\nPeso ideal é %.2f kg\n", pesoIdeal);
    printf("\nPressione qualquer tecla para continuar...");
    getchar();
    return 0;
}
