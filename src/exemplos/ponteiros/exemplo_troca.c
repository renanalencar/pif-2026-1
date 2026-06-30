#include <stdio.h>

// Função com parametro por referencia
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Função com parametro por valor
void swapV2(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d e b = %d\n", a, b);
}

void maiorMenor(int *a, int *b, int **maior, int **menor) {
    if (*a > *b)
    {
        *maior = a;
        *menor = b;
    } else {
        *maior = b;
        *menor = a;
    }
    
}

int main()
{
    int n1 = 2, n2 = 5;
    int *x, *y, *z = NULL, *w = NULL;
    
    printf("n1 = %d e n2 = %d\n", n1, n2);
    printf("\nefetuando a troca por valor (swapV2)...\n");
    swapV2(n1, n2);
    printf("n1 = %d e n2 = %d\n", n1, n2);

    printf("\nefetuando a troca por referência (swap)...\n");
    x = &n1;
    y = &n2;
    swap(x, y);
    printf("*x = %d e *y = %d\n", *x, *y);
    printf("n1 = %d e n2 = %d\n", n1, n2);

    maiorMenor(&n1, &n2, &z, &w);
    printf("O maior é: %d\n", *z);
    printf("O menor é: %d\n", *w);
    return 0;
}
