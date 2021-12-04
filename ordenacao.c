#include <stdio.h>
#include <stdlib.h>

int *ordena(int *v, int tam, int opcao);

int main()
{
    int *v, tam, op, i;

    scanf("%d", &tam);

    v = (int *)malloc(tam * sizeof(int));

    for (i = 0; i < tam; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] < 0)
        {
            return 0;
        }
    }

    scanf("%d", &op);

    ordena(v, tam, op);

    return 0;
}

int *ordena(int *v, int tam, int opcao)
{
    int i, j, x;

    if (opcao == 0)
    {
        for (i = 0; i < tam; i++)
        {
            for (j = i + 1; j < tam; j++)
            {
                if (v[i] < v[j])
                {
                    x = v[i];
                    v[i] = v[j];
                    v[j] = x;
                }
            }
        }
        for (i = 0; i < tam; i++)
        {
            printf("%d ", v[i]);
        }
    }

    if (opcao == 1)
    {
        for (i = 0; i < tam; i++)
        {
            for (j = i + 1; j < tam; j++)
            {
                if (v[i] > v[j])
                {
                    x = v[i];
                    v[i] = v[j];
                    v[j] = x;
                }
            }
        }
        for (i = 0; i < tam; i++)
        {
            printf("%d ", v[i]);
        }
    }

    return v;
}
