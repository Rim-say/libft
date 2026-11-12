/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:58:50 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/11 09:52:10 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *arr, int value, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)arr;
	while (i < size)
	{
		str[i] = (unsigned char) value;
		i++;
	}
	return (arr);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int arr[5];

//     ft_memset(arr, 0, sizeof(arr));

//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }