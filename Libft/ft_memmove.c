/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:29:21 by sriyani           #+#    #+#             */
/*   Updated: 2021/11/28 23:08:37 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*ddst;
	char	*ssrc;

	ddst = (char *) dst;
	ssrc = (char *) src;
	i = 0;
	if (!ddst && !ssrc)
		return (NULL);
	if (ddst > ssrc)
	{
		while (i < len)
		{
			ddst[len - 1] = ssrc[len - 1];
			len--;
		}
	}
	return (ft_memcpy(dst, src, len));
}
