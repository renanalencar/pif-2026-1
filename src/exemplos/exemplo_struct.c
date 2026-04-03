#include <stdio.h>

struct Conta
{
    int numero;
    char titular[50];
    float saldo;
};

int main()
{
    struct Conta c;
    printf("Numero: ");
    scanf("%d%*c", &c.numero);
    printf("Titular: ");
    fgets(c.titular, sizeof(c.titular), stdin);
    printf("Saldo: ");
    scanf("%f%*c", &c.saldo);
    printf("Conta %d - %s - Saldo: R$%.2f\n", c.numero, c.titular, c.saldo);

    return 0;
}