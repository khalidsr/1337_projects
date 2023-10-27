/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrlowehex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:03:25 by sriyani           #+#    #+#             */
/*   Updated: 2021/12/05 14:54:21 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lenhexa(unsigned int num)
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

int	ft_putnbrlowehex(unsigned int nbr)
{
	char	*s;

	s = "0123456789abcdef";
	if (nbr > 15)
		ft_putnbrlowehex(nbr / 16);
	ft_putchar(s[nbr % 16]);
	return (ft_lenhexa(nbr));
}
