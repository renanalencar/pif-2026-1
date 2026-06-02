#include <stdio.h>

int verificaDivisor(int x, int y) {
    if (y > x)
    {
        return x;
    }
    else
    {
        if (x % y == 0)
        {
            return 0;
        }
        else
        {
            while (x % y != 0)
            {
                y++;
            }
            return y;
        }
        
    }
    
}

int main(void)
{
    printf("%d\n", verificaDivisor(4, 2));  // 0
    printf("%d\n", verificaDivisor(7, 5));  // 7
    printf("%d\n", verificaDivisor(8, 5)); // 8
    printf("%d\n", verificaDivisor(18, 7)); // 9
    printf("%d\n", verificaDivisor(18, 5)); // 6
    printf("%d\n", verificaDivisor(8, 25)); // 8
    return 0;
}
