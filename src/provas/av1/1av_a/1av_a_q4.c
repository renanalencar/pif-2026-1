#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[4] = "alo", str2[4] = "al";
    if (strcmp(str1, str2) == 0)
        printf("Igual");
    if (strcmp(str1, str2) < 0)
        printf("Str1 Menor");
    if (strcmp(str1, str2) > 0)
        printf("Str1 Maior");
    return 0;
}