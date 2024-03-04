/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:25:56 by camurill          #+#    #+#             */
/*   Updated: 2024/03/04 12:08:33 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_create(int fd, char	*str)
{
	if (fd <= 0 && (!str || ft_end_file(str) == 1))
		
	read(fd, str, BUFFER_SIZE);
	if (!str)
		return (NULL);
	
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
*/
char	*ft_post_line(char *file)
{
	int 	i;
	char	*post;
	
	i = 0;
	if (!file)
		return (NULL);
	while (BUFFER_SIZE > 0 && file[i] != '\n')
		i++;
	if (file[i] == '\0')
	{
		post = malloc(sizeof(char) * (BUFFER_SIZE + 1);
		if (!post)
			return (NULL);
		ft_join_to_me(post, file);
	}
	else
	{
		post = malloc(sizeof(char) * (i + 1));
		if (!post)
			return (NULL);
		post = ft_join_to_me(post, file);
	}
	free(file);
	return (post);
}


char	*get_next_line(int fd)
{
	static char	string = NULL;
	char		*next_line;
	int			i;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &next_line, O_RDONLY) < 0)
		return (NULL);
	ft_create(fd, &string); //file size
	if (string ==  NULL)
		return (NULL);
	next_line = get_post_line(string);
	//I need a funtion that clear or free
	return (string);
}

int main (void)
{
	int fd = open("test.txt", O_RDONLY);
	char	lectura = ft_get_next_line(fd);

	write(1, lectura, 5);
	return (0);
}