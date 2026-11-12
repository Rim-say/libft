/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:50:32 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 11:53:01 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmed;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (start < end && is_set(s1[start], set))
		start++;
	while (end > start && is_set(s1[end], set))
		end--;
	trimmed = malloc((end - start) * sizeof(char) + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, &s1[start], (end - start) + 1);
	return (trimmed);
}

// #include <stdio.h>

// int main()
// {
//     char *result;
//     result = ft_strtrim("xxxHello Worldxxx", "x");
//     printf("%s", result);
//     free(result);
// }