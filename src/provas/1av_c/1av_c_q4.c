#include <stdio.h>
int main(void)
{
    char texto[] = "linguagemc";
    int i = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            texto[i] = texto[i] - 32;
        }
        i++;
    }
    printf("%s\n", texto);
    return 0;
}