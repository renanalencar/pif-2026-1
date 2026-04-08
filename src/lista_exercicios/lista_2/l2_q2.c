#include <stdio.h>

int main()
{
    int vetor[5] = {2, 0, 4, 3, 1};
    int i, j, a;

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                a = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = a;
            }

            printf("%d %d %d %d %d\n",
                   vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
        }
    }

    return 0;
}

/**
 * RESOLUÇÃO
 * 
 * O vetor inicial é:
 * {2, 0, 4, 3, 1}
 * 
 * I (i=0, j=1): Após troca inicial 2>0, vetor fica 0 2 4 3 1. Correto.
 * II (i=1, j=0): Nesse ponto, vetor está 0 2 3 1 4. Correto.
 * III (i=1, j=2): Após comparação 3>1, troca e fica 0 2 1 3 4. Correto.
 */