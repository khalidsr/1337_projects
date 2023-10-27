/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus_utils5.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:48:26 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/30 20:48:37 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_lose(void)
{
	ft_printf("you lose! try again ;) ");
	exit(0);
}

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

void	ft_key(t_vars *vars)
{
	char	*str;

	str = ft_itoa(ft_count());
	mlx_string_put(vars->mlx_ptr, vars->mlx_win, 420, 0, 0x0000FF00, str);
	free(str);
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
