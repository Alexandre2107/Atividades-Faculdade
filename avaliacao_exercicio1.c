#include <stdio.h>
#include <stdlib.h>

int **alocaMatriz(int tamLinhas, int tamColunas);
int freeMatriz(int **matriz, int tamLinhas);
void recebeMatriz(int **matriz, int tamLinhas, int tamColunas);

int main()
{
    int i, j, x, y, maiorNumeroDaLinha;
    int **matriz;

    scanf("%d %d", &x, &y);
    matriz = alocaMatriz(x, y);
    recebeMatriz(matriz, x, y);

    for (i = 0; i < x; i++)
    {

        maiorNumeroDaLinha = 0;

        for (j = 0; j < y; j++)
        {
            if (maiorNumeroDaLinha < matriz[i][j])
            {
                maiorNumeroDaLinha = matriz[i][j];
            }
        }

        printf("Maior da linha %d: %d\n", i, maiorNumeroDaLinha);
    }

    return freeMatriz(matriz, x);
}

int **alocaMatriz(int tamLinhas, int tamColunas)
{
    int x;
    int **matriz;

    matriz = (int **)malloc(tamLinhas * sizeof(int *));
    for (x = 0; x < tamLinhas; x++)
    {
        matriz[x] = (int *)malloc(tamColunas * sizeof(int));
    }

    return matriz;
}

void recebeMatriz(int **matriz, int tamLinhas, int tamColunas)
{
    int i, j;

    for (i = 0; i < tamLinhas; i++)
    {
        for (j = 0; j < tamColunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int freeMatriz(int **matriz, int tamLinhas)
{
    int i;
    for (i = 0; i < tamLinhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}