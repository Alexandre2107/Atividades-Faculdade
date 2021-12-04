#include <stdio.h>

int main()
{
    int x = 1, y = 2, z = 3;
    if (z < 2)
    {
        for (int cont = 0; cont < 3; cont++)
        {
            y++;
        }
        if (y == 5)
        {
            for (x = 4; x < 3; x++)
            {
                z++;
            }
        }
    }
    printf("%d %d %d", x, y, z);

    return 0;
}
