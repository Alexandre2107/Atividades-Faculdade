#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int MDC(int a, int b);
int MOD(int a, int b);
int POT(int a, int b);

int main()
{
    int a = 0, b = 0;
    char operacao[4], str2[4], str3[4], str4[4], str5[4];
    int resultadoMDC = -1, resultadoMOD = -1, resultadoPOT = -1, valorfinal1, valorfinal2, valorfinal3, valorfinal4;

    strcpy(str2, "MDC");
    strcpy(str3, "MOD");
    strcpy(str4, "POT");
    strcpy(str5, "OOO");

    scanf("%d %d", &a, &b);

    do
    {
        fgets(operacao, 4, stdin);

        valorfinal1 = strcmp(operacao, str2);
        valorfinal2 = strcmp(operacao, str3);
        valorfinal3 = strcmp(operacao, str4);
        valorfinal4 = strcmp(operacao, str5);

        if (valorfinal1 == 0)
        {
            resultadoMDC = MDC(a, b);
        }

        if (valorfinal2 == 0)
        {
            resultadoMOD = MOD(a, b);
        }

        if (valorfinal3 == 0)
        {
            resultadoPOT = POT(a, b);
        }

    } while (valorfinal4 != 0);

    if (resultadoMDC != valorfinal1 && resultadoMDC > -1)
    {
        printf("MDC(%d,%d) = %d\n", a, b, resultadoMDC);
    }

    if (resultadoMOD != valorfinal2 && resultadoMOD > -1)
    {
        printf("MOD(%d,%d) = %d\n", a, b, resultadoMOD);
    }

    if (resultadoPOT != valorfinal3 && resultadoPOT > -1)
    {
        printf("POT(%d,%d) = %d\n", a, b, resultadoPOT);
    }

    return 0;
}

int MDC(int a, int b)
{
    int r;

    if (b == 0)
    {
        r = a;
    }
    else
    {
        r = MDC(b, (a % b));
    }

    return r;
}

int MOD(int a, int b)
{
    int r;

    if (a > b)
    {
        r = MOD((a - b), b);
    }
    else if (a < b)
    {
        r = a;
    }
    else if (a == b)
    {
        r = 0;
    }
    return r;
}
int POT(int a, int b)
{
    int r;

    if (b == 0)
    {
        r = 1;
        return r;
    }
    else
    {
        r = a * POT(a, (b - 1));
        return r;
    }
}
