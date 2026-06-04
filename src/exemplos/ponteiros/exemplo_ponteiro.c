#include <stdio.h>

int main()
{
    int *ptr;
    int num = 10;
    ptr = &num;
    printf("Endereço de memoria de num: %#X\n", &num);
    printf("Endereço para onde ptr aponta: %#X\n", ptr);
    printf("Endereço de ptr: %#X\n", &ptr);

    printf("Conteúdo guardado guardado por num: %d\n", num); // 10
    printf("Conteúdo de onde ptr aponta: %d\n", *ptr); // 10

    num = 66;
    printf("Conteúdo guardado guardado por num: %d\n", num); // 66
    printf("Conteúdo de onde ptr aponta: %d\n", *ptr); // 66

    *ptr = 13;
    printf("Conteúdo guardado guardado por num: %d\n", num); // 13
    printf("Conteúdo de onde ptr aponta: %d\n", *ptr); // 13
    return 0;
}
