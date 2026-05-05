#include <stdio.h>

typedef struct
{
    int codigo;
    char nome[50];
    float preco;
} Produto;

float precoFinal(float preco)
{
    return preco * 1.10f;
}

int main(void)
{
    FILE *arq;
    Produto p;
    int i;

    arq = fopen("data\\produtos.dat", "wb");
    if (arq == NULL)
        return 1;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o codigo, nome e preco do produto %d: ", i + 1);
        scanf("%d %49s %f", &p.codigo, p.nome, &p.preco);
        p.preco = precoFinal(p.preco);
        fwrite(&p, sizeof(Produto), 1, arq);
    }
    fclose(arq);

    arq = fopen("data\\produtos.dat", "rb");
    if (arq == NULL)
        return 1;

    while (fread(&p, sizeof(Produto), 1, arq) == 1)
    {
        printf("%d %s %.2f\n", p.codigo, p.nome, p.preco);
    }
    fclose(arq);

    return 0;
}