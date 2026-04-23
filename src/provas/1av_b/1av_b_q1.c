#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 15;
    int c = 20;

    if (a != b && c > a || !(b > a))
    {
        b = 80;
    }
    else
    {
        c = 0;
    }
    a = 40;

    printf("a: %d\tb: %d\tc:%d\n", a, b, c);
    return 0;
}
