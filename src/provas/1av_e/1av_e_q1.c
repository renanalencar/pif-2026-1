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
