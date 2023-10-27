/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 10:41:42 by sriyani           #+#    #+#             */
/*   Updated: 2021/11/24 17:09:30 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s)
	{
		if ((*s != c && len == 0) || (*s != c && *(s - 1) == c))
			len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		end;
	int		index;
	int		start;

	end = 0;
	start = 0;
	index = 0;
	if (!s)
		return (NULL);
	ptr = malloc(sizeof(char *) * (ft_len(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (index < ft_len(s, c))
	{
		while (s[end] == c && s[end])
			end++;
		start = end;
		while (s[end] != c && s[end])
			end++;
		ptr[index] = ft_substr(s, start, end - start);
		index++;
	}
	ptr[index] = NULL;
	return (ptr);
}
