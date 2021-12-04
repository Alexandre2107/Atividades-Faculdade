#include <stdio.h>
#include <stdlib.h>

void fatorial(int *a, int *b);

int main()
{
    int *vetor1, *vetor2, tamanho, i;

    scanf("%d", &tamanho);

    vetor1 = malloc(tamanho * sizeof(int));
    vetor2 = malloc(tamanho * sizeof(int));

    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor1[i]);
        fatorial(&vetor1[i], &vetor2[i]);
    }

        for (i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor2[i]);
    }
}

void fatorial(int *a, int *b)
{
    int i;
    *b = 1;
    for (i = 0; i < *a; *a -= 1)
    {
        *b = (*b) * (*a);
    }
}