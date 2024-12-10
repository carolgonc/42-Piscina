#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     n;

    n = *a;
    *a = *a / *b;
    *b = n % *b;
}

int     main(void)
{
    int a = 10;
    int b = 5;
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n%d", a, b);
}