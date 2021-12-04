#include <stdio.h>

int main()
{
    int ano, mes, resto, resto1, resto2;

    scanf("%d", &ano);
    scanf("%d", &mes);

    if (ano < 1900 || ano > 9999)
    {
        printf("Ano invalido");
    }
    else if (mes < 1 || mes > 13)
    {
        printf("Mes invalido");
    }
    else
    {
        resto = ano % 400;
        resto1 = ano % 4;
        resto2 = ano % 100;
        if (mes == 2)
        {
            if (resto == 0 || (resto2 != 0 && resto1 == 0))
            {
                printf("29");
            }
            else
            {
                printf("28");
            }
        }
        if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11))
        {
            printf("30");
        }
        else if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12))
        {
            printf("31");
        }
    }

    return 0;
}