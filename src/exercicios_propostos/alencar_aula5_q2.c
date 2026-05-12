#include <stdio.h>

void pause() {
    printf("Pressione qualquer tecla para continuar...");
    getchar();
}

int maior(int a, int b) {
    if (a > b)
    {
        return a;
    } else {
        return b;
    }
    // return a > b ? a : b;
}

int main(void) {
    int w = 5, z = 35, v;
    
    v = maior(w, z);
    
    printf("Maior: %d\n", v); // printf("Maior: %d\n", maior(w,z));
    pause();

    return 0;
}