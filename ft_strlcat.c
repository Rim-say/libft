/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:16:38 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/11 16:35:24 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	j;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = 0;
	if (dest_len >= size)
		return (size + src_len);
	while (src[j] != '\0' && dest_len + j < size - 1)
	{
		dst[dest_len + j] = src[j];
		j++;
	}
	dst[dest_len + j] = '\0';
	return (dest_len + src_len);
}
