#include <stdio.h>

struct Funcionario
{
    float salarioFixo;
    float totalVendas;
    float comissao;
    float salarioFinal;
};

int main()
{
    struct Funcionario f;

    printf("Digite o salario fixo: ");
    scanf("%f", &f.salarioFixo);

    printf("Digite o total de vendas: ");
    scanf("%f", &f.totalVendas);

    f.comissao = f.totalVendas * 0.06;
    f.salarioFinal = f.salarioFixo + f.comissao;

    printf("\nSalario fixo: %.2f\n", f.salarioFixo);
    printf("Total de vendas: %.2f\n", f.totalVendas);
    printf("Comissao: %.2f\n", f.comissao);
    printf("Salario final: %.2f\n", f.salarioFinal);

    return 0;
}