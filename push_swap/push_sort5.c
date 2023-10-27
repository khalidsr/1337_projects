/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:26:43 by sriyani           #+#    #+#             */
/*   Updated: 2022/05/10 15:26:50 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_data *pile, int *stack)
{
	int	i;

	i = 0;
	if (pile->size_a <= 1)
		exit(0);
	if (pile->size_a == 2)
	{
		if (stack[1] > stack[0])
			sa(pile);
	}
	if (pile->size_a == 3)
	{
		if (stack[2] > stack[0] && stack[2] > stack[1])
			ra(pile);
		if (stack[2] < stack[1] && stack[1] > stack[0])
			rra(pile);
		if (stack[2] > stack[1] && stack[1] < stack[0])
			sa(pile);
	}
}

void	sort4(t_data *pile, int tmp)
{
	if (!check_sort(pile))
	{
		check_small(tmp, pile);
		if (!check_sort(pile))
			sort3(pile, pile->stack_a);
		pa(pile);
	}
}

void	sort5(t_data *pile, int size)
{
	int	tmp;

	if (size == 4)
	{
		tmp = find_small(pile, 4);
		sort4(pile, tmp);
	}
	if (size == 5)
	{
		tmp = find_small(pile, 5);
		check_small2(tmp, pile);
		if (!check_sort(pile))
		{
			tmp = find_small(pile, 4);
			check_small(tmp, pile);
		}
		if (!check_sort(pile))
			sort3(pile, pile->stack_a);
		pa(pile);
		pa(pile);
	}
}

void	to_tab(t_data *pile)
{
	int	i;

	i = 0;
	while (i < pile->size_a)
	{
		pile->tab[i] = pile->stack_a[i];
		i++;
	}
	ft_sort(pile);
}
