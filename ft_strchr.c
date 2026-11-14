/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 09:31:41 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/14 14:16:11 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (&s1[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&s1[i]);
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     const char *str = "Hello 42";
//     printf("%s\n", ft_strchr(str, '4'));
// }