#include <stdlib.h>
int main()
{ 
    // Cria a pasta teste dentro de input.
    // O argumento -p indica que caso input 
    // não exista, ele seja criado também.
    system("mkdir -p input/teste-com-system"); 
    return 0;
}