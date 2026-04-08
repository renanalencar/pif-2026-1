#include <stdio.h>

/**
 * Problemas da linha de comando printf {"%d", ++(xx + y));
 * 1. '{' em vez de '(' depois de printf;
 * 2. Variável 'x' duplicada 'xx';
 * 3. O pré-incremento só pode acontecer a um valor modificável. A expressão (x + y) não é modificável;
 */

int main() {
    int x = 3, y = 2;
    // Solução 1
    printf ("%d", (x + y));
    // Solução 2
    printf ("\n%d", (x*x + y));
    // Solução 3
    printf ("\n%d", (x*x + y));
    return 0;
}

// SAíDA: 5