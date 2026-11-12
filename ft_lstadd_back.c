/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:27:17 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 14:07:26 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	if (lst != NULL && new != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
// #include <stdio.h>

// int main()
// {
//     t_list  *head;
//     t_list  *node1;
// 	t_list  *node2;

//     head = NULL;
//     node1 = ft_lstnew("hello");
//     ft_lstadd_back(&head, node1);
// 	node2 = ft_lstnew("2");
// 	ft_lstadd_back(&head, node2);
//     printf("%s", (char *)head->next->content);
// }
