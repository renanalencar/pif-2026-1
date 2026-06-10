#include <stdio.h>

int main()
{
    int v[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int *vPtr1 = NULL, *vPtr2 = NULL;
    vPtr1 = &v[0];
    vPtr2 = vPtr1;

    for (int i = 0; i < 10; i++)
    {
        printf("v[%d] = %d\n", i, *vPtr1);
        vPtr1++;
    }

    printf("O valor que vPtr1 aponta é %d\n\n", *vPtr1);

    for (int i = 0; i < 10; i++)
    {
        printf("*(vPtr2 + %d) = %d\n", i, *(vPtr2 + i));
    }
    printf("O valor que vPtr2 aponta é %d", *vPtr2);
    
    return 0;
}
