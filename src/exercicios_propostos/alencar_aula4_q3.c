#include <stdio.h>
#include <stdint.h>

union Dado {
    unsigned int ui;
    unsigned char bytes[4];
};

int main(void) {
    union Dado d;
    int i;
    // 'A': 41, 'B': 42, 'C': 43, 'D': 44
    d.ui = 0x41424344;

    printf("Valor inteiro (decimal): %u\n", d.ui);
    printf("Valor inteiro (hex): %#X\n", d.ui);

    printf("Bytes individuais:\n");
    // for (i = 3; i >= 0; i--) {
    //     printf("bytes[%d] = 0x%02X ('%c')\n", i, d.bytes[i],
    //            (d.bytes[i] >= 32 && d.bytes[i] <= 126) ? d.bytes[i] : '.');
    // }
    printf(" %c %c %c %c", d.bytes[0], d.bytes[1], d.bytes[2], d.bytes[3]);

    return 0;
}