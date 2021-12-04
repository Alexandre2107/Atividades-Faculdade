#include <stdio.h>

int main()
{

    int N = 0, i = 0, j = 0, cont = 0;

    scanf("%d %d", &N, &N);

    int matriz[N][N];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == j && matriz[i][j] != 1)
            {
                cont = +1;
                break;
            }
            else if (i != j && matriz[i][j] != 0)
            {
                cont = +1;
                break;
            }
        }
    }

    if (cont == 0)
    {
        printf("Eh matriz identidade.\n");
    }
    else
    {
        printf("Nao eh matriz identidade.\n");
    }

    return 0;
}