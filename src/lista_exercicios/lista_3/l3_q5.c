#include <stdio.h>

struct Veiculo {
    int ano;
    float peso;
};

int main(void) {
    struct Veiculo v1, v2;
    
    v1.ano = 2020;
    v1.peso = 1500.5;
    
    v2 = v1;
    v2.ano = 2024;
    
    printf("%d - %.1f\n", v1.ano, v2.peso);
    
    return 0;
}

/**
 * Efeito do comando `v2 = v1;` e modificação: O comando realiza uma cópia integral dos valores de
 * todos os campos da estrutura `v1` para a estrutura `v2`. No entanto, como `v1` e `v2` representam
 * alocações de memória independentes, a modificação feita posteriormente com `v2.ano = 2024;` altera 
 * unicamente o registro interno de `v2`, não interferindo de forma alguma nos dados armazenados originalmente
 * em `v1` (cujo ano permanece intacto como 2020). O `printf` requisita o ano da estrutura original (`v1.ano` = 2020) e
 *  o peso da estrutura copiada (`v2.peso` = 1500.5). A formatação impressa na tela será **`2020 - 1500.5`**.
 * 
 * SAÍDA:
 * 2020 - 1500.5
 */