/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:40:01 by sriyani           #+#    #+#             */
/*   Updated: 2022/04/02 15:40:04 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_data
{
	int		*stack_a;
	int		*stack_b;
	int		tmp;
	int		k;
	int		kt;
	int		o;
	int		z;
	int		i;
	int		j;
	int		min;
	int		max;
	int		*tab;
	int		capacity;
	int		size_a;
	int		size_b;
	int		top_a;
	int		top_b;
}		t_data;

void	ft_error(void);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
int		ft_printfspesific(const char format, va_list args);
int		ft_printf(const char *format, ...);
int		ft_putcharr(char c);
int		ft_isdigit(int c);
void	swap(int *a, int *b);
void	sa(t_data *pile);
void	sb(t_data *pile);
void	rra(t_data *pile);
void	rrb(t_data *pile);
void	ra(t_data *pile);
void	rb(t_data *pile);
void	pa(t_data *pile);
void	pb(t_data *pile);
int		check_sort(t_data *pile);
void	check_double(t_data *pile);
int		find_small(t_data *pile, int size);
void	check_small(int tmp, t_data *pile);
void	check_small2(int tmp, t_data *pile);
void	sort4(t_data *pile, int tmp);
void	check_arg(char **av, t_data *pile);
void	sort3(t_data *pile, int *stack);
void	sort5(t_data *pile, int size);
void	sort100(t_data *pile);
void	sort_indix(t_data *pile);
int		find_big(t_data *pile, int size);
void	chunk_stack(t_data *pile);
void	ft_sort(t_data *pile);
void	to_tab(t_data *pile);
void	sort_chunk(t_data *pile);
void	chunk_tab(t_data *pile);
void	chunk_tab2(t_data *pile, int tmp);
void	chunk_tab3(t_data *pile);
void	chunk_tab4(t_data *pile);
void	chunk_tab5(t_data *pile);
void	chunk_sec(t_data *pile, int max, int min);
void	b_to_a(t_data *pile);
void	b_to_a2(t_data *pile);
void	check_arg2(char **av, t_data *pile);
void	chunk_sec_rb_rrb(t_data *pile, int min);
int		ft_strlen(char *str);
void	check_arg3(char **av);

#	endif
