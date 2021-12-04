#include <stdio.h>

int main()
{
    double n, conta = 0;

    scanf("%lf", &n);

    while (n != 0)
    {
        conta += (1 / n);

        scanf("%lf", &n);
    }

    printf("%.15lf", conta);
    return 0;
}
