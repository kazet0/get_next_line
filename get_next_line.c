/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhan <mhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:01:43 by mhan              #+#    #+#             */
/*   Updated: 2024/06/09 18:08:57 by mhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(const char *str)
{
	int	i;
	char	*line;

	i= 0;
	while (str[i] != '\n')
		i++;
	line = malloc (i + 1);
	i = 0;
	while (str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	return (line);
}

int	search_new_line(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*line;
	static char *next_line;
	char	*tmp;

	next_line = ft_strchr(/*mettre la static dans le seul cas ou on a une ligne entiere*/);
}
