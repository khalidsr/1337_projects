/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:04:48 by sriyani           #+#    #+#             */
/*   Updated: 2021/12/05 14:59:36 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lenuns(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbrunsigned(unsigned int num)
{
	if (num >= 0 && num <= 9)
	{
		ft_putchar(num + '0');
	}
	else
	{
		ft_putnbrunsigned(num / 10);
		ft_putchar('0' + num % 10);
	}
	return (ft_lenuns(num));
}
