/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 09:31:25 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/14 13:36:49 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src1;
	unsigned char		*dest1;
	size_t				i;
	size_t				j;

	i = 0;
	j = n;
	src1 = (const unsigned char *)src;
	dest1 = (unsigned char *)dest;
	while (i < j)
	{
		if (dest1 > src1)
		{
			dest1[j - 1] = src1[j - 1];
			j--;
		}
		else
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "abcdef";
// 	ft_memmove(str + 1, str, 5);
// 	printf("%s\n", str);
// }