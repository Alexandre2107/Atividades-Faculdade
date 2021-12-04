#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strcat2(char *str1, char *str2);

int main()
{
    char **mcaractere;
    int x, y;
    char *vetor;

    scanf("%d %d", &x, &y);

    mcaractere = (char **)malloc(2 * sizeof(char *));

    mcaractere[0] = (char *)malloc(x * sizeof(char));
    mcaractere[1] = (char *)malloc(y * sizeof(char));

    scanf("%s", mcaractere[0]);
    scanf("%s", mcaractere[1]);

    vetor = strcat2(mcaractere[0], mcaractere[1]);

    printf("%s%s\n", mcaractere[0], mcaractere[1]);

    free(mcaractere);
    free(mcaractere[0]);
    free(mcaractere[1]);
    free(vetor);

    return 0;
}

char *strcat2(char *str1, char *str2)
{
    int a, b, i, j;
    char *vetor;

    a = strlen(str1);
    b = strlen(str2);

    vetor = (char *)malloc((a + b + 1) * sizeof(char));

    for (i = 0; i < a; i++)
    {
        vetor[i] = str1[i];
    }
    for (j = 0; j < b; j++)
    {
        vetor[j + a] = str2[j];
    }

    vetor[a + b] = '\0';

    return vetor;
}
