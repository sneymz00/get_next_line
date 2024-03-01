/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:26:42 by camurill          #+#    #+#             */
/*   Updated: 2024/03/01 13:53:45 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

#ifdef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

int		ft_read(int fd, static char *buffer);
int		ft_strlen(char *str);
char	*ft_join_to_me(char *line, char *step);
char	*get_next_line(int fd);

#endif
