/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus_utils6.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:48:00 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/30 20:48:04 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	key_hook(int keycode, t_vars *vars)
{
	void	*imag;
	void	*imag2;

	imag = mlx_xpm_file_to_image(vars->mlx_ptr, vars->filname,
			&vars->k, &vars->k);
	imag2 = mlx_xpm_file_to_image(vars->mlx_ptr, vars->filname2,
			&vars->k, &vars->k);
	key_hook1(keycode, vars, imag, imag2);
	return (0);
}

int	key_hook1(int keycode, t_vars *vars, void *imag, void *imag2)
{
	void	*imag3;

	imag3 = mlx_xpm_file_to_image(vars->mlx_ptr, vars->filname3,
			&vars->k, &vars->k);
	if (keycode == 13 && vars->ar[vars->pos_x - 1][vars->pos_y] !=
		'1' && vars->ar[vars->pos_x - 1][vars->pos_y] != 'E')
	{
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win, imag,
			vars->pos_y * 70, (vars->pos_x * 70) - 70);
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win, imag2,
			vars->pos_y * 70, vars->pos_x * 70);
		vars->pos_x--;
		if (vars->ar[vars->pos_x][vars->pos_y] == 'N')
			ft_lose();
		if (vars->ar[vars->pos_x][vars->pos_y] == 'C')
			vars->c_len--;
		vars->ar[vars->pos_x][vars->pos_y] = '0';
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win, imag3, 420, 0);
		ft_key(vars);
	}
	else if (keycode == 13 && vars->ar[vars->pos_x - 1][vars->pos_y] == 'E')
		ft_win(vars);
	key_hook2(keycode, vars, imag, imag2);
	return (0);
}

int	key_hook2(int keycode, t_vars *vars, void *imag, void *imag2)
{
	void	*imag3;

	imag3 = mlx_xpm_file_to_image(vars->mlx_ptr, vars->filname3,
			&vars->k, &vars->k);
	if (keycode == 1 && vars->ar[vars->pos_x + 1][vars->pos_y] !=
		'1' && vars->ar[vars->pos_x + 1][vars->pos_y] != 'E')
	{
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win, imag,
			vars->pos_y * 70, (vars->pos_x * 70) + 70);
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win, imag2,
			vars->pos_y * 70, vars->pos_x * 70);
		vars->pos_x++;
		if (vars->ar[vars->pos_x][vars->pos_y] == 'N')
			ft_lose();
		if (vars->ar[vars->pos_x][vars->pos_y] == 'C')
			vars->c_len--;
		vars->ar[vars->pos_x][vars->pos_y] = '0';
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win, imag3, 420, 0);
		ft_key(vars);
	}
	else if (keycode == 1 && vars->ar[vars->pos_x + 1][vars->pos_y] == 'E')
		ft_win(vars);
	key_hook3(keycode, vars, imag, imag2);
	return (0);
}

int	key_hook3(int keycode, t_vars *vars, void *imag, void *imag2)
{
	void	*imag3;

	imag3 = mlx_xpm_file_to_image(vars->mlx_ptr, vars->filname3,
			&vars->k, &vars->k);
	if (keycode == 0 && vars->ar[vars->pos_x][vars->pos_y - 1] !=
		'1' && vars->ar[vars->pos_x][vars->pos_y - 1] != 'E')
	{
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win,
			imag, (vars->pos_y * 70) - 70, (vars->pos_x * 70));
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win,
			imag2, vars->pos_y * 70, vars->pos_x * 70);
		vars->pos_y--;
		if (vars->ar[vars->pos_x][vars->pos_y] == 'N')
			ft_lose();
		if (vars->ar[vars->pos_x][vars->pos_y] == 'C')
			vars->c_len--;
		vars->ar[vars->pos_x][vars->pos_y] = '0';
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win, imag3, 420, 0);
		ft_key(vars);
	}
	else if (keycode == 0 && vars->ar[vars->pos_x][vars->pos_y - 1] == 'E')
		ft_win(vars);
	key_hook4(keycode, vars, imag, imag2);
	return (0);
}

int	key_hook4(int keycode, t_vars *vars, void *imag, void *imag2)
{
	void	*imag3;

	imag3 = mlx_xpm_file_to_image(vars->mlx_ptr, vars->filname3,
			&vars->k, &vars->k);
	if (keycode == 2 && vars->ar[vars->pos_x][vars->pos_y + 1] !=
		'1' && vars->ar[vars->pos_x][vars->pos_y + 1] != 'E')
	{
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win,
			imag, (vars->pos_y * 70) + 70, vars->pos_x * 70);
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win,
			imag2, vars->pos_y * 70, vars->pos_x * 70);
		vars->pos_y++;
		if (vars->ar[vars->pos_x][vars->pos_y] == 'N')
			ft_lose();
		if (vars->ar[vars->pos_x][vars->pos_y] == 'C')
		{
			vars->c_len--;
			vars->ar[vars->pos_x][vars->pos_y] = '0';
		}
		mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win, imag3, 420, 0);
		ft_key(vars);
	}
	else if (keycode == 2 && vars->ar[vars->pos_x][vars->pos_y + 1] == 'E')
		ft_win(vars);
	return (0);
}
