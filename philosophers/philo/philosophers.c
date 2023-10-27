/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:18:00 by sriyani           #+#    #+#             */
/*   Updated: 2022/08/11 19:25:13 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	supervisor(t_phil **philo)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = philo[i]->var.nbr_philo;
	while (1)
	{
		pthread_mutex_lock(philo[i]->var.p);
		if (philo[i]->var.total == nbr)
			return ;
		pthread_mutex_unlock(philo[i]->var.p);
		pthread_mutex_lock(philo[i]->var.dead);
		if ((get_time() - philo[i]->var.time_last_meals
				>philo[i]->var.time_dieing) && philo[i]->eating == 0)
		{
			print_dead(get_time() - philo[i]->time, philo[i]->nbr,
				"is dead", philo[i]);
			return ;
		}
		usleep(100);
		pthread_mutex_unlock(philo[i]->var.dead);
		i = (i + 1) % nbr;
	}
}

int	ft_philo(t_phil **philo, int nbr)
{
	int	i;

	i = 0;
	while (i < nbr)
	{
		philo[i]->var.next_fork = philo[(i + 1)
			% philo[i]->var.nbr_philo]->var.fork;
		if (pthread_mutex_init(philo[i]->var.fork, NULL))
			return (1);
		if (pthread_mutex_init(philo[i]->var.p, NULL))
			return (1);
		if (pthread_mutex_init(philo[i]->var.dead, NULL))
			return (1);
		if (pthread_mutex_init(philo[i]->var.print, NULL))
			return (1);
		i++;
	}
	creat_threads(philo);
	supervisor(philo);
	return (0);
}

int	ft_philo2(t_phil **philo, int i)
{
	philo[i]->var.fork = malloc(sizeof(pthread_mutex_t));
	philo[i]->var.dead = malloc(sizeof(pthread_mutex_t));
	philo[i]->var.p = malloc(sizeof(pthread_mutex_t));
	philo[i]->var.print = malloc(sizeof(pthread_mutex_t));
	philo[i]->var.nbr_meals = 0;
	philo[i]->time = get_time();
	philo[i]->var.time_last_meals = get_time();
	if (!philo[i]->var.fork && philo[i]->var.p
		&& !philo[i]->var.print && !philo[i]->var.dead)
		return (1);
	return (0);
}

void	ft_philo3(t_phil **philo, t_phil philosoph, int i, int ac)
{
	if (ac == 5)
		philosoph.ar[4] = -1;
	philo[i]->var.nbr_philo = philosoph.ar[0];
	philo[i]->var.time_dieing = philosoph.ar[1];
	philo[i]->var.time_eating = philosoph.ar[2];
	philo[i]->var.time_sleeping = philosoph.ar[3];
	philo[i]->var.time_must_eat = philosoph.ar[4];
}

int	main(int ac, char **av)
{
	t_phil	**philo;
	t_phil	philosoph;
	int		i;

	philosoph.ar = malloc(sizeof(int *) * ac);
	if ((check_arg(av, &philosoph) && (ac == 5 || ac == 6)))
	{
		i = 0;
		philo = malloc(sizeof(t_phil *) * philosoph.ar[0]);
		while (i < philosoph.ar[0])
		{
			philo[i] = malloc(sizeof(t_phil));
			philo[i]->nbr = i + 1;
			philo[i]->eating = 0;
			ft_philo3(philo, philosoph, i, ac);
			ft_philo2(philo, i);
			if (philo[i]->var.time_must_eat == 0 || !philosoph.ar
				|| !philo || !philo[i])
				return (0);
			i++;
		}
		ft_philo(philo, philosoph.ar[0]);
	}
	return (0);
}
