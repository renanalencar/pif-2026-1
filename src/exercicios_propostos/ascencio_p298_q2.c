#include <stdio.h>

int converte(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int main(void)
{
    int hora = 2, min = 40, seg = 10;
    printf("%d s", converte(hora, min, seg)); // 9610
    return 0;
}
