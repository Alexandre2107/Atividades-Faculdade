#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int i, valor = 0, valorfinal, valorfinal2;
    char palavra[50], inversa[50], str3[50], str4[50];

    strcpy(str3, "end");
    strcpy(str4, "END");
    do
    {
        gets(palavra);

        valorfinal = strcmp(palavra, str3);
        valorfinal2 = strcmp(palavra, str4);
        if (valorfinal == 0)
        {
            break;
        }
        if (valorfinal2 == 0)
        {
            break;
        }
        // Converter para minusculo
        for (i = 0; palavra[i]; i++)
        {
            palavra[i] = tolower(palavra[i]);
        }

        // Copiar a palavra para que seja invertida
        strcpy(inversa, palavra);

        // Inverter a palavra copiada
        strrev(inversa);

        valor = strcmp(palavra, inversa);

        if (valor == 0)
            printf("SIM\n");
        else
            printf("NAO\n");
    } while (valorfinal != 0);

    return 0;
}