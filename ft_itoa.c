/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:38:28 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/14 16:43:49 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*arr;

	nb = (long)n;
	len = nbr_len(nb);
	arr = malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	arr[len] = '\0';
	if (nb < 0)
	{
		arr[0] = '-';
		nb = (-1) * nb;
	}
	if (n == 0)
		arr[0] = '0';
	while (nb > 0)
	{
		arr[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (arr);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_itoa(11));
// }