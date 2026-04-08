#include <stdio.h>

#define FILIAIS 4
#define DIAS 7
#define TAM_NOME_DIA 14

int main()
{
    int treinos[FILIAIS][DIAS];
    int totalFilial[FILIAIS];
    int totalDia[DIAS];
    int i, j;
    int maiorFilial = 0, maiorDia = 0;
    char nomesDias[DIAS][TAM_NOME_DIA] = {
        "Segunda-feira", "Terca-feira", "Quarta-feira",
        "Quinta-feira", "Sexta-feira", "Sabado", "Domingo"};

    for (i = 0; i < FILIAIS; i++)
    {
        totalFilial[i] = 0;
    }
    for (j = 0; j < DIAS; j++)
    {
        totalDia[j] = 0;
    }

    for (i = 0; i < FILIAIS; i++)
    {
        for (j = 0; j < DIAS; j++)
        {
            printf("Entre com treinos Filial %d, Dia %d: ", i + 1, j + 1);
            scanf("%d", &treinos[i][j]);
            totalFilial[i] += treinos[i][j];
            totalDia[j] += treinos[i][j];
        }
    }

    for (i = 1; i < FILIAIS; i++)
    {
        if (totalFilial[i] > totalFilial[maiorFilial])
        {
            maiorFilial = i;
        }
    }

    for (j = 1; j < DIAS; j++)
    {
        if (totalDia[j] > totalDia[maiorDia])
        {
            maiorDia = j;
        }
    }

    printf("\n=== RELATORIO SEMANAL ===\n");
    for (i = 0; i < FILIAIS; i++)
    {
        printf("Filial %d: Total = %d treinos\n", i + 1, totalFilial[i]);
    }

    printf("\n");
    for (j = 0; j < DIAS; j++)
    {
        printf("%s: %d treinos\n", nomesDias[j], totalDia[j]);
    }

    printf("\nFilial mais ativa: %d (%d treinos)\n",
           maiorFilial + 1, totalFilial[maiorFilial]);
    printf("Dia mais movimentado: %s (%d treinos)\n",
           nomesDias[maiorDia], totalDia[maiorDia]);

    return 0;
}