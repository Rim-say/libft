/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:30:09 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 16:40:58 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;

	current = lst;
	while (current->next != NULL)
	{
		if (current->content != '\0')
			del(current->content);
		f(current->content);
		current = current->next;
	}
	current = lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
}
