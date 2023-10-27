/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:33:26 by sriyani           #+#    #+#             */
/*   Updated: 2021/12/05 15:05:33 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	len = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		len++;
		i++;
	}
	return (len);
}
