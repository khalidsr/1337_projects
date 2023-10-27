/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:57:04 by sriyani           #+#    #+#             */
/*   Updated: 2021/12/05 14:43:18 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putnbrunsigned(unsigned int nb);
int		ft_putnbrlowehex(unsigned int nbr);
int		ft_putnbruperhex(unsigned int nb);
int		ft_printaddress(unsigned long nb);
int		ft_printf(const char *format, ...);

#endif
