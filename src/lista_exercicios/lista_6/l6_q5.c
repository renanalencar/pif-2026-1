#include <stdio.h>
#include <stdlib.h>

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
        printf("\nProduto %d\n", i + 1);
        printf("ID: %d\n", (ptr + i)->id);
        printf("Preco: %.2f\n", (ptr + i)->preco);
    }
}

int main(void) {
    int quantidade;
    int i;
    struct Produto *estoque;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    estoque = malloc(quantidade * sizeof(struct Produto));

    if (estoque == NULL) {
        printf("Erro: nao foi possivel alocar memoria.\n");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("\nCadastro do produto %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &((estoque + i)->id));

        printf("Preco: ");
        scanf("%f", &((estoque + i)->preco));
    }

    for (i = 0; i < quantidade; i++) {
        aplicarDesconto(estoque + i, 10.0f);
    }

    printf("\nProdutos cadastrados com 10%% de desconto aplicado:\n");
    imprimirProdutos(estoque, quantidade);

    free(estoque);

    return 0;
}