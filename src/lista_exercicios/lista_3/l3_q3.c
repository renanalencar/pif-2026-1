#include <stdio.h>
int main(void)
{
    int m[3][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}};
    int soma = 0;
    for (int i = 0; i < 3; i++)
    {
        soma += m[i][i];
    }
    printf("%d", soma);
    return 0;
}










/**
 * O laço de repetição `for` possui apenas uma variável de controle `i` que vai de 0 a 2. 
 * Dentro do laço, a instrução `m[i][i]` acessa estritamente os elementos da diagonal principal da matriz quadrada 3x3. 
 * Os valores acessados são `m[0][0]` (que vale 1), `m[1][1]` (que vale 2) e `m[2][2]` (que vale 3). 
 * A soma desses três valores é 1 + 2 + 3 = 6.
 */