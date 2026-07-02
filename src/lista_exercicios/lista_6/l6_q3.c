#include <stdio.h>

struct Produto {
    int id;
    float preco;
};

void aplicarDesconto(struct Produto *produto, float percentual_desconto) {
    produto->preco = produto->preco * (1.0f - percentual_desconto / 100.0f);
}

int main(void) {
    struct Produto p = {1, 100.0f};

    aplicarDesconto(&p, 20.0f);

    printf("ID: %d\n", p.id);
    printf("Preco com desconto: %.2f\n", p.preco);

    return 0;
}