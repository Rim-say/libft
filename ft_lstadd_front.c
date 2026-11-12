/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:44:02 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 10:44:37 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

// #include <stdio.h>

// int main()
// {
//     t_list  *head;
//     t_list  *new;

//     head = NULL;
//     new = ft_lstnew("hello");
//     ft_lstadd_front(&head, new);
//     printf("%s", (char *)head->content);
// }