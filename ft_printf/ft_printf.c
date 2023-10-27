/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:05:46 by sriyani           #+#    #+#             */
/*   Updated: 2021/12/04 11:26:04 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfspesific(const char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putnbrunsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_putnbrlowehex(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (ft_putnbruperhex(va_arg(args, unsigned int)));
	else if (format == 'p')
		return (ft_printaddress(va_arg(args, unsigned long)));
	else if (format == '%')
		ft_putchar('%');
	return (1);
}

int	ft_printf(const char *format, ...)
{
	int		r;
	int		i;
	va_list	args;

	i = 0;
	r = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			r += ft_printfspesific(format[i], args);
		}
		else
		{
			r += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (r);
}
