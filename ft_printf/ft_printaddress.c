/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:37:41 by sriyani           #+#    #+#             */
/*   Updated: 2021/12/05 17:42:01 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	lenhexa(unsigned long num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		num = num * (-1);
		len++;
	}
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

static	int	ft_putnbraddress(unsigned long nb)
{
	char	*format;

	format = "0123456789abcdef";
	if (nb > 15)
		ft_putnbraddress(nb / 16);
	ft_putchar(format[nb % 16]);
	return (lenhexa(nb));
}

int	ft_printaddress(unsigned long n)
{
	ft_putstr("0x");
	return (ft_putnbraddress(n) + 2);
}
