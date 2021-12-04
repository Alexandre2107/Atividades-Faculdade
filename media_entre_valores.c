#include <stdio.h>

int main()
{
    int a, b;
    float mediaDeDois, media;

    scanf("%d", &a);
    scanf("%d", &b);

    mediaDeDois = (float)(a + b) / 2;
    media = (a + mediaDeDois + b) / 3;

    printf("%.2f\n", media);
    return 0;
}
