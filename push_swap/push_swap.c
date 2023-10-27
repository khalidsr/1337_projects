/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:39:48 by sriyani           #+#    #+#             */
/*   Updated: 2022/04/02 15:39:52 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(0);
}

int	check_sort(t_data *pile)
{
	int	i;

	i = 0;
	while (i < pile->top_a)
	{
		if (pile->stack_a[i] < pile->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	push_swap(t_data *pile, int ac, char **av)
{
	pile->capacity = ac - 1;
	pile->size_a = ac - 1;
	pile->size_b = 0;
	pile->top_a = pile->size_a - 1;
	pile->top_b = -1;
	pile->stack_a = (int *) malloc(sizeof(int) * pile->capacity);
	pile->stack_b = (int *) malloc(sizeof(int) * pile->capacity);
	pile->tab = (int *) malloc(sizeof(int) * pile->capacity);
	if (!pile->stack_a || !pile->stack_b)
		exit(0);
	check_arg(av, pile);
	to_tab(pile);
	if (!check_sort(pile))
	{
		if (pile->size_a <= 3)
			sort3(pile, pile->stack_a);
		if (pile ->size_a > 3 && pile->size_a <= 5)
			sort5(pile, pile->size_a);
		if (pile->size_a > 5)
			sort100(pile);
	}
}

int	main(int ac, char **av)
{
	t_data	pile;
	int		i;

	i = 1;
	while (i < ac)
	{
		if (av[i][0] == '\0')
			ft_error();
		i++;
	}
	push_swap(&pile, ac, av);
	return (0);
}
