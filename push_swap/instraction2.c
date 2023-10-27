/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intst	ft_printf2.c                                   :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:05:04 by sriyani           #+#    #+#             */
/*   Updated: 2022/04/21 12:05:09 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *pile)
{
	if (pile->size_b > 0)
	{
		pile->stack_a[pile->top_a + 1] = pile->stack_b[pile->top_b];
		pile->size_a++;
		pile->size_b--;
		pile->top_a++;
		pile->top_b--;
		ft_printf("pa\n");
	}
}

void	pb(t_data *pile)
{
	if (pile->size_a > 0)
	{
		pile->stack_b[pile->top_b + 1] = pile->stack_a[pile->top_a];
		pile->size_a--;
		pile->size_b++;
		pile->top_a--;
		pile->top_b++;
		ft_printf("pb\n");
	}
}

void	rrb(t_data *pile)
{
	int	i;
	int	j;

	if (pile->size_b > 1)
	{
		i = pile->top_b;
		j = pile->top_b - 1;
		while (j >= 0)
		{
			swap(&pile->stack_b[pile->top_b - i],
				&pile->stack_b[pile->top_b - j]);
			i--;
			j--;
		}
		ft_printf("rrb\n");
	}
}

void	ra(t_data *pile)
{
	int	i;
	int	j;

	if (pile->size_a > 1)
	{
		i = 0;
		j = 1;
		while (j < pile->size_a)
		{
			swap(&pile->stack_a[pile->top_a - i],
				&pile->stack_a[pile->top_a - j]);
			i++;
			j++;
		}
		ft_printf("ra\n");
	}
}

void	rb(t_data *pile)
{
	int	i;
	int	j;

	if (pile->size_b > 1)
	{
		i = 0;
		j = 1;
		while (j < pile->size_b)
		{
			swap(&pile->stack_b[pile->top_b - i],
				&pile->stack_b[pile ->top_b - j]);
			i++;
			j++;
		}
		ft_printf("rb\n");
	}
}
