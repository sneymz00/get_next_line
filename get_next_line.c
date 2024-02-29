/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:25:56 by camurill          #+#    #+#             */
/*   Updated: 2024/02/29 19:04:47 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char	*ft_read(int fd, int size)
{
	char	letter[size];

	read(fd, letter, size);
	return (letter);
}

char	*ft_pre_line(char *file, int *number)
{
	int		i;
	char	*line;
	i = 0;
	while(file[i] != '\n' || file[i])
	{
		line[i] = file[i];
		i++;
		number++;
	}
	return (line);
}

char	*ft_post_line(char *file, int *number)
{
	int 	i;
	char	*post;
	
	i = 0;
	while (file[i])
	{
		post[i] = file[number];
		number++;
		i++;
	}
	return (post);
}

char	*get_next_line(int fd)
{
	//static char	*buffer;
	char	*pre;
	char	*post;
	char	*readf;
	int		size;
	int		*number;
	//comprobacion adicional
	number = 0;
	size = 0;
	size = ft_read_bytes(fd); //añadir en las funciones utils
	readf = ft_read(fd, size);
	pre = ft_pre_line(readf, &number); //Guardado hasta \n
	post = ft_post_line(readf, &number); //Guerado pre \'
	return (pre);
}

int main (void)
{
	int fd = open("test.txt", O_RDONLY);
	char	lectura = ft_get_next_line(fd);

	write(1, lectura, 5);
	return (0);
}