#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
    size_t  len;
    size_t  i;
    char    *str;

    len = ft_strlen(s);
    str = malloc(sizeof(char) * (len + 1));
    if(!str)
        return (NULL);
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[len] = '\0';
    return (str);
}

// #include <stdio.h>

// char    uppercase(unsigned int i, char c)
// {
//     (void)i;
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }

// int main()
// {
    
//     char *res;

//     res = ft_strmapi("hello world", uppercase);
//     printf("%s", res);
//     free(res);
// }