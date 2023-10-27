/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:26:18 by sriyani           #+#    #+#             */
/*   Updated: 2021/11/24 11:31:28 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strch(char c, char const *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		a;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strch(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strch(s1[j - 1], set) == 1)
		j--;
	ptr = NULL;
	ptr = (char *) malloc (sizeof(char) * (j - i + 1));
	if (!ptr)
		return (NULL);
	a = 0;
	while (i < j)
		ptr[a++] = s1[i++];
	ptr[a] = '\0';
	return (ptr);
}
