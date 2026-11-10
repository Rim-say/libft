#include <stddef.h>

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char *s1;
    int last;

    i = 0;
    last = -1;
    s1 = (char *)s;
    while (s[i])
    {
        if (s[i] == c)
            last = i;
        i++;
    }
    if (c == '\0')
        return (&s1[i]);
    if (last != -1)
        return (&s1[last]);
    return NULL;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str = "hello";
//     printf("%s\n", ft_strrchr(str, 'l'));
//     printf("%p\n", ft_strrchr(str, 'z'));
//     printf("%p\n", ft_strrchr(str, '\0'));

//     printf("%s\n", strrchr(str, 'l'));
//     printf("%p\n", strrchr(str, 'z'));
//     printf("%p\n", strrchr(str, '\0'));
// }
