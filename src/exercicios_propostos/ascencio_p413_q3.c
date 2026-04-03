#include <stdio.h>
#include <string.h>

#define TAM 50

typedef struct {
    char sexo;
    int idade;
    float altura;
    char corOlhos;
} Habitante;

int main(void) {
    Habitante habitantes[TAM];
    float mediaIdade = 0.0, percentualHomens = 0.0;
    int totalCastanhoAlto = 0, maiorIdade = 0, totalMulheres = 0;
    
    // Popula o vetor habitantes
    for (int i = 0; i < TAM; i++)
    {
        printf("Sexo (F - Feminino, M - Masculino): ");
        scanf("%c%*c", &habitantes[i].sexo);
        printf("Idade: ");
        scanf("%d%*c", &habitantes[i].idade);
        printf("Altura (em metros): ");
        scanf("%f%*c", &habitantes[i].altura);
        printf("Cor dos olhos (A - Azuis, V - Verdes, C - Castanhos): ");
        scanf("%c%*c", &habitantes[i].corOlhos);

    }
    
    // Percorre o vetor habitantes
    for (int i = 0; i < TAM; i++) {
        // Verifica se olhos são castanhos e altura superior a 1.60
        if (habitantes[i].corOlhos == 'C' && habitantes[i].altura > 1.60)
        {
            totalCastanhoAlto++;
            mediaIdade += habitantes[i].idade;
        }
        
        // Verifica a maior idade
        if (habitantes[i].idade > maiorIdade) {
            maiorIdade = habitantes[i].idade;
        }

        // Verifica se é mulher
        if (habitantes[i].sexo == 'F')
        {
            // Verifica se idade está entre 20 e 45 ou se olhos são verdes e altura menor que 1.70
            if ((habitantes[i].idade >= 20 && habitantes[i].idade <= 45) || 
                    (habitantes[i].corOlhos == 'V' && habitantes[i].altura < 1.70)) {
                totalMulheres++;
            }
        } else {
            // Computa a quantidade de homens
            percentualHomens++;
        }
        
    }

    // Calcula a média de idade
    mediaIdade /= totalCastanhoAlto;
    // Calcula o percentual de homens em relação ao total de habitantes
    percentualHomens /= TAM; // percentualHomens = percentualHomens / TAM;

    // Mostra as informações ao usuário
    printf("Média de idade entre habitantes com olhos castanhos e altura maior que 1.60: %.2f\n", mediaIdade);
    printf("Maior idade: %d\n", maiorIdade);
    printf("Total de mulheres com idade entre 20 e 45 anos ou olhos verdes e altura inferior a 1.70: %d\n", totalMulheres);
    printf("Percentual de homens: %.2f%%", percentualHomens);

    return 0;
}