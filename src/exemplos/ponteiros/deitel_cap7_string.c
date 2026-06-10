/*Copiando uma string usando a notação de array
e a notação de ponteiro */
#include <stdio.h>
#include <string.h>

/* copia s2 para sl usando a notação de array */
void copy1(char *s1, char *s2)
{
    int i;
    for (i = 0; i < strlen(s2); i++)
    {
        s1[i] = s2[i];
    }
}

/* copia s2 para s1 usando a notação de ponteiro */
void copy2(char *s1, char *s2)
{
    int i;
    int tam = strlen(s2);
    for (int i = 0; i <= tam; i++)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
}

int main()
{
    char string1[10], *string2 = "Hello", string3[10], string4[] = "Good Bye";

    copy1(string1, string2);
    printf("string1 = %s\n", string1);

    copy2(string3, string4);
    printf("string3 = %s\n", string3);

    return 0;
}
