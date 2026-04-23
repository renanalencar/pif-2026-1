#include <stdio.h>

int main()
{
    int x, y, z, tab[2][3];
    for (x = 0; x < 2; ++x)
        for (y = 0; y < 3; ++y)
            tab[x][y] = (x * 3) + y + 1;
    z = tab[0][1] * tab[1][2];
    printf("z: %d\n", z);
    return 0;
}