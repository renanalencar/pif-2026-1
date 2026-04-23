#include <stdio.h>

#define MAX_QTDE_NOTAS 5

int main(void)
{
    double mNotas[MAX_QTDE_NOTAS];
    mNotas[1] = 1.6;
    mNotas[2] = 6.9;
    mNotas[3] = 5;
    mNotas[4] = 8;
    mNotas[5] = 5.2;

    for (int i = 0; i < MAX_QTDE_NOTAS; i++)
    {
        printf("%f\n", mNotas[i + 1]);
    }

    return 0;
}