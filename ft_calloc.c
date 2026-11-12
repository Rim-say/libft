/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:27:49 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 11:00:54 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	arr = malloc(nmemb * sizeof(size));
	if (!arr)
		return (NULL);
	ft_bzero(arr, nmemb * sizeof(size));
	return (arr);
}
// #include <stdio.h>

// int main()
// {
// 	char *arr;
// 	// int i = 0;

// 	arr = ft_calloc(SIZE_MAX, 2);
// 	printf("%s", arr);
// 	printf("%s", arr ? "Non-null" : "NULL");
// }