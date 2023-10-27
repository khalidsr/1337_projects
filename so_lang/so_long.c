/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:44:40 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/30 20:36:07 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_solong(t_vars vars, char **s, int line, int colonne)
{
	int	len;
	int	len1;

	len = 0;
	len1 = 0;
	vars.filname = "player.XPM";
	vars.filname2 = "sea.XPM";
	vars.filname3 = "wall.XPM";
	vars.c_len = ft_pos_collecte(vars.ar);
	put_wall(vars, s, vars.x, vars.y);
	put_player(vars, s, vars.x, vars.y);
	put_colllectible(vars, s, vars.x, vars.y);
	put_exit(vars, s, vars.x, vars.y);
	mlx_hook(vars.mlx_win, 2, 1L << 0, ft_close, &vars);
	mlx_hook(vars.mlx_win, 17, 1L << 17, &ft_mouse_hook, &vars);
	ft_position(&vars, s);
	ft_pos_collecte(s);
	ft_check_map(s, len, len1);
	ft_check_map2(s, line, colonne);
	ft_check_map3(s, line, colonne);
	mlx_key_hook(vars.mlx_win, key_hook, &vars);
	mlx_loop(vars.mlx_ptr);
}

int	main(int ac, char **av)
{
	t_vars	vars;
	int		line;
	char	**s;
	int		colonne;
	int		fd;

	vars.k = 70;
	vars.filname2 = "sea.XPM";
	fd = open(av[1], O_RDONLY);
	ft_error_fd(fd);
	colonne = ft_map_colonne(av);
	line = ft_map_line(av);
	vars.x = (colonne * 70);
	vars.y = (line * 70);
	s = convert(&vars, av, fd);
	vars.mlx_ptr = mlx_init();
	if (vars.mlx_ptr == NULL)
		exit(1);
	vars.mlx_win = mlx_new_window(vars.mlx_ptr, vars.x, vars.y, "./so_long");
	vars.img = mlx_new_image(vars.mlx_ptr, vars.x, vars.y);
	ft_check_map5(s, line);
	ft_check_map4(ac, av);
	put_sea(&vars, colonne, line);
	ft_solong(vars, s, line, colonne);
	return (0);
}
