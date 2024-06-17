/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhan <mhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:01:43 by mhan              #+#    #+#             */
/*   Updated: 2024/06/17 20:13:57 by mhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_right_line(char *line)
{
	char	*str;
	size_t	i;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\0')
		return (NULL);
	str = ft_substr(line, i + 1, ft_strlen(line) - (i + 1));
	if (!str)
		return (NULL);
	if (*str == '\0')
	{
		free(str);
		return (NULL);
	}
	line[i + 1] = '\0';
	return (str);
}

char	*ft_read_fd(int fd, char *stash, char *buf)
{
	char	*tmp;
	int		read_bytes;

	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(stash);
			stash = NULL;
			return (NULL);
		}
		if (read_bytes == 0)
			return (stash);
		buf[read_bytes] = '\0';
		if (!stash)
			stash = ft_strdup("");
		tmp = stash;
		stash = ft_strjoin(tmp, buf);
		free(tmp);
		if (ft_strchr(buf, '\n'))
			return (stash);
	}
	return (stash);
}

char	*initialize_buf(int fd, char **stash)
{
	char	*buf;

	if (fd < 0 || BUFFER_SIZE < 0)
	{
		if (*stash)
		{
			free(stash);
			*stash = NULL;
		}
		return (NULL);
	}
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf || read(fd, buf, 0) < 0)
	{
		if (*stash)
		{
			free(*stash);
			*stash = NULL;
		}
		free(buf);
		return (NULL);
	}
	return (buf);
}

char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	char		*line;
	char		*buf;
	char		*tmp;

	buf = initialize_buf(fd, &stash);
	if (!buf)
		return (NULL);
	line = ft_read_fd(fd, stash, buf);
	free(buf);
	if (!line)
		return (NULL);
	stash = get_right_line(line);
	tmp = ft_strdup(line);
	free(line);
	return (tmp);
}
