#include <stdio.h>

int main()
{

    int i = 0, j = 0, lin = 0, col = 0;
    float matriz[50][50], soma = 0;

    scanf("%d %d", &lin, &col);

    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%f", &matriz[i][j]);
            if (i >= j)
            {
                soma = soma + matriz[i][j];
            }
        }
    }
    printf("Soma = %.2f\n", soma);

    return 0;
}