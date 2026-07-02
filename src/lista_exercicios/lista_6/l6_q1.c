#include <stdio.h>

int main(void)
{
    float preco = 100.0f;
    float *ptrPreco = &preco;

    *ptrPreco = *ptrPreco * 1.10f; // aumento de 10%

    printf("Preco atualizado: %.2f\n", preco);

    return 0;
}