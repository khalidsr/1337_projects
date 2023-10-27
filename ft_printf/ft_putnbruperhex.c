/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbruperhex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:02:43 by sriyani           #+#    #+#             */
/*   Updated: 2021/12/05 15:03:24 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lenhex(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

int	ft_putnbruperhex(unsigned int nbr )
{
	char	*s;

	s = "0123456789ABCDEF";
	if (nbr > 15)
		ft_putnbruperhex(nbr / 16);
	ft_putchar(s[nbr % 16]);
	return (ft_lenhex(nbr));
}
