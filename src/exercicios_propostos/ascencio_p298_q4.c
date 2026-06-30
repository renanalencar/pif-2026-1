#include <stdio.h>
#include <math.h>

float volumeEsfera(float r) {
    return 4.0 / 3 * powf(r, 3);
}

int main(void)
{
    float raio = 3.0;
    printf("%.2f", volumeEsfera(raio));
    return 0;
}
