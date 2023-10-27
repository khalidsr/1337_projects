/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_utils2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:09:16 by sriyani           #+#    #+#             */
/*   Updated: 2022/08/07 19:16:00 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	check_arg3(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		if (ft_strlen(av[i]) >= 10)
		{
			j = ft_atoi(av[i]);
			if (j == 0 || j == -1)
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned long	get_time(void)
{
	struct timeval	temps;
	unsigned long	l;

	l = 0;
	gettimeofday(&temps, NULL);
	l = temps.tv_sec * 1000 + temps.tv_usec / 1000;
	return (l);
}
