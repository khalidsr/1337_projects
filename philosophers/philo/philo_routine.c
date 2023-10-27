/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_routine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:03:04 by sriyani           #+#    #+#             */
/*   Updated: 2022/08/11 19:15:24 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	ft_usleep(unsigned int temps)
{
	time_t	time;

	time = get_time();
	while (get_time() - time < temps)
		usleep(10);
}

int	creat_threads(t_phil **philo)
{
	int			nbr;
	int			i;
	pthread_t	*threads;

	i = 0;
	nbr = philo[i]->var.nbr_philo;
	threads = malloc(sizeof(pthread_t) * nbr);
	while (i < nbr)
	{
		if (pthread_create(&threads[i], NULL, (void *)philo_routine, philo[i]))
			return (1);
		usleep(100);
		i++;
	}
	i = 0;
	while (i < nbr)
	{
		if (pthread_detach(threads[i]))
			return (1);
		i++;
	}
	free(threads);
	return (0);
}
