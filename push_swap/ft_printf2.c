/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:52:54 by sriyani           #+#    #+#             */
/*   Updated: 2022/04/10 14:52:56 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			r += ft_putcharr(format[i]);
		}
		i++;
	}
	va_end(args);
	return (r);
}
