#include <stdio.h>
#include <stdlib.h>

float **alocaMatriz(int lin, int col)
{

    int x;
    float **matriz;

    matriz = (float **)malloc(lin * sizeof(float *));
    for (x = 0; x < lin; x++)
    {
        matriz[x] = (float *)malloc(col * sizeof(float));
    }

    return matriz;
}
void lerMatriz(float **m, int lin, int col)
{

    int x, y;

    for (x = 0; x < lin; x++)
    {
        for (y = 0; y < col; y++)
        {
            scanf("%f", &m[x][y]);
        }
    }
}
float **transpMatriz(float **m, int lin, int col)
{

    int x, y;
    float **matriz;

    matriz = alocaMatriz(col, lin);

    for (x = 0; x < lin; x++)
    {
        for (y = 0; y < col; y++)
        {
            matriz[y][x] = m[x][y];
        }
    }

    return matriz;
    for (x = 0; x < col; x++)
    {
        free(matriz[x]);
    }
    free(matriz);
}

int main()
{
    int L = 0, C = 0, x, y;
    float **matriz, **matriztransposta;
    scanf("%d %d", &L, &C);

    matriz = alocaMatriz(L, C);
    matriztransposta = alocaMatriz(C, L);
    lerMatriz(matriz, L, C);
    matriztransposta = transpMatriz(matriz, L, C);

    for (x = 0; x < C; x++)
    {
        for (y = 0; y < L; y++)
        {
            printf("%.2f ", matriztransposta[x][y]);
        }
        printf("\n");
    }

    for (x = 0; x < L; x++)
    {
        free(matriz[x]);
    }
    free(matriz);

    for (x = 0; x < C; x++)
    {
        free(matriztransposta[x]);
    }
    free(matriztransposta);
    return 0;
}