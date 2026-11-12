/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:30:09 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 17:28:05 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_list;
	t_list	*new;
	void	*content;

	while (current->next != NULL)
	{
		content = f(current->content);
		if (!content)
			del(current->content);
		new = ft_lstnew(content);
		ft_lstadd_back(new_list, new);
		current = current->next;
	}
	new->next = NULL;
	return (new_list);
}
