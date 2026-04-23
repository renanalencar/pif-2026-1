#include <stdio.h>

int main(void)
{
   int v[6] = {1, 2, 3, 4, 5, 6};
   int i, aux;
   for (i = 0; i < 3; i++)
   {
      aux = v[i];
      v[i] = v[5 - i];
      v[5 - i] = aux;
   }
   printf("%d %d", v[1], v[4]);
   return 0;
}