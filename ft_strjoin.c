/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:53:26 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 11:02:07 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*new;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = malloc ((len1 + len2) * sizeof(char) + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, len1 + len2 + 1);
	ft_strlcat(new, s2, len2 + len1 + 1);
	new[len1 + len2] = '\0';
	return (new);
}
// #include <stdio.h>

// int main()
// {
// 	char str[] = "Hello";
// 	char str2[] = " world";
// 	printf("%s", ft_strjoin(str, str2));
// }