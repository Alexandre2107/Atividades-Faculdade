#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d", &i);

    int vetor1[i];
    int vetor2[i];
    int x;
    int res = 0;

    for (x = 0; x < i; x++)
    {
        scanf("%d", &vetor1[x]);
    }
    for (x = 0; x < i; x++)
    {
        scanf("%d", &vetor2[x]);
    }
    for (x = 0; x < i; x++)
    {
        res = res + (vetor1[x] * vetor2[x]);
    }

    printf("%d", res);
    return 0;
}
