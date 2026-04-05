#include <stdio.h>

int main() {
    float vendasBrutas, comissao;
    
    printf("Entre com a venda em reais (-1 para finalizar): ");
    scanf("%f", &vendasBrutas);
    
    while (vendasBrutas != -1) {
        comissao = 150.0 + (vendasBrutas * 0.10);
        
        printf("Comissao: R$%.2f\n\n", comissao);
        
        printf("Entre com a venda em reais (-1 para finalizar): ");
        scanf("%f", &vendasBrutas);
    }
    
    return 0;
}