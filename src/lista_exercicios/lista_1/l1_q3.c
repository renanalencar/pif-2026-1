#include <stdio.h>

int main() {
    float litros, km;
    float somaTaxas = 0.0;
    int contador = 0;

    printf("Entre com os litros consumidos (-1 para finalizar): ");
    scanf("%f%*c", &litros);
    
    while (litros != -1) {
        printf("Entre com os km percorridos: ");
        scanf("%f%*c", &km);

        float taxa = km / litros;
        printf("A taxa km/litro para esse tanque foi %.6f\n\n", taxa);

        somaTaxas += taxa;
        contador++;

        printf("Entre com os litros consumidos (-1 para finalizar): ");
        scanf("%f%*c", &litros);
    }

    if (contador > 0) {
        printf("A taxa total de km/litro foi %.6f\n", somaTaxas / contador);
    } else {
        printf("Nenhum tanque foi processado.\n");
    }

    return 0;
}