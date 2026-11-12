/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 09:30:39 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/11 09:46:28 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char    str1[] = "hello";
//     char    str2[] = "heLlo";
//     char    str3[] = "hello";

//     printf("%d\n", ft_memcmp(str1, str2, 5));
//     printf("%d\n", memcmp(str1, str2, 5));

//     printf("%d\n", ft_memcmp(str1, str3, 5));
//     printf("%d\n", memcmp(str1, str3, 5));

//     printf("%d\n", ft_memcmp(str1, str2, 0));
//     printf("%d\n", memcmp(str1, str2, 0));
// }
