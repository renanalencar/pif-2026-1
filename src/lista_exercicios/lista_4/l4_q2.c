#include <stdio.h>

int converteParaSegundos(int h, int m, int s)
{
    return h * 3600 + m * 60 + s;
}

int main(void)
{
    int h = 2, m = 40, s = 10;
    printf("%d segundos\n", converteParaSegundos(h, m, s));
    return 0;
}