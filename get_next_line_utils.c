/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhan <mhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:02:56 by mhan              #+#    #+#             */
/*   Updated: 2024/06/06 14:32:35 by mhan             ###   ########.fr       */
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

char	*get_line(int fd)
{}