#include <stdio.h>

struct Produto
{
    int quantidade;
    float preco;
};

int main(void)
{
    struct Produto carrinho[2];
    float total = 0.0;
    int i;
    carrinho[0].quantidade = 2;
    carrinho[0].preco = 15.0;
    carrinho[1].quantidade = 1;
    carrinho[1].preco = 20.0;
    for (i = 0; i < 2; i++)
    {
        total += carrinho[i].quantidade * carrinho[i].preco;
    }
    printf("%.1f\n", total);
    return 0;
}