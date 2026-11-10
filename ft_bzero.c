#include <stddef.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    i = 0;
    unsigned char *str = (unsigned char *) s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}

// #include <stdio.h>

// int main(void)
// {
//     char str[] = "Hello World";
//     ft_bzero(str, 5);
//     for (int i = 0; i < 11; i++)
//         printf("%d ", str[i]);
//     return (0);
// }
