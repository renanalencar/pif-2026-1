#include <stdio.h>
int main(void)
{
   int vet[5] = {2, 4, 6, 8, 10};
   int i;
   for (i = 0; i < 4; i++)
   {
      vet[i] = vet[i] + vet[i + 1];
   }
   printf("%d", vet[2]);
   return 0;
}