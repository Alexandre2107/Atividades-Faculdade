#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int contav = 0, contac = 0;

    scanf("%c", &ch);

    while (ch != '.')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            contav++;
        }
        else
        {

            if (ch >= 97 && ch <= 122)
            {
                contac++;
            }
        }
        scanf("%c", &ch);
    }
    printf("%d %d", contav, contac);
    return 0;
}