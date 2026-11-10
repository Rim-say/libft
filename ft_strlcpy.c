#include <stddef.h>

size_t	ft_strlen(const char *str)
{
    size_t	i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t	i;
    size_t	len;

    len = ft_strlen(src);
    i = 0;
    if (dstsize == 0)
        return (len);
    while ((i < dstsize - 1) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}
