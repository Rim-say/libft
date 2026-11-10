#include <stddef.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *dest1;
    const unsigned char   *src1;
    size_t  i;

    i = 0;
    dest1 = (unsigned char *)dest;
    src1 = (const unsigned char *)src;
    while (i < n)
    {
        dest1[i] = src1[i] ;
        i++;
    }
    return (dest);
}

// #include <stdio.h>

// int main()
// {
//     char dest[6];
//     char src[] = "Hello";
//     ft_memcpy(dest, src, 6);
//     printf("%s", dest);
// }
