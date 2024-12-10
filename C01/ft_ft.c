#include    <stdio.h>
void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int     main(void)
{
    int c;
    c = 5;
    ft_ft(&c);
    printf("%d", c);
}