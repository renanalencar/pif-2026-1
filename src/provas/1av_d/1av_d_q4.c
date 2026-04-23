#include <stdio.h>
int main(void)
{
    char palavra[] = "Concurso";
    int cont = 0;
    while (palavra[cont] != '\0')
    {
        cont++;
    }
    printf("%d\n", cont);
    return 0;
}