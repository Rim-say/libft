#include <stddef.h>

char    *ft_strchr(const char *s, int c)
{
    int i;
    char *s1;

    i = 0;
    s1 = (char *)s;
    while (s[i])
    {
        if (s[i] == c)
            return (&s1[i]);
        i++;
    }
    if (c == '\0')
        return (&s1[i]);
    return NULL;
}

// #include <stdio.h>

// int main()
// {
//     const char *str = "Hello 42";
//     printf("%s\n", ft_strchr(str, '4'));
// }