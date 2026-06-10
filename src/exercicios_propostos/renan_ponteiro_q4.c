#include <stdio.h>

int somaArray(int *v, int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += *(v + i);
    }
    return soma;
}

int main()
{
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("A soma de todos os elementos de v é %d\n", somaArray(vet, 10));
    return 0;
}
