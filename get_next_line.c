/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:25:56 by camurill          #+#    #+#             */
/*   Updated: 2024/02/29 18:37:14 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	ft_read(int fd, char *buffer)
{
	int		input;
	char	letter;

	input = open("test.txt", O_RDONLY);
	read(fd, buffer);
	if (!input)
		return (0);
	write(1, input, 5);
	
	return (0);
}

char	*ft_join_to_me()

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*pre;
	char		*post;
	int			read;
	//comprobacion adicional
	read = ft_read(fd, buffer);
	pre = ft_pre_line(read); //Guardado hasta \n
	post = ft_post_line(read); //Guerado pre \'n
	//write(1, )
	//buffer = ft_next(buffer);
	return (line);
}
