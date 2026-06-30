#include <stdio.h>

enum Status
{
    ABERTO = 1,
    FECHADO = 2,
    CANCELADO = 3
};

struct Chamado
{
    int codigo;
    enum Status situacao;
};

int main(void)
{
    struct Chamado c = {10, FECHADO};
    struct Chamado *p = &c;

    p->codigo += 5;
    p->situacao = CANCELADO;

    printf("%d %d", c.codigo, c.situacao);
    return 0;
}