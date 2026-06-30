#include <stdio.h>

int main(void)
{
    char texto[20] = "casa";
    int i;
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a')
        {
            texto[i] = 'o';
        }
    }
    printf("%s", texto);
    return 0;
}