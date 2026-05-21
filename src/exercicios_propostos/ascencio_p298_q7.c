#include <stdio.h>

void calculaMedia() {
    int num, soma = 0, cont = 0;
    float media;
    printf("Digite um número inteiro positivo: ");
    scanf("%d%*c", & num);

    while (num != 0)
    {
        soma += num;
        cont++;
        media = (soma * 1.0) / cont;
        printf("\nMédia: %.2f\n", media);

        printf("Digite um número inteiro positivo: ");
        scanf("%d%*c", & num);
    }
}

int main(void)
{
    calculaMedia();
    printf("\nPressione qualquer tecla para continuar...");
    getchar();
    return 0;
}
