#include <stdio.h>
struct Ponto
{
    int x;
    int y;
};
int main(void)
{
    struct Ponto mapa[3];
    int i;
    for (i = 0; i < 2; i++)
    {
        mapa[i].x = i * 2;
        mapa[i].y = i * 3;
    }
    printf("%d\n", mapa[2].x + mapa[2].y);
    return 0;
}