#include <stdio.h>

unsigned long long fatorial(int n)
{
    unsigned long long fat = 1;
    for (int i = 2; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

int main(void)
{
    int n = 5;
    printf("%d! = %llu\n", n, fatorial(n));
    return 0;
}