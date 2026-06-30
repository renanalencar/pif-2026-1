/* Converter letras minúsculas para maiúsculas */
#include <stdio.h>

void converteParaMaiusculas(char *s)
{
    while (*s != '\0')
    {
        if (*s >= 'a' && *s <= 'z')
            *s -= 32; /* converte para a letra maiúscula ASCII */
        ++s;          /* incrementa s para apontar para o próximo caractere */
    }
}

int main()
{
    char string[] = "caracteres";
    printf("A string antes da conversão é: %s\n", string);
    converteParaMaiusculas(string);
    printf("A string depois da conversão é: %s\n", string);
    return 0;
}