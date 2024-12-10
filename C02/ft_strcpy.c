#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char str[] = "wello";
    char str2[] = "world";
    ft_strcpy(str2, str);
    printf("%s\n", str2);
}