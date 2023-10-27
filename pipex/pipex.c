/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:28:23 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/08 16:05:54 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_execchild1(int *p, int fd1, char **av, char **env)
{
	char	**cmdarg1;

	cmdarg1 = ft_split(av[2], ' ');
	dup2(fd1, STDIN_FILENO);
	dup2(p[1], STDOUT_FILENO);
	close(p[0]);
	close(fd1);
	if (access(cmdarg1[0], F_OK) == 0)
		execve (cmdarg1[0], cmdarg1, env);
	else
	{
		execve(ft_path(cmdarg1[0], env), cmdarg1, env);
		perror("Error:");
		exit(1);
	}
}

void	ft_execchild2(int *p, int fd2, char **av, char **env)
{
	char	**cmdarg2;

	cmdarg2 = ft_split(av[3], ' ');
	dup2(p[0], STDIN_FILENO);
	dup2(fd2, STDOUT_FILENO);
	close(p[1]);
	close(fd2);
	if (access(cmdarg2[0], F_OK) == 0)
		execve(cmdarg2[0], cmdarg2, env);
	else
	{
		execve(ft_path(cmdarg2[0], env), cmdarg2, env);
		perror("Error:");
		exit(1);
	}	
}

void	pipex(int fd1, int fd2, char **av, char **env)
{
	int		p[2];
	pid_t	childp;

	if (pipe(p) == -1)
	{
		perror("error from pipe:");
		exit(1);
	}
	childp = fork();
	if (childp == -1)
	{
		perror("error from fork");
		exit(1);
	}
	if (childp == 0)
		ft_execchild1(p, fd1, av, env);
	pipex2(p, fd2, av, env);
}

void	pipex2(int *p, int fd2, char **av, char **env)
{
	pid_t	childp2;

	childp2 = fork();
	if (childp2 == -1)
	{
		perror("error from fork");
		exit(1);
	}
	if (childp2 == 0)
		ft_execchild2(p, fd2, av, env);
	close(p[0]);
	close(p[1]);
}

int	main(int ac, char **av, char **env)
{
	int	fd1;
	int	fd2;

	if (ac != 5)
	{
		perror("error 5 args");
		exit(0);
	}
	else
	{
		fd1 = open (av[1], O_RDONLY, 0644);
		fd2 = open (av[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
		if (fd1 < 0 || fd2 < 0)
		{
			perror("error fd");
			exit(1);
		}
		pipex(fd1, fd2, av, env);
		waitpid(0, NULL, 0);
		waitpid(0, NULL, 0);
	}
	return (0);
}
