#include <stdio.h>

#define PI 3.14

enum TipoForma
{
    CIRCULO,  // 0
    RETANGULO // 1
};

struct Forma
{
    enum TipoForma tipo;
    // Union anonimo
    union
    {
        float raio;
        // Struct anonimo
        struct
        {
            float largura;
            float altura;
        };
    };
};

int main(void)
{
    struct Forma obj;
    int tipo;

    // obj.tipo = CIRCULO;
    // obj.raio = 5.5;

    printf("Digite o tipo do objeto (0 - CIRCULO, 1 - RETANGULO) ou 2 - SAIR: ");
    scanf("%d%*c", &tipo);

    while (tipo != 2)
    {
        if (tipo == CIRCULO)
        {
            obj.tipo = CIRCULO;
            printf("Digite o raio: ");
            scanf("%f%*c", &obj.raio);
        }
        else if (tipo == RETANGULO)
        {
            obj.tipo = RETANGULO;
            printf("Digite a largura: ");
            scanf("%f%*c", &obj.largura);
            printf("Digite a altura: ");
            scanf("%f%*c", &obj.altura);
        }
        else
        {
            printf("Forma não conhecida!");
        }

        switch (obj.tipo)
        {
        case CIRCULO:
            printf("Área do círculo é: %.2f\n", PI * (obj.raio * obj.raio));
            break;
        case RETANGULO:
            printf("Área do retangulo é: %.2f\n", obj.altura * obj.largura);
            break;
        default:
            printf("Forma desconhecida!\n");
            break;
        }

        printf("Digite o tipo do objeto (0 - CIRCULO, 1 - RETANGULO) ou 2 - SAIR: ");
        scanf("%d%*c", &tipo);
    }

    return 0;
}