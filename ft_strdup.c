/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:56:14 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/11 13:14:47 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		len;

	len = ft_strlen(s);
	copy = malloc (sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	len = 0;
	while (s[len])
	{
		copy[len] = s[len];
		len ++;
	}
	copy[len] = '\0';
	return (copy);
}

// #include <stdio.h>

// int main()
// {
// 	char str[]="Hello";
// 	printf("%s", ft_strdup(str));
// 