/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:01:43 by mhan              #+#    #+#             */
/*   Updated: 2024/06/06 13:51:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
-on met ce qu'on a lu dans buf dans tmp
-on cherche '\n' dans tmp
-on doit stocker notre ligne qqpart
-on doit faire une fonction qui permet de stockers les parties de notre ligne
-utilise une variable static pour l'allocation de memoire de la ligne finale a retourner
*/

char	*get_next_line(int fd)
{
	char	*buf;
	char	*tmp;
	ssize_t	read_bytes;

	buf = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	read_bytes = read(fd, buf, BUFFER_SIZE);
	if (fd == -1 || read_bytes == -1 || read_bytes == 0)
		return (NULL);
}