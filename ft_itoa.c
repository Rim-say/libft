/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:38:28 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 12:51:35 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char src)
{
	int	j;

	j = 0;
	while (dest[j] != '\0')
		j++;
	dest[j] = src;
	return (dest);
}

int	nbr_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	int len;
	long nb;
	char *arr;

	nb = (long)n;
	len = nbr_len(nb);
	arr = malloc(sizeof(char) * len + 1);
	if (nb < 0)
	{
		arr = ft_strcat(arr, '-');
		nb = (-1) * nb;
	}
	else if (nb < 10)
		arr = ft_strcat(arr, nb + '0');
	else
	{
		ft_itoa(n / 10);
		arr = ft_strcat(arr, nb % 10 + '0');
	}
	return (arr);
}
#include <stdio.h>

int main()
{
	printf("%s", ft_itoa(34));
}