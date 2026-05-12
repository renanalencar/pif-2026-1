#include <stdio.h>

void mensagem() {
    printf("Pif-ploft-pluf!\n");
}

void pause() {
    printf("Pressione qualquer tecla para continuar...");
    getchar();
}

int main(void) {
    int num = 15;
    printf("Valor guardado em num: %d\n", num);
    printf("Endereço de memória de num em decimal: %d\n", &num);
    printf("Endereço de memória de num em hexadecimal: %#X\n\n", &num);
    mensagem();
    pause();
    return 0;
}
