/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:14:27 by sriyani           #+#    #+#             */
/*   Updated: 2022/08/07 19:13:43 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <unistd.h>
# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>
# include <sys/time.h>

# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define CYAN 	"\x1b[36m"
# define NOR  	"\x1B[37m"

typedef struct s_var
{	
	int				o;
	int				nbr_meals;
	int				time_eating;
	unsigned int	time_dieing;
	int				time_sleeping;
	int				total;
	unsigned long	time_last_meals;
	int				nbr_fork;
	int				nbr_philo;
	int				time_must_eat;
	pthread_mutex_t	*fork;
	pthread_mutex_t	*next_fork;
	pthread_mutex_t	*dead;
	pthread_mutex_t	*print;
	pthread_mutex_t	*p;

}	t_var;

typedef struct s_phil
{
	int				i;
	int				eating;
	int				dead;
	int				*ar;
	int				nbr;
	int				timing;
	unsigned long	time;
	t_var			var;
}	t_phil;

void			print_routine(unsigned long time, int philo_nbr,
					char *str, t_phil *philo);
int				check_arg(char **av, t_phil *philo);
void			check_arg2(char **av, t_phil *philo);
int				check_arg3(char **av);
int				ft_isdigit(int c);
int				ft_atoi(const char *str);
int				ft_strlen(char *str);
unsigned long	get_time(void);
void			philo_time(t_phil *philo);
void			supervisor(t_phil **philo);
unsigned long	temps(unsigned long time);
void			*philo_sleep(t_phil	*philo);
int				ft_philo2(t_phil **philo, int i);
void			ft_philo3(t_phil **philo, t_phil philosoph, int i, int ac);
int				creat_threads(t_phil **philo);
void			print_dead(unsigned long time, int philo_nbr,
					char *str, t_phil *philo);
void			*philo_routine(void *phil);
void			philo_routine2(t_phil	*philo);
void			ft_usleep(unsigned int tm);
#endif