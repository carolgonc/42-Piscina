#include    <stdio.h>

void    ft_swap(int *a, int *b)
{
    int     c;

    c = *a;
    *a = *b;
    *b = c;
}

int     main(void)
{
    int x = 6;
    int y = 8;

    ft_swap(&x, &y);
    printf("%d %d", x, y);
}