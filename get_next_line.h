/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:26:42 by camurill          #+#    #+#             */
/*   Updated: 2024/03/05 15:59:38 by camurill         ###   ########.fr       */
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

char	*ft_read_line(int fd, char	*line);
char	*ft_line(char *file);
char	*ft_rest_line(char *file);
char	*get_next_line(int fd);
char	*ft_join_to_me(char *line, char *step, int size);
int		ft_strlen(char *str);
int		ft_end_file(char *str);
int		ft_find_end(char *str);

#endif
