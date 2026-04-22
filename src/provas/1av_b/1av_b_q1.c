#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 10;
    int z = 15;
    int resultado = 0;

    if ((x > 3 && y < 10) || !(z == 15)) {
        resultado = 1;
    } 
    else if (x == 5 && (y > 5 || z < 10)) {
        resultado = 2;
    } 
    else {
        resultado = 3;
    }

    printf("%d", resultado);
    
    return 0;
}

/**
 * A condição do primeiro `if` é falsa `((5 > 3 && 10 < 10) || !(15 == 15) = (true && false) || false = false || false = false)`. 
 * A condição do `else if` é verdadeira `(5 == 5 && (10 > 5 || 15 < 10) = true && (true || false) = true)`. 
 * Logo, `resultado = 2` é impresso.
 * 
 * **Resposta: c. 2**
 */