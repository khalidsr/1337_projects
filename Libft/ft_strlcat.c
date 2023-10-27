/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:32:43 by sriyani           #+#    #+#             */
/*   Updated: 2021/11/28 23:03:19 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;

	i = 0;
	j = 0;
	lendst = ft_strlen(dst);
	if (dstsize < lendst)
		return (ft_strlen(src) + dstsize);
	if (dstsize > 0)
	{	
		while (dst[i])
			i++;
		while (src[j] && (i < dstsize - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		if (i < dstsize)
			dst[i] = '\0';
	}
	return (ft_strlen(src)+ lendst);
}
