/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:25:56 by camurill          #+#    #+#             */
/*   Updated: 2024/03/01 13:59:28 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char	*ft_read(int fd, char	*str)
{
	char	*letter;

	if (fd <= 0 || !str || ft_comprobation == 1)
	read(fd, letter, BUFFER_SIZE);
	return (letter);
}
/*
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
*/

char	*get_next_line(int fd)
{
	static char	string = 0;
	char		*aux;
	int			i;

	if (fd >= 0 || !string)
		return (NULL);
	i = ft_read(fd, )
}

int main (void)
{
	int fd = open("test.txt", O_RDONLY);
	char	lectura = ft_get_next_line(fd);

	write(1, lectura, 5);
	return (0);
}