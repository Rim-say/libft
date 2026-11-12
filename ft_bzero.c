/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 09:32:43 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/11 09:35:30 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
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
