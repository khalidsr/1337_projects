/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:38:03 by sriyani           #+#    #+#             */
/*   Updated: 2022/03/02 15:26:51 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

void	pipex(int fd1, int fd2, char **av, char **env);
void	pipex2(int *p, int fd2, char **av, char **env);
char	*ft_path(char *av, char **env);
void	ft_free(char **path);
void	ft_execchild2(int *p, int fd2, char **av, char **env);
void	ft_execchild1(int *p, int fd1, char **av, char **env);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
int		ft_len(char const *s, char c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlen(const char *str);

#endif
