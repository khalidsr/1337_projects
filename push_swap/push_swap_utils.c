/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:01:08 by sriyani           #+#    #+#             */
/*   Updated: 2022/04/07 13:01:46 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	long	res;
	int		signe;
	int		i;

	i = 0;
	signe = 1;
	res = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			signe = signe * (-1);
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		if (signe * res > INT32_MAX)
			return (-1);
		else if (signe * res < INT32_MIN)
			return (0);
		i++;
	}	
	return (res * signe);
}

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

void	ft_sort(t_data *pile)
{
	int		swap;
	int		i;
	int		j;

	i = 0;
	while (i < pile->size_a)
	{
		j = i + 1;
		while (j < pile->size_a)
		{
			if (pile->tab[i] < pile->tab[j])
			{
				swap = pile->tab[i];
				pile->tab[i] = pile->tab[j];
				pile->tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
