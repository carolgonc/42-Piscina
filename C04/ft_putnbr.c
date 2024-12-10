#include <unistd.h>
void    ft_putnbr(int nb)
{
    char    a;
    long int    n;

    n = nb;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    a = n % 10 + '0';
    write (1, &a, 1);
}
int main()
{
    int n = -80;
    ft_putnbr(n);
}