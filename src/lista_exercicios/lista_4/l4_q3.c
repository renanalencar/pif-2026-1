#include <stdio.h>

int proximoDivisor(int a, int b)
{
    if (b == 0)
        return 0;
    if (a % b == 0)
        return 0;
    return a / b + 1;
}

int main(void)
{
    printf("%d\n", proximoDivisor(10, 3)); /* 4 */
    printf("%d\n", proximoDivisor(12, 3)); /* 0 */
    return 0;
}