#include <stdio.h>

int main(void)
{
   int a = 0, b = 9, vetor[10];
   for (int i = a; i <= b; i++)
   {
      printf("%d ", vetor[i]);
   }
   printf("a: %d\tb: %d\n", a, b);
   
   return 0;
}