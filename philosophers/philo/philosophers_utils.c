/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:42:38 by sriyani           #+#    #+#             */
/*   Updated: 2022/08/07 19:20:52 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

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

int	check_arg(char **av, t_phil *philo)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][0] == '+')
				j++;
			if (!ft_isdigit(av[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	if (check_arg3(av) == 1)
		return (0);
	check_arg2(av, philo);
	return (1);
}

void	check_arg2(char **av, t_phil *philo)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		philo->ar[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
}
