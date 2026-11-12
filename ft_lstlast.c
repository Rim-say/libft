/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:38:51 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 13:27:37 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

// #include <stdio.h>

// int main()
// {
// 	t_list	*head;
// 	t_list *node1;
// 	t_list	*node2;
// 	t_list *node3;

// 	head = NULL;
// 	node1 = ft_lstnew("1");
// 	ft_lstadd_front(&head, node1);
// 	node2 = ft_lstnew("2");
// 	ft_lstadd_front(&head, node2);
// 	node3 = ft_lstnew("3");
// 	ft_lstadd_front(&head, node3);

// 	printf("%p", node1);
// 	printf("%p", ft_lstlast(head));

// }