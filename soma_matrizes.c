#include <stdio.h>
#include <stdlib.h>

float **alocaMatriz(int linhas, int colunas);
void recebeMatriz(float **matriz, int linhas, int colunas);
float **somaMatriz(float **matriz1, float **matriz2, int linhas, int colunas);
void exibeMatriz(float **matriz, int linhas, int colunas);

int main()
{

    int x, y;
    float **matrizA, **matrizB;

    scanf("%d %d", &x, &y);

    matrizA = alocaMatriz(x, y);
    matrizB = alocaMatriz(x, y);
    recebeMatriz(matrizA, x, y);
    recebeMatriz(matrizB, x, y);

    somaMatriz(matrizA, matrizB, x, y);
}

float **alocaMatriz(int linhas, int colunas)
{
    float **matriz;
    int i;

    matriz = (float **)malloc(sizeof(float *) * linhas);
    for (i = 0; i < linhas; i++)
    {
        matriz[i] = (float *)malloc(sizeof(float) * colunas);
    }

    return matriz;
}

void recebeMatriz(float **matriz, int linhas, int colunas)
{

    int i, j;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }
}

float **somaMatriz(float **matriz1, float **matriz2, int linhas, int colunas)
{
    int i, j;
    float **somaMatrizes;

    somaMatrizes = alocaMatriz(linhas, colunas);

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            somaMatrizes[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    exibeMatriz(somaMatrizes, linhas, colunas);

    return somaMatrizes;
}

void exibeMatriz(float **matriz, int linhas, int colunas)
{

    int i, j;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}
