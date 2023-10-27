/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:08:00 by sriyani           #+#    #+#             */
/*   Updated: 2021/11/28 23:10:05 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ddest;
	char	*ssrc;

	i = 0;
	ddest = (char *)dest;
	ssrc = (char *)src;
	if (!ddest && !ssrc)
		return (NULL);
	while (i < n)
	{
		ddest[i] = ssrc[i];
		i++;
	}
	return (ddest);
}
