#include <stdio.h>
#include <math.h>

#define M_PI 3.14

double calculaVolumeEsfera(double r)
{
    return (4.0 / 3.0) * M_PI * pow(r, 3);
}

int main(void)
{
    double r = 5.0;
    printf("Volume = %.2f\n", calculaVolumeEsfera(r));
    return 0;
}