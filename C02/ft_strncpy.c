#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;    
    }
    return (dest);
}

int     main()
{
    char str[] = "wello";
    char str2[] = "horld";
    ft_strncpy(str2, str, 3);
    printf("%s\n", str2);
}