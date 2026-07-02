#include <stdio.h>

int main(void)
{
    char codigo[] = "a1b2c3d4";
    int i = 0;
    while (codigo[i] != '\0')
    {
        if (codigo[i] >= '0' && codigo[i] <= '9')
        {
            codigo[i] = '*';
        }
        i++;
    }
    printf("%s\n", codigo);
    return 0;
}