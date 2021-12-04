#include <stdio.h>
#include <stdlib.h>

void binario(int numero);

int main()
{
    int numero;
    scanf("%d", &numero);

    binario(numero);

    return 0;
}

void binario(int numero)
{
    int b;

    if (numero / 2 != 0)
    {
        b = numero / 2;
        binario(b);
        printf("%d", numero % 2);
    }
    else
    {
        printf("%d", numero % 2);
    }
}