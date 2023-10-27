/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:29:43 by sriyani           #+#    #+#             */
/*   Updated: 2022/05/10 15:29:45 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_arg(char **av, t_data *pile)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-')
			{
				j++;
				if (!ft_isdigit(av[i][j]))
					ft_error();
			}
			else if (!ft_isdigit(av[i][j]))
				ft_error();
			j++;
		}
		i++;
	}
	check_arg2(av, pile);
	check_arg3(av);
	check_double(pile);
}

void	check_arg2(char **av, t_data *pile)
{
	int	i;
	int	j;

	i = 1;
	j = pile->top_a;
	while (av[i])
	{
		pile->stack_a[j] = ft_atoi(av[i]);
		i++;
		j--;
	}
}

void	check_arg3(char **av)
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
				ft_error();
		}
		i++;
	}
}

void	check_double(t_data *pile)
{
	int	i;
	int	j;

	i = 0;
	while (pile->stack_a[i])
	{
		j = i + 1;
		while (j < pile->size_a)
		{
			if (pile->stack_a[i] == pile->stack_a[j])
				ft_error();
			j++;
		}
		i++;
	}
}

int	find_small(t_data *pile, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = pile->stack_a[0];
	while (i < size)
	{
		if (tmp > pile->stack_a[i])
		{
			tmp = pile->stack_a[i];
			j = i;
		}
		i++;
	}
	return (j);
}
