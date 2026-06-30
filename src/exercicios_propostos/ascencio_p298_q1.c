#include <stdio.h>

void systemPause() {
    printf("\nPressione qualquer tecla para continuar...");
    getchar();
}

int somaAte(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i; // s = s + i
    }
    
    return s;
}

int main(void)
{
    int num = 5;
    printf("%d", somaAte(num)); // 15
    systemPause();
    return 0;
}
