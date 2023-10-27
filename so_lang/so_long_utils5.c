/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:46:19 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/30 20:39:45 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(int keycode, t_vars *vars)
{
	if (keycode == 53)
	{
		mlx_destroy_window(vars->mlx_ptr, vars->mlx_win);
		exit(0);
	}
	return (0);
}

void	ft_position(t_vars *vars, char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == 'P')
			{
				vars->pos_x = i;
				vars->pos_y = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	ft_check_map5(char **s, int line)
{
	int	i;

	i = 0;
	while (s[i] && i < line - 2)
	{
		if (ft_strlen(s[i]) != ft_strlen(s[i + 1]))
			ft_perror();
		i++;
	}
	if (ft_strlen(s[0]) != (ft_strlen(s[line - 1]) + 1))
		ft_perror();
}
