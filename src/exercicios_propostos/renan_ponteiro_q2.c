#include <stdio.h>

void maiorMenor(int *a, int *b, int *maior, int *menor)
{
    if (*a > *b)
    {
        *maior = *a;
        *menor = *b;
    }
    else
    {
        *maior = *b;
        *menor = *a;
    }
}

int main(void)
{
    int x = 7, y = 3, maior, menor;
    maiorMenor(&x, &y, &maior, &menor);
    printf("Maior=%d Menor=%d\n", maior, menor);
    return 0;
}