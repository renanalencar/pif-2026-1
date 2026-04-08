#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "Concurso";
    char str2[20];
    strcpy(str2, str1);
    str2[3] = '\0';
    printf("%s - %d\n", str2, (int)strlen(str1));

    return 0;
}

// char str2[20];       | 0 | 1 | 2 | 3  | 4 | 5 | 6 | 7 | 8  |  9  | ... | 19 |
// strcpy(str2, str1);  |'C'|'o'|'n'|'c' |'u'|'r'|'s'|'o'|'\0'| ... | ... |    |
// str2[3] = '\0';      |'C'|'o'|'n'|'\0'|'u'|'r'|'s'|'o'|'\0'| ... | ... |    |


/**
 * Efeito de `str2[3] = '\0';`: Em C, strings são cadeias de caracteres finalizadas com o marcador nulo `\0`. 
 * Ao copiar "Concurso" para `str2` (via `strcpy`) e inserir manualmente o `\0` no índice 3, a string é artificialmente truncada. 
 * O código mantém intactos os índices 0 ('C'), 1 ('o') e 2 ('n'), forçando o fim da string logo em seguida. 
 * Assim, `str2` passa a ser reconhecida pelas funções da linguagem apenas como "Con".
 * O tamanho da string original (`str1`) aferido pelo `strlen` continua sendo 8. Logo, a saída exata impressa será **`Con - 8`**.
 * 
 * SAÍDA:
 * Con - 8
 */