#include <stdio.h>

int main(void)
{
    int numero1 = 16, numero2 = 91, numero3 = 35;
    if (numero1 > numero2)
    {
        if (numero1 > numero3)
        {
            printf("numero1 \n");
        }
        else
        {
            printf("numero3 \n");
        }
    }
    else if (numero2 > numero3)
    {
        printf("numero2 \n");
    }
    else
    {
        printf("numero3 \n");
    }

    return 0;
}
