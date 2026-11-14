/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:27:49 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/14 14:57:30 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, nmemb * size);
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