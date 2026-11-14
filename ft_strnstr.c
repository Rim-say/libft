/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:01:45 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/11 10:47:18 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big1;
	char	*little1;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	big1 = (char *)big;
	little1 = (char *)little;
	if (ft_strlen(little1) > ft_strlen(big1))
		return (NULL);
	if (little[i] == '\0')
		return (big1);
	while (i < len)
	{
		j = 0;
		while (big1[i] == little1[j] && little1[j])
			j++;
		if (j == ft_strlen(little1))
			return (&big1[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s", ft_strnstr("abc", "bc", 2));
// }