/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:47:22 by sriyani           #+#    #+#             */
/*   Updated: 2022/05/20 11:47:26 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_small(int tmp, t_data *pile)
{
	if (tmp == 3)
		pb(pile);
	if (tmp == 2)
	{
		ra(pile);
		pb(pile);
	}	
	if (tmp == 1)
	{
		ra(pile);
		ra(pile);
		pb(pile);
	}
	if (tmp == 0)
	{
		rra(pile);
		pb(pile);
	}
}

void	check_small2(int tmp, t_data *pile)
{
	if (tmp == 4)
		pb(pile);
	if (tmp == 3)
	{
		ra(pile);
		pb(pile);
	}
	if (tmp == 2)
	{
		ra(pile);
		ra(pile);
		pb(pile);
	}
	if (tmp == 1)
	{
		rra(pile);
		rra(pile);
		pb(pile);
	}
	if (tmp == 0)
	{
		rra(pile);
		pb(pile);
	}		
}
