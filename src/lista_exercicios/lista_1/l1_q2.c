#include <stdio.h>

/**
 * Problemas da linha de comando printf {"%d", ++(xx + y));
 * 1. '{' em vez de '(' depois de printf;
 * 2. Variável 'x' duplicada 'xx';
 * 3. O pré-incremento só pode acontecer a um valor modificável. A expressão (x + y) não é modificável;
 */

int main() {
    int x = 3, y = 2;
    // Solução
    printf ("%d", (x + y));
    
    return 0;
}

// SAíDA: 5