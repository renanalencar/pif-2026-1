#include <stdio.h>

int main() {
    int numeroConta;
    float saldoInicial, cobrancas, creditos, limiteCredito, novoSaldo;

    printf("Entre com o numero da conta (-1 para finalizar): ");
    scanf("%d", &numeroConta);

    while (numeroConta != -1) {
        printf("Entre com o saldo inicial: ");
        scanf("%f", &saldoInicial);
        
        printf("Entre com o total de cobrancas: ");
        scanf("%f", &cobrancas);
        
        printf("Entre com o total de creditos: ");
        scanf("%f", &creditos);
        
        printf("Entre com o limite de credito: ");
        scanf("%f", &limiteCredito);

        novoSaldo = saldoInicial + cobrancas - creditos;

        if (novoSaldo > limiteCredito) {
            printf("Conta: %d\n", numeroConta);
            printf("Limite de credito: %.2f\n", limiteCredito);
            printf("Saldo: %.2f\n", novoSaldo);
            printf("Limite de Credito Excedido.\n\n");
        }

        printf("Entre com o numero da conta (-1 para finalizar): ");
        scanf("%d", &numeroConta);
    }

    return 0;
}