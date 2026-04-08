#include <stdio.h>

int main()
{
    char sexo, resposta;
    int i;
    int sim = 0, nao = 0, mulheresSim = 0;
    int totalHomens = 0, homensNao = 0;
    float percHomensNao;

    for (i = 1; i <= 10; i++)
    {
        printf("Entrevistado %d\n", i);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Resposta (S/N): ");
        scanf(" %c", &resposta);

        if (resposta == 'S' || resposta == 's')
        {
            sim++;
            if (sexo == 'F' || sexo == 'f')
            {
                mulheresSim++;
            }
        }
        else if (resposta == 'N' || resposta == 'n')
        {
            nao++;
        }

        if (sexo == 'M' || sexo == 'm')
        {
            totalHomens++;
            if (resposta == 'N' || resposta == 'n')
            {
                homensNao++;
            }
        }
    }

    if (totalHomens > 0)
    {
        percHomensNao = (homensNao * 100.0) / totalHomens;
    }
    else
    {
        percHomensNao = 0;
    }

    printf("\nNumero de pessoas que responderam sim: %d\n", sim);
    printf("Numero de pessoas que responderam nao: %d\n", nao);
    printf("Numero de mulheres que responderam sim: %d\n", mulheresSim);
    printf("Percentual de homens que responderam nao: %.2f%%\n", percHomensNao);

    return 0;
}