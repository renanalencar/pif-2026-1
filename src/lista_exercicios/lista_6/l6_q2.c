#include <stdio.h>

void aplicarDesconto(float *preco, float percentualDesconto)
{
    *preco = *preco * (1.0f - percentualDesconto / 100.0f);
}

int main(void)
{
    float preco = 100.0f;

    aplicarDesconto(&preco, 15.0f);

    printf("Preco com desconto: %.2f\n", preco);

    return 0;
}