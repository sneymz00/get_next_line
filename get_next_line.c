/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:25:56 by camurill          #+#    #+#             */
/*   Updated: 2024/03/05 18:03:20 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_line(int fd, char	*line)
{
	char	*letter;
	int		size;

	if (ft_end_file(line) == 1)
		return (line);
	letter = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!letter)
		return (free(line), NULL);
	size = read(fd, letter, BUFFER_SIZE);
	if (!letter)
		return (free(line), free(letter), NULL);
	letter[size] = '\0';
	line = ft_join_to_me(letter, line, size);
	if (!line)
		return (free(line), NULL);
	if (ft_end_file(letter) == 0)
		line = ft_read_line(fd, line);
	free(letter);
	return (line);
}

char	*ft_line(char *file)
{
	char	*save_line;
	int		i;

	if (!file)
		return (free(file), NULL);
	i = 0;
	save_line = malloc(sizeof(char) * (ft_find_end(file) + 1));
	while (file[i++] && ft_end_file(file) == 0)
		save_line[i] = file[i];
	save_line[i] = '\0';
	return (save_line);
}

char	*ft_rest_line(char *file)
{
	char	*rest_line;
	int		i;
	int		j;

	if (!file)
		return (free(file), NULL);
	i = 0;
	while (ft_end_file(file) == 1 && file[i])
		i++;
	if (file[i] != '\n')
		i++;
	j = 0;
	rest_line = malloc(sizeof(char) * (ft_find_end(file) + 1));
	while (file[i])
		rest_line[j++] = file[i++];
	rest_line[j] = '\0';
	free(file);
	return (rest_line);
}

char	*get_next_line(int fd)
{
	static char	*save = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &save, O_RDONLY) < 0)
		return (NULL);
	save = ft_read_line(fd, save);
	if (!save)
		return (NULL);
	line = ft_line(save);
	save = ft_rest_line(save);
	return (save);
}
/*
#include <stdio.h>

int main (void)
{
	int fd = open("test.txt", O_RDONLY);
	int i = 0;

	while(i < 1)
	{
		printf("Line: %s", get_next_line(fd));
		i++;
	}
	close(fd);
	return (0);
}

*/
