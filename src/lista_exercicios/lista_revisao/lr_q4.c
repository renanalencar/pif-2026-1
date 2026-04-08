#include <stdio.h>

int main()
{
    float vendas[12][4], totalMes, totalSemana[4] = {0};
    float totalAno = 0;
    char *meses[12] = {
        "Janeiro", "Fevereiro", "Marco", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"};
    int i, j;

    for (i = 0; i < 12; i++)
    {
        printf("Digite as vendas de %s:\n", meses[i]);
        for (j = 0; j < 4; j++)
        {
            printf("Semana %d: ", j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

    printf("\nTotal vendido em cada mes:\n");
    for (i = 0; i < 12; i++)
    {
        totalMes = 0;
        for (j = 0; j < 4; j++)
        {
            totalMes += vendas[i][j];
            totalSemana[j] += vendas[i][j];
            totalAno += vendas[i][j];
        }
        printf("%s: %.2f\n", meses[i], totalMes);
    }

    printf("\nTotal vendido em cada semana durante o ano:\n");
    for (j = 0; j < 4; j++)
    {
        printf("Semana %d: %.2f\n", j + 1, totalSemana[j]);
    }

    printf("\nTotal vendido no ano: %.2f\n", totalAno);

    return 0;
}