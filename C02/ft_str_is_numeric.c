#include <stdio.h>
int     ft_str_is_numeric(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            i++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}
int     main()
{
    char str[] = "abc";
    printf("%d\n", ft_str_is_numeric(str));
}