/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhan <mhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:02:56 by mhan              #+#    #+#             */
/*   Updated: 2024/06/07 15:49:37 by mhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_line_len(const char *str)
{
	size_t	i;
	
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

char	*get_buffer(int fd)
{
	char	*buf;

	if (fd == - 1)
		return (NULL);
	buf = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	read(fd, buf, BUFFER_SIZE);
	return (buf);
}

int	ft_is_line(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		i;
	int		s_len;

	s_len = ft_strlen(s1);
	dst = malloc(sizeof(char) * (s_len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*get_line(int fd)
{
	static int	malloc_size;
	static char	*line;
	char	*buf;
	
	buf = get_buffer(fd);
	while (ft_is_line(buf) != 1)
	{
		
	}
}