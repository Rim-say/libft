/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 09:31:06 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/11 09:48:12 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dest1;
	const unsigned char		*src1;
	size_t					i;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	while (i < n)
	{
		dest1[i] = src1[i];
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
