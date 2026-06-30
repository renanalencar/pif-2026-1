#include <stdio.h>

enum Operacao
{
    SOMAR = 1,
    SUBTRAIR,    // 2
    MULTIPLICAR, // 3
    DIVIDIR,     // 4
    SAIR         // 5
};

int main(void)
{
    float a, b;
    enum Operacao operador;

    while (operador != SAIR)
    {
        printf("\n### CALCULADORA ###\n");
        printf("1. SOMAR\n");
        printf("2. SUBTRAIR\n");
        printf("3. MULTIPLICAR\n");
        printf("4. DIVIDIR\n");
        printf("5. SAIR\n");
        printf("\nDigite opção: ");
        scanf("%d%*c", &operador);

        if (operador == SAIR)
        {
            continue;
        }
        
        printf("Digite dois números (exemplo 12 13): ");
        scanf("%f %f%*c", &a, &b);

        switch (operador)
        {
        case SOMAR:
            printf("%.2f + %.2f = %.2f", a, b, (a + b));
            break;
        case SUBTRAIR:
            printf("%.2f - %.2f = %.2f", a, b, (a - b));
            break;
        case MULTIPLICAR:
            printf("%.2f * %.2f = %.2f", a, b, (a * b));
            break;
        case DIVIDIR:
            if (b != 0)
            {
                printf("%.2f \\ %.2f = %.2f", a, b, (a / b));
            }
            else
            {
                printf("Divisão por zero impossível!\n");
            }
            break;
        default:
            break;
        }
    }

    return 0;
}