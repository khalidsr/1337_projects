/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:46:00 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/30 20:39:24 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_perror(void)
{
	ft_printf("Error\nmap");
	exit(0);
}

void	ft_error_fd(int fd)
{
	if (fd < 0)
	{
		ft_printf("error\nfrom fd");
		exit(1);
	}	
}

int	ft_pos_collecte(char **s)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == 'C')
				len++;
			j++;
		}
		i++;
	}
	return (len);
}

int	ft_count(void)
{
	static int	count;

	count++;
	ft_printf("%d\n", count);
	return (count);
}

void	ft_win(t_vars *vars)
{
	if (vars-> c_len == 0 && vars->ar[vars->pos_x][vars->pos_y] != 'E')
	{
		ft_printf("you win\n");
		exit(0);
	}
}
