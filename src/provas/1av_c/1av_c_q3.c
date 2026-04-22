#include <stdio.h>

int main()
{
    int i, j, m[5][5], s = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j)
            {
                m[i][i] = 2;
            }
            else
            {
                m[i][j] = 1;
            }
            s += m[i][j];
        }
    }
    printf("s: %d", s);
    return 0;
}