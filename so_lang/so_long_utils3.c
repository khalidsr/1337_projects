/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:45:45 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/30 20:38:40 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_map(char **s, int len, int len1)
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
				len++;
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (ft_strchr(s[i], 'C') == 1)
			len1++;
		i++;
	}
	ft_check_map1(s, len, len1);
}

void	ft_check_map1(char **s, int len, int len1)
{
	int	i;
	int	len2;

	i = 0;
	len2 = 0;
	while (s[i])
	{
		if (ft_strchr(s[i], 'E') == 1)
			len2++;
		i++;
	}
	if (len != 1 || len1 == 0 || len2 == 0)
		ft_perror();
}

void	ft_check_map2(char **s, int line, int collone)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (!(s[i][j] == '0' || s[i][j] == '1' || s[i][j] == 'E' ||
				s[i][j] == 'P' || s[i][j] == 'C'))
				len++;
			j++;
		}
		i++;
	}
	if (len > line - 1 || line == collone)
		ft_perror();
}

void	ft_check_map3(char **s, int line, int colonne)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	j = 0;
	while (s[0][j])
	{
		if (s[0][j] != '1' || s[line - 1][j] != '1')
			len++;
		j++;
	}
	while (i < line)
	{
		if (s[i][0] != '1' || s[i][colonne - 1] != '1')
			len++;
		i++;
	}
	if (len - 1 != 0)
		ft_perror();
}

void	ft_check_map4(int ac, char **av)
{
	char	*str;

	if (ac != 2)
		ft_perror();
	str = ft_strrchr(av[1], '.');
	if (ft_strncmp(str, ".ber", 4) != 0)
		ft_perror();
}
