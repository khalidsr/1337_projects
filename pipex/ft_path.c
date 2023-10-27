/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 11:29:45 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/04 10:18:19 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_free(char **path)
{
	int	i;

	i = 0;
	while (path[i])
	{
		free(path[i]);
		i++;
	}
}

char	*ft_path(char *av, char **env)
{
	char	*envp;
	char	**path;
	char	*cmdpath;
	int		i;

	i = -1;
	cmdpath = NULL;
	while (env[++i])
	{
		envp = ft_strstr(env[i], "PATH");
		if (ft_strnstr(env[i], "PATH=", 5))
			break ;
	}
	path = ft_split(envp + 5, ':');
	i = -1;
	while (path[++i])
	{
		cmdpath = ft_strjoin(path[i], "/");
		cmdpath = ft_strjoin(cmdpath, av);
		if (access(cmdpath, F_OK) == 0)
			return (cmdpath);
	}
	ft_free(path);
	free (cmdpath);
	return (NULL);
}
