/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:45:18 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/30 20:37:56 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_sea(t_vars *vars, int colonne, int line)
{
	int		temp_x;
	int		temp_y;
	int		i;
	int		j;

	temp_x = colonne * 70;
	temp_y = line * 70;
	vars->img2 = mlx_xpm_file_to_image(vars->mlx_ptr, vars->filname2,
			&temp_x, &temp_y);
	i = 0;
	vars->y = 0;
	while (i < line)
	{
		j = 0;
		vars->x = 0;
		while (j < colonne)
		{
			mlx_put_image_to_window(vars->mlx_ptr, vars->mlx_win,
				vars->img2, vars->x, vars->y);
			vars->x += 70;
			j++;
		}
		vars->y += 70;
		i++;
	}
}

int	ft_map_line(char **av)
{
	int		len;
	char	*ptr;
	int		fd1;

	len = 0;
	fd1 = open(av[1], O_RDWR, 0644);
	ft_error_fd(fd1);
	ptr = get_next_line(fd1);
	if (!ptr)
		ft_perror();
	while (ptr)
	{
		free(ptr);
		ptr = get_next_line(fd1);
		len++;
	}
	return (len);
}

int	ft_map_colonne(char **av)
{
	int		i;
	char	*str;
	int		fd2;

	fd2 = open(av[1], O_RDONLY, 0644);
	ft_error_fd(fd2);
	str = get_next_line(fd2);
	if (!str)
		ft_perror();
	i = ft_strlen(str) - 1;
	free(str);
	return (i);
}

char	**convert(t_vars *vars, char **av, int fd)
{
	int	len;
	int	i;

	len = ft_map_line(av);
	i = 0;
	vars->ar = malloc(sizeof(char *) * len + 1);
	while (i < len)
	{
		vars->ar[i] = get_next_line(fd);
		i++;
	}
	vars->ar[i] = get_next_line(fd);
	return (vars->ar);
}
