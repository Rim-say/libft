/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-saye <ral-saye@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:48:01 by ral-saye          #+#    #+#             */
/*   Updated: 2026/11/12 16:16:12 by ral-saye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	word;
	int	count;

	word = 1;
	count = 0;
	while (*str)
	{
		if (*str != c && word == 1)
		{
			word = 0;
			count++;
		}
		else if (*str == c)
			word = 1;
		str++;
	}
	return (count);
}

static char	*copy_word(char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc (sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	arr = malloc (sizeof(char *) * (word_count(s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j])
			j++;
		if (start < j)
			arr[i++] = copy_word((char *)s, start, j);
	}
	arr[i] = NULL;
	return (arr);
}
// #include <stdio.h>

// int main()
// {
// 	char *str = "hello, hello, hello";
// 	char c = ',';
// 	char **arr;
// 	arr = ft_split(str, c);
// 	for(int i = 0; i < 3; i++)
// 		printf("%s", arr[i]);
// }