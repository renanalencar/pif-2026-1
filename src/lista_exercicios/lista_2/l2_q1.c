#include <stdio.h>

int main()
{
    int matriz[3][4];
    int i, j, c;

    c = 0;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            c = c + 1;
            matriz[i][j] = c;
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            c = matriz[2 - i][3 - j];
            matriz[i][j] = c;
        }
    }

    return 0;
}

/**
 * RESOLUÇÃO
 * 
 * A) Dados da matriz ao termino da linha 14:
 * 
 * 1 5  9
​ * 2 6 10
​ * 3 7 11
​ * 4 8 12
 *
 * B) Dados de `matriz` ao término da execução da linha 21:
 * 
 * 12 8 4
 * ​11 7 3
​ * 10 6 2
​ *  9 5 1
 */