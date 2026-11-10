#include <stddef.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *s1;
    size_t  i;

    i = 0;
    s1 = (unsigned char *)s;
    while(i < n)
    {
        if (s1[i] == c)
            return (&s1[i]);
        i++;
    }
    return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     char str[] = "hello";

//     printf("%s\n", (char *)ft_memchr(str, 'l', 4));
//     printf("%p\n", ft_memchr(str, 'z', 5));
// }