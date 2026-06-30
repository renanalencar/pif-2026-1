#include <stdio.h>

struct Aluno
{
    int matricula;
    char nome[51];
    float nota;
};

void gravaAlunos(struct Aluno vetor[], int quantidade)
{
    FILE *arq = fopen("data/alunos.txt", "w");
    int i;

    if (arq == NULL)
    {
        return;
    }

    for (i = 0; i < quantidade; i++)
    {
        fprintf(arq, "%d;%s;%.2f\n",
                vetor[i].matricula,
                vetor[i].nome,
                vetor[i].nota);
    }

    fclose(arq);
}

int main(void)
{
    struct Aluno turma[2] = {
        {1, "Ana", 9.5},
        {2, "Bruno", 8.0}};

    gravaAlunos(turma, 2);
    return 0;
}