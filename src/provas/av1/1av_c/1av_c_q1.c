#include <stdio.h>

int main(void)
{
    short a, x = 0;
    for (a = 4; a > -3; a--)
    {
        x += a;
        switch (a > 0)
        {
        case 1:
            x = x + a;
            break;
        case 0:
            x = x - 2 * a;
            break;
        }
    }
    printf("a: %d\tb: %d\tc: %d\n", a, b, c);
    return 0;
}
