/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:05:58 by sriyani           #+#    #+#             */
/*   Updated: 2022/04/20 14:06:37 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sa(t_data *pile)
{
	if (pile->size_a > 1)
	{
		swap(&pile->stack_a[pile->top_a], &pile->stack_a[pile->top_a - 1]);
		ft_printf("sa\n");
	}
}

void	sb(t_data *pile)
{
	if (pile->size_a > 1)
	{
		swap(&pile->stack_b[pile->top_b], &pile->stack_b[pile->top_b - 1]);
		ft_printf("sb\n");
	}
}

void	rra(t_data *pile)
{
	int	i;
	int	j;

	if (pile->size_a > 1)
	{
		i = pile->top_a;
		j = pile->top_a - 1;
		while (j >= 0)
		{
			swap(&pile->stack_a[pile->top_a - i],
				&pile->stack_a[pile->top_a - j]);
			i--;
			j--;
		}
		ft_printf("rra\n");
	}
}
