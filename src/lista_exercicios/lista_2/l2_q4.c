#include <stdio.h>

#define DEV 5
#define MES 3
#define BONUS_POR_BUG 50.0

int main()
{
    int bugs[DEV][MES];
    int totais[DEV];
    float bonus[DEV];
    int i, j;

    for (i = 0; i < DEV; i++)
    {
        totais[i] = 0;
        for (j = 0; j < MES; j++)
        {
            printf("Entre com os bugs do mes %d do desenvolvedor %d: ", j + 1, i + 1);
            scanf("%d", &bugs[i][j]);
            totais[i] += bugs[i][j];
        }
    }

    for (i = 0; i < DEV; i++)
    {
        bonus[i] = totais[i] * BONUS_POR_BUG;
    }

    for (i = 0; i < DEV; i++)
    {
        printf("Desenvolvedor %d: total de bugs = %d, bonus = R$%.2f\n",
               i + 1, totais[i], bonus[i]);
    }

    return 0;
}