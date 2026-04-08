#include <stdio.h>

int main()
{
    int logica[15], lp[10];
    int i, j;

    printf("Digite as 15 matriculas de Logica:\n");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &logica[i]);
    }

    printf("Digite as 10 matriculas de Linguagem de Programacao:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &lp[i]);
    }

    printf("\nMatriculas que aparecem nos dois vetores:\n");
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (logica[i] == lp[j])
            {
                printf("%d\n", logica[i]);
            }
        }
    }

    return 0;
}