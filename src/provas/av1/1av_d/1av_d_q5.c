#include <stdio.h>

struct Jogo
{
    int pontuacao;
    int vidas;
};

int main(void)
{
    struct Jogo player1;
    player1.pontuacao = 100;
    player1.vidas = 3;
    player1.pontuacao += 50;
    player1.vidas--;
    printf("%d - %d\n", player1.pontuacao, player1.vidas);
    return 0;
}