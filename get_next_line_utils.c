/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:44:36 by camurill          #+#    #+#             */
/*   Updated: 2024/03/05 18:01:42 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_join_to_me(char *line, char *step, int size)
{
	char	*alpha;
	int		i;
	int		j;

	if (!line || !step || size <= 0)
		return (free(line), free(step), NULL);
	if (size > BUFFER_SIZE)
		size = BUFFER_SIZE;
	alpha = (char *)malloc(sizeof(char) * (size + 1));
	if (!alpha)
		return (0);
	i = 0;
	while (line[i++])
		alpha[i] = line[i];
	j = 0;
	while (step[j] != '\0')
		alpha[i++] = step[j++];
	alpha[i] = '\0';
	return (alpha);
}

int	ft_end_file(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	ft_find_end(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i + 1] == '\n')
			return (i);
		i++;
	}
	return (i);
}
