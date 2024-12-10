#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
    int     i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] > s2[i])
        {
            return (1);
        }
        if (s1[i] < s2[i])
        {
            return (-1);
        }
        i++;
    }
    return (0);
}

int     main()
{
    char c1[] = "wello";
    char c2[] = "world";
    printf("%d\n", ft_strcmp(c1, c2));
}