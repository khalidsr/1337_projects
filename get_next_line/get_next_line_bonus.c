/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:33:28 by sriyani           #+#    #+#             */
/*   Updated: 2021/12/17 10:37:34 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_left(char *ptr)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = 0;
	while (ptr[i] && ptr[i] != '\n')
		i++;
	if (!ptr[i])
	{
		free(ptr);
		return (NULL);
	}
	str = malloc (sizeof(char) * (ft_strlen(ptr) - i + 1));
	if (!str)
	{
		free(ptr);
		return (NULL);
	}
	i++;
	while (ptr[i])
		str[j++] = ptr[i++];
	str[j] = '\0';
	free(ptr);
	return (str);
}

char	*ft_line(char *ptr)
{
	int		i;
	char	*line;

	i = 0;
	while (ptr[i] && ptr[i] != '\n')
		i++;
	if (ptr[i] == '\n')
		line = malloc(sizeof(char) * (i + 2));
	else
		line = malloc (sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (ptr[i] && ptr[i] != '\n')
	{
		line[i] = ptr[i];
		i++;
	}
	if (ptr[i] == '\n')
	{
		line[i] = ptr[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_next(char *ptr, char *buffer, int fd, int save)
{
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	buffer[0] = '\0';
	if (!buffer)
		return (NULL);
	while (save != 0 && !ft_strchr(buffer, '\n'))
	{
		save = read(fd, buffer, BUFFER_SIZE);
		if (save == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[save] = '\0';
		ptr = ft_strjoin(ptr, buffer);
	}
	free(buffer);
	return (ptr);
}

char	*get_next_line(int fd)
{
	int			save;
	char		*buffer;
	char		*line;
	static char	*ptr[OPEN_MAX];

	buffer = NULL;
	save = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (NULL);
	ptr[fd] = get_next(ptr[fd], buffer, fd, save);
	if (!ptr[fd])
	{
		return (NULL);
	}
	if (!ptr[fd][0])
	{
		free(ptr[fd]);
		ptr[fd] = NULL;
		return (NULL);
	}
	line = ft_line(ptr[fd]);
	ptr[fd] = get_left(ptr[fd]);
	return (line);
}
