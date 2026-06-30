#include <stdio.h>

int calculaFatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

int main(void)
{
    int num = 5;
    printf("%d! = %d\n", num, calculaFatorial(num));
    printf("Pressione qualquer tecla para continuar...");
    getchar();
    return 0;
}
