/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:26:42 by camurill          #+#    #+#             */
/*   Updated: 2024/03/04 16:03:45 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_read(int fd, static char *buffer);
int		ft_end_file(char *str);
int		ft_strlen(char *str);
char	*ft_join_to_me(char *line, char *step, int size);
char	*get_next_line(int fd);
void	*ft_create(int fd, char	*str)

#endif
