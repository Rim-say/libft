/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:09:02 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 13:19:46 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;
size_t	ft_strlen(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	*ft_memset(void *arr, int value, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_putchar_fd(char c, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);

#endif