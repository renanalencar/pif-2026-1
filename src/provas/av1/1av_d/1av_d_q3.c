#include <stdio.h>

int main(void)
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int i, j, soma = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                soma += mat[i][j];
            }
        }
    }
    printf("%d", soma);
    return 0;
}