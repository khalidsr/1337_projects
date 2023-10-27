/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:47:13 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/30 20:47:17 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	put_exit(t_vars vars, char **s, int temp_x, int temp_y)
{
	char	*filname;
	void	*imag;
	int		i;
	int		j;

	i = 0;
	filname = "exit.XPM";
	imag = mlx_xpm_file_to_image(vars.mlx_ptr, filname, &temp_x, &temp_y);
	vars.y = 0;
	while (s[i])
	{
		vars.x = 0;
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == 'E')
				mlx_put_image_to_window(vars.mlx_ptr, vars.mlx_win,
					imag, vars.x, vars.y);
			vars.x += 70;
			j++;
		}
		i++;
		vars.y += 70;
	}
}

void	put_colllectible(t_vars vars, char **s, int temp_x, int temp_y)
{
	char	*filname;
	void	*imag;
	int		i;
	int		j;

	i = 0;
	filname = "collectible.xpm";
	imag = mlx_xpm_file_to_image(vars.mlx_ptr, filname, &temp_x, &temp_y);
	vars.y = 0;
	while (s[i])
	{
		vars.x = 0;
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == 'C')
				mlx_put_image_to_window(vars.mlx_ptr, vars.mlx_win,
					imag, vars.x, vars.y);
			vars.x += 70;
			j++;
		}
		i++;
		vars.y += 70;
	}
}

void	put_player(t_vars vars, char **s, int temp_x, int temp_y)
{
	char	*filname;
	void	*imag;
	int		i;
	int		j;

	i = 0;
	filname = "player.XPM";
	imag = mlx_xpm_file_to_image(vars.mlx_ptr, filname, &temp_x, &temp_y);
	vars.y = 0;
	while (s[i])
	{
		vars.x = 0;
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == 'P')
				mlx_put_image_to_window(vars.mlx_ptr, vars.mlx_win,
					imag, vars.x, vars.y);
			vars.x += 70;
			j++;
		}
		i++;
		vars.y += 70;
	}
}

void	put_wall(t_vars vars, char **s, int temp_x, int temp_y)
{
	char	*filname;
	void	*imag;
	int		i;
	int		j;

	i = 0;
	filname = "wall.XPM";
	imag = mlx_xpm_file_to_image(vars.mlx_ptr, filname, &temp_x, &temp_y);
	vars.y = 0;
	while (s[i])
	{
		vars.x = 0;
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == '1')
				mlx_put_image_to_window(vars.mlx_ptr, vars.mlx_win,
					imag, vars.x, vars.y);
			vars.x += 70;
			j++;
		}
		vars.y += 70;
		i++;
	}
}
