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

// Questão 3
// Resposta: D. 15 3

// Justificativa:

// c.codigo começa em 10 e recebe +5, ficando 15.
// c.situacao recebe CANCELADO, cujo valor é 3.

// Como p aponta para c, as alterações afetam a estrutura original