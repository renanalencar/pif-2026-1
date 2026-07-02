#include <stdio.h>

struct Produto {
    int id;
    float preco;
};

void aplicarDesconto(struct Produto *produto, float percentualDesconto) {
    produto->preco = produto->preco * (1.0f - percentualDesconto / 100.0f);
}

void imprimirProdutos(struct Produto *ptr, int quantidade) {
    int i;

    for (i = 0; i < quantidade; i++) {
        printf("Produto %d\n", i + 1);
        printf("ID: %d\n", (ptr + i)->id);
        printf("Preco: %.2f\n\n", (ptr + i)->preco);
    }
}

int main(void) {
    struct Produto estoque[3] = {
        {1, 100.0f},
        {2, 200.0f},
        {3, 300.0f}
    };

    aplicarDesconto(&estoque[0], 10.0f);
    aplicarDesconto(&estoque[1], 5.0f);
    aplicarDesconto(&estoque[2], 20.0f);

    imprimirProdutos(estoque, 3);

    return 0;
}