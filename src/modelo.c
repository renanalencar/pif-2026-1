#include <stdio.h>
int main()
{
    int i, j, c = 0;
    scanf("%d", &i); /*linha 4 */
    while (i > 6)
    {
        j = i + 2;
        do
        {
            c = c + j;
            j++;
        } while (j < 10);
        i--;
    }
    printf("%d", c); /* linha 13 */
    return 0;
}