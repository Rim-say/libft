/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:20:52 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/11 11:27:17 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i])
	{
		if (!(nptr[i] >= 48 && nptr[i] <= 57))
			break ;
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_atoi("    +++---764bcbcb"));
// }