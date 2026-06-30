/* Usando as notações de subscrito e ponteiro com arrays */
#include <stdio.h>

int main()
{
    int i, offset, b[] = {10, 20, 30, 40};
    int *bPtr = b; /* define bPtr para apontar para o array b */

    printf("Array b impresso com:\nNotação de subscrito de array\n");

    for (i = 0; i <= 3; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }

    printf("\nNotacao ponteiro/offset em gue \no ponteiro e o nome do array\n");
    for (offset = 0; offset <= 3; offset++)
    {
        printf("*(b + %d) = %d\n", offset, *(b + offset));
    }

    printf("\nNotacao de subscrito de ponteiro\n");
    for (i = 0; i <= 3; i++)
    {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
    }

    printf("\nNotacao ponteiro/offset\n");

    for (offset = 0; offset <= 3; offset++)
    {
        printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
    }

    return 0;
}