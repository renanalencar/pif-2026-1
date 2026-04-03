#include <stdio.h>
#include <string.h>

struct Habitante {
    float salario;
    int idade;
    int numFilhos;
    char sexo;
};

int main(void) {
    struct Habitante habitantes[20]; // declara vetor de habitantes
    float mediaSalario = 0.0, mediaNumeroFilhos = 0.0, maiorSalario = 0.0, percentualMulheres = 0.0;
    int totalMulheres = 0;

    // Popula o vetor habitantes
    for (int i = 0; i < 20; i++)
    {
        printf("Salario: R$");
        scanf("%f%*c", &habitantes[i].salario);
        printf("Idade: ");
        scanf("%d%*c", &habitantes[i].idade);
        printf("Numero de filhos: ");
        scanf("%d%*c", &habitantes[i].numFilhos);
        printf("Sexo (F - Feminino, M - Masculino): ");
        scanf("%c%*c", &habitantes[i].sexo);
    }
    
    // Percorre o vetor habitantes
    for (int i = 0; i < 20; i++) {
        // Soma todos os salários
        mediaSalario += habitantes[i].salario;
        // Soma todos os números de filhos
        mediaNumeroFilhos += habitantes[i].numFilhos;
        // Verifica o maior salário
        if (habitantes[i].salario > maiorSalario) {
            maiorSalario = habitantes[i].salario;
        }
        // Conta a quantidade de mulheres
        if (habitantes[i].sexo == 'F') {
            totalMulheres++;
            // Verifica se o salário da mulher é maior que R$1000,00
            if (habitantes[i].salario > 1000.0) {
                percentualMulheres++;
            }
        }
    }

    // Calcula a média de salário
    mediaSalario /= 20; // mediaSalario = mediaSalario / 20;
    // Calcula a média de filhos
    mediaNumeroFilhos /= 20; // mediaNumeroFilhos = mediaNumeroFilhos / 20;
    // Calcula o percentual de mulheres com salário acima de R$1.000,00
    percentualMulheres /= totalMulheres; // percentualMulheres = percentualMulheres / totalMulheres;

    // Mostra as informações ao usuário
    printf("Média salarial: R$%.2f\n", mediaSalario);
    printf("Média de filhos: %.2f\n", mediaNumeroFilhos);
    printf("Maior salário: R$%.2f\n", maiorSalario);
    printf("Percentual de mulheres com salário maior que R$1000,00: %.2f%%", percentualMulheres);

    return 0;
}