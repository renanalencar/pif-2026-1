#include <stdio.h>

int main(void)
{
    FILE *arq;
    char nome[50];
    int i;

    arq = fopen("data\\nomes.txt", "w");
    if (arq == NULL)
        return 1;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%49s", nome);
        fprintf(arq, "%s\n", nome);
    }
    fclose(arq);

    arq = fopen("data\\nomes.txt", "r");
    if (arq == NULL)
        return 1;

    while (fgets(nome, sizeof(nome), arq) != NULL)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%49s", nome);
        fprintf(arq, "%s\n", nome);
    }
    fclose(arq);

    return 0;
}