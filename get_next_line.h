/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhan <mhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:14:36 by mhan              #+#    #+#             */
/*   Updated: 2024/06/07 15:48:47 by mhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 8
#endif

#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd);
size_t	ft_line_len(const char *str);
char	*get_buffer(int fd);
int	ft_is_line(char c);
char	*ft_strdup(const char *s1);

#endif