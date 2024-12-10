#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int     main(void)
{
    int mod;
    int div;

    ft_div_mod(13, 6, &div, &mod);
    printf("%d\n%d", div, mod);
}