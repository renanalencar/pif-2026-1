#include <stdio.h>

typedef struct
{
    int matricula;
    char nome[50];
    float notaFinal;
} Aluno;

int main(void)
{
    FILE *arq;
    Aluno a;
    int i;

    arq = fopen("data\\alunos.dat", "wb");
    if (arq == NULL)
        return 1;

    for (i = 0; i < 3; i++)
    {
        printf("Digite a matricula, nome e nota final do aluno %d: ", i + 1);
        scanf("%d %49s %f", &a.matricula, a.nome, &a.notaFinal);
        fwrite(&a, sizeof(Aluno), 1, arq);
    }
    fclose(arq);

    arq = fopen("data\\alunos.dat", "rb");
    if (arq == NULL)
        return 1;

    while (fread(&a, sizeof(Aluno), 1, arq) == 1)
    {
        printf("%d %s %.2f\n", a.matricula, a.nome, a.notaFinal);
    }
    fclose(arq);

    return 0;
}