/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 09:29:51 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/11 09:44:44 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)s;
	c1 = (unsigned char *)c;
	while (i < n)
	{
		if (s1[i] == c1)
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