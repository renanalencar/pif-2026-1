#include <stdio.h>
int main(void)
{
    int num = 5, primeiro = 0, segundo = 1;
    int proximo, c, d = 0;
    for (c = 0; c < num; c++)
    {
        if (c <= 1)
        {
            proximo = c;
        }
        else
        {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        d += proximo;
    }
    printf("%d", d);
    return 0;
}

// TESTE DE MESA
//
// | # | c | proximo | primeiro | segundo | d |
// | 1 | 0 | 0       | 0        | 1       | 0 |
// | 2 | 1 | 1       | 0        | 1       | 1 |
// | 3 | 2 | 1       | 1        | 1       | 2 |
// | 4 | 3 | 2       | 1        | 2       | 4 |
// | 5 | 4 | 3       | 2        | 3       | 7 |


/**
 * O laço gera e acumula os primeiros termos da sequência de Fibonacci na variável `d`. 
 * Para `num = 5`, os primeiros termos gerados (`proximo`) são 0, 1, 1, 2, 3. 
 * A soma total acumulada passo a passo é 0 + 1 + 1 + 2 + 3 = 7.
 * 
 * SAÍDA:
 * 7
 */