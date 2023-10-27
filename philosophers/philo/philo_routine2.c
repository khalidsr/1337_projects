/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_routine2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:49:02 by sriyani           #+#    #+#             */
/*   Updated: 2022/08/05 11:29:25 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	print_routine(unsigned long time, int philo_nbr,
					char *str, t_phil *philo)
{
	pthread_mutex_lock(philo->var.print);
	printf("%lu ms philo %d %s\n", time, philo_nbr, str);
	pthread_mutex_unlock(philo->var.print);
}

void	print_dead(unsigned long time, int philo_nbr, char *str, t_phil *philo)
{
	pthread_mutex_lock(philo->var.print);
	printf(RED"%lu ms philo %d %s\n", time, philo_nbr, str);
}

void	*philo_sleep(t_phil	*philo)
{
	ft_usleep(philo->var.time_eating);
	pthread_mutex_unlock(philo->var.fork);
	pthread_mutex_unlock(philo->var.next_fork);
	pthread_mutex_lock(philo->var.dead);
	philo->eating = 1;
	philo->var.time_last_meals = get_time();
	pthread_mutex_unlock(philo->var.dead);
	print_routine(get_time() - philo->time, philo->nbr,
		"is sleeping", philo);
	ft_usleep(philo->var.time_sleeping);
	print_routine(get_time() - philo->time, philo->nbr,
		"is thinking", philo);
	return (NULL);
}

void	*philo_routine(void *phil)
{
	t_phil		*philo;
	static int	k;

	philo = (t_phil *)phil;
	while ((philo->var.nbr_meals <= philo->var.time_must_eat)
		|| philo->var.time_must_eat == -1)
	{	
		philo_routine2(philo);
		philo->var.nbr_meals++;
		if (philo->var.nbr_meals == philo->var.time_must_eat)
		{
			pthread_mutex_lock(philo->var.p);
				k++;
			philo->var.total = k;
			pthread_mutex_unlock(philo->var.p);
		}
		philo_sleep(philo);
	}
	return (NULL);
}

void	philo_routine2(t_phil	*philo)
{
	pthread_mutex_lock(philo->var.fork);
	print_routine(get_time() - philo->time, philo->nbr,
		"has take a fork", philo);
	pthread_mutex_lock(philo->var.next_fork);
	print_routine(get_time() - philo->time, philo->nbr,
		"has take a fork", philo);
	print_routine(get_time() - philo->time, philo->nbr,
		"is eating", philo);
}
