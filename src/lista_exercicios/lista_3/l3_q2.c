#include <stdio.h>
int main(void)
{
    int m[7] = {4, -1, 2, 3, -3, 7, 9};
    int soma = 0, i = -1, cont = 0, media = 0;
    while (i < 5)
    {
        if (m[++i] <= 0)
            continue;
        soma += m[i];
        cont++;
    }
    media = (soma == 0) ? 0 : soma / cont;
    printf("%d", media);
    return 0;
}

// TESTE DE MESA:
//
// | # | i  | m[i] | soma | cont | media |
// | 1 | 0  | 4    | 4    | 1    | 0     |
// | 2 | 1  | -1   | 4    | 1    | 0     |
// | 3 | 2  | 2    | 6    | 2    | 0     |
// | 4 | 3  | 3    | 9    | 3    | 0     |
// | 5 | 4  | -3   | 9    | 3    | 0     |
// | 6 | 5  | 7    | 16   | 4    | 4     |

// Operador ternário é um IF-ELSE "simplificado"
// (soma == 0) ? 0 : soma / cont; é o mesmo que:
// if (soma == 0) {
//     return 0;
// } else {
//     return soma / cont;
//}
// Declaração do operador ternário:
// <CONDIÇÃO> ? VERDADEIRA : FALSA


/**
 * O código percorre e soma os elementos do vetor, mas o comando `continue` pula a iteração atual sempre que 
 * o número avaliado for menor ou igual a zero (descartando os negativos `-1` e `-3`). 
 * A condição do laço vai até `i < 5`, o que significa que os índices efetivamente acessados e processados durante
 * as validações vão do índice 0 até o índice 5 (pois há um pré-incremento `++i`). 
 * Os números maiores que zero somados são: 4 (índice 0), 2 (índice 2), 3 (índice 3) e 7 (índice 5). 
 * A soma resulta em 16. O contador registra 4 elementos válidos. A média impressa será inteira: 16 / 4 = 4.
 */