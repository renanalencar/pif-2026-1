#include <stdio.h>
#include <string.h>

#define MAX_TOMBOS 20
#define MAX_EXEMPLARES 60

struct Tombo
{
    int numeroTombo;
    char nomeObra[100];
    char nomeAutor[100];
    char nomeEditora[100];
    int codigoArea;
};

struct Obra
{
    int numeroTombo;
    int numeroExemplar;
    char dataCompra[20];
};

int main()
{
    struct Tombo tombos[MAX_TOMBOS];
    struct Obra obras[MAX_EXEMPLARES];
    int qtdTombos = 0, qtdObras = 0;
    int opcao, i, area;
    char busca[100];

    do
    {
        printf("\n1. Cadastrar tombos\n");
        printf("2. Cadastrar obras\n");
        printf("3. Mostrar obras por area\n");
        printf("4. Mostrar obras por autor\n");
        printf("5. Mostrar obras por editora\n");
        printf("6. Encerrar o programa\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            if (qtdTombos < MAX_TOMBOS)
            {
                printf("Numero do tombo: ");
                scanf("%d", &tombos[qtdTombos].numeroTombo);
                getchar(); // getchar() funciona aqui com uma "pausa" da nossa aplicação

                printf("Nome da obra: ");
                fgets(tombos[qtdTombos].nomeObra, 100, stdin);
                // A função strcspn (string.h) retorna o tamanho (em bytes) do segmento inicial 
                // da string str1 que não contém nenhum caractere presente na string str2.
                tombos[qtdTombos].nomeObra[strcspn(tombos[qtdTombos].nomeObra, "\n")] = '\0';
                
                printf("Nome do autor: ");
                fgets(tombos[qtdTombos].nomeAutor, 100, stdin);
                tombos[qtdTombos].nomeAutor[strcspn(tombos[qtdTombos].nomeAutor, "\n")] = '\0';

                printf("Nome da editora: ");
                fgets(tombos[qtdTombos].nomeEditora, 100, stdin);
                tombos[qtdTombos].nomeEditora[strcspn(tombos[qtdTombos].nomeEditora, "\n")] = '\0';

                printf("Codigo da area (1-Exatas, 2-Humanas, 3-Biomedicas): ");
                scanf("%d", &tombos[qtdTombos].codigoArea);

                qtdTombos++;
            }
            else
            {
                printf("Limite de tombos atingido.\n");
            }
            break;

        case 2:
            if (qtdObras < MAX_EXEMPLARES)
            {
                printf("Numero do tombo: ");
                scanf("%d", &obras[qtdObras].numeroTombo);

                printf("Numero do exemplar: ");
                scanf("%d", &obras[qtdObras].numeroExemplar);
                getchar();

                printf("Data da compra: ");
                fgets(obras[qtdObras].dataCompra, 20, stdin);
                obras[qtdObras].dataCompra[strcspn(obras[qtdObras].dataCompra, "\n")] = '\0';

                qtdObras++;
            }
            else
            {
                printf("Limite de obras atingido.\n");
            }
            break;

        case 3:
            printf("Digite a area (1-Exatas, 2-Humanas, 3-Biomedicas): ");
            scanf("%d", &area);

            printf("\nObras da area %d:\n", area);
            for (i = 0; i < qtdTombos; i++)
            {
                if (tombos[i].codigoArea == area)
                {
                    printf("Tombo: %d | Obra: %s | Autor: %s | Editora: %s\n",
                           tombos[i].numeroTombo,
                           tombos[i].nomeObra,
                           tombos[i].nomeAutor,
                           tombos[i].nomeEditora);
                }
            }
            break;

        case 4:
            getchar();
            printf("Digite o nome do autor: ");
            fgets(busca, 100, stdin);
            busca[strcspn(busca, "\n")] = '\0';

            printf("\nObras do autor %s:\n", busca);
            for (i = 0; i < qtdTombos; i++)
            {
                if (strcmp(tombos[i].nomeAutor, busca) == 0)
                {
                    printf("Tombo: %d | Obra: %s | Editora: %s\n",
                           tombos[i].numeroTombo,
                           tombos[i].nomeObra,
                           tombos[i].nomeEditora);
                }
            }
            break;

        case 5:
            getchar();
            printf("Digite o nome da editora: ");
            fgets(busca, 100, stdin);
            busca[strcspn(busca, "\n")] = '\0';

            printf("\nObras da editora %s:\n", busca);
            for (i = 0; i < qtdTombos; i++)
            {
                if (strcmp(tombos[i].nomeEditora, busca) == 0)
                {
                    printf("Tombo: %d | Obra: %s | Autor: %s\n",
                           tombos[i].numeroTombo,
                           tombos[i].nomeObra,
                           tombos[i].nomeAutor);
                }
            }
            break;

        case 6:
            printf("Programa encerrado.\n");
            break;

        default:
            printf("Opcao invalida.\n");
        }

    } while (opcao != 6);

    return 0;
}