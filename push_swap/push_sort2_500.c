/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort2_500.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 09:31:09 by sriyani           #+#    #+#             */
/*   Updated: 2022/05/21 09:31:13 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_to_a(t_data *pile)
{
	pile->i = pile->size_a;
	pile->j = -1;
	pile->kt = pile->capacity - 1;
	while (pile->i <= pile->kt)
	{
		pile->tmp = pile->tab[pile->i];
		if (pile->stack_b[pile->top_b] == pile->tmp)
		{
			pa(pile);
			pile->i++;
		}
		else if (pile->size_a > 0 && pile->size_b != 0
			&& ((pile->j == -1 && pile->stack_b[pile->top_b] < pile->stack_a[0])
				|| (pile->j > -1
					&& pile->stack_b[pile->top_b] > pile->stack_a[0])))
		{
			pa(pile);
			ra(pile);
			pile->j++;
		}
		b_to_a2(pile);
	}
}

void	b_to_a2(t_data *pile)
{
	if (pile->stack_a[0] == pile->tmp)
	{
		rra(pile);
		pile->i++;
		pile->j--;
	}
	else
		chunk_sec_rb_rrb(pile, pile->tmp);
}

void	chunk_sec_rb_rrb(t_data *pile, int min)
{
	int	i;
	int	j;

	i = pile->top_b - 1;
	j = 0;
	while (j < pile->size_b / 2 || pile->size_b / 2 < i)
	{
		if (min == pile->stack_b[i])
		{
			rb(pile);
			break ;
		}
		if (min == pile->stack_b[j])
		{
			rrb(pile);
			break ;
		}
		i--;
		j++;
	}
}
