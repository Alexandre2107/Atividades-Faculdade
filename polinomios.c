#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prod[60] = {0};
    int A[60];
    int B[60];
    int tamanhoA, tamanhoB;
    int i, j, k;

    scanf("%d %d", &tamanhoA, &tamanhoB);

    for (i = 0; i < tamanhoA; i++)
    {
        scanf("%d", &A[i]);
    }

    for (j = 0; j < tamanhoB; j++)
    {
        scanf(" %d", &B[j]);
    }

    for (i = 0; i < tamanhoA; i++)
    {

        for (j = 0; j < tamanhoB; j++)
        {
            prod[i + j] = prod[i + j] + (A[i] * B[j]);
        }
    }

    for (k = 0; k < tamanhoA + tamanhoB - 1; k++)
    {
        if (k == 0)
        {
            printf("%d", prod[k]);
        }
        else
        {
            printf(" + %dx^%d", prod[k], k);
        }
    }

    return 0;
}