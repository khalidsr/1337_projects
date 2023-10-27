/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort500.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:26:14 by sriyani           #+#    #+#             */
/*   Updated: 2022/05/10 16:26:16 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort100(t_data *pile)
{
	chunk_tab(pile);
	if (!check_sort(pile))
	{
		if (pile->size_a <= 5)
			sort5(pile, pile->size_a);
		if (pile->size_a <= 3)
			sort3(pile, pile->stack_a);
	}
	b_to_a(pile);
}

void	chunk_tab(t_data *pile)
{
	int	tmp;
	int	y;

	pile->z = 0;
	pile->kt = pile->capacity - 1;
	if (pile->size_a > 100)
		y = 5;
	else if (pile->size_a == 500)
		y = 11;
	else
		y = 4;
	pile->o = y;
	pile->k = pile->kt / y;
	tmp = pile->kt % y + 1;
	while (pile->z < pile->k)
	{
		chunk_tab2(pile, tmp);
		if (pile->z == pile->k)
		{
			pile->o--;
			pile->z = 0;
			if (pile->o == 0)
				break ;
		}
	}
}

void	chunk_tab2(t_data *pile, int tmp)
{
	pile->min = pile->tab[pile->o * pile->k + tmp - 1];
	pile->max = pile->tab[(pile->o - 1) * pile->k + tmp];
	if (pile->min <= pile->stack_a[pile->top_a]
		&& pile->stack_a[pile->top_a] <= pile->max)
	{
		pb(pile);
		pile->z++;
	}
	else
		chunk_sec(pile, pile->max, pile->min);
}

void	chunk_sec(t_data *pile, int max, int min)
{
	int	i;
	int	j;

	i = pile->top_a - 1;
	j = 0;
	while (j < pile->size_a / 2 || pile->size_a / 2 < i)
	{
		if (min <= pile->stack_a[i] && pile->stack_a[i] <= max)
		{
			ra(pile);
			break ;
		}
		if (min <= pile->stack_a[j] && pile->stack_a[j] <= max)
		{
			rra(pile);
			break ;
		}
		i--;
		j++;
	}
}
