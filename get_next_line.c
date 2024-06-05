/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhan <mhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:01:43 by mhan              #+#    #+#             */
/*   Updated: 2024/06/06 01:25:01 by mhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buf;
	static char	tmp;
	ssize_t	read_bytes;

	buf = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	read_bytes = read(fd, buf, BUFFER_SIZE);
	if (fd == -1 || read_bytes == -1 || read_bytes == 0)
		return (NULL);
}