#include <stdio.h>

int main() {
    int vetA[10], vetB[10];
    int i;

    for (i = 0; i < 10; i++) {
        vetB[i] = 0;

        if (i % 2 == 0) {
            vetA[i] = i;
        } else {
            vetA[i] = 2 * i;
        }
    }

    for (i = 0; i < 10; i++) {
        while (vetA[i] > i) {
            vetB[i] = vetA[i];
            vetA[i] = vetA[i] - 1;
        }
    }

    return 0;
}

/**
 * RESOLUÇÃO
 * 
 * A) Dados dos vetores vetA e vetB ao término da execução da `linha 15`:
 * vetA = {0, 2, 2, 6, 4, 10, 6, 14, 8, 18}
 * vetB = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
 * B) Dados dos vetores vetA e vetB ao término da execução da `linha 22`:
 * vetA = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
 * vetB = {0, 2, 0, 6, 0, 10, 0, 14, 0, 18}
 */