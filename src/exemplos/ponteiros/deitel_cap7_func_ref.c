#include <stdio.h>

/* Eleva uma variável ao cubo usando chamada por valor */
int cuboPorValor(int n)
{
    return n * n * n; /* eleva ao cubo a variável local n */
}

/* Eleva uma variável ao cubo usando chamada por referência */
void cuboPorReferencia(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr; /* eleva ao cubo a variável local n */
}

int main()
{
    int x = 5, y = 3;
    printf("O valor original de x é %d\n", x);
    x = cuboPorValor(x);
    printf("O novo valor de x é %d\n", x);

    printf("O valor original de y é %d\n", y);
    cuboPorReferencia(&y);
    printf("O novo valor de y é %d\n", y);
    return 0;
}
