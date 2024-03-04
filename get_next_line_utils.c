/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:44:36 by camurill          #+#    #+#             */
/*   Updated: 2024/03/04 12:08:37 by camurill         ###   ########.fr       */
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

char	*ft_join_to_me(char *line, char *step)
{
	char	*alpha;
	int		i[1];

	if (!line || !step)
		return (0);
	alpha = (char *)malloc(sizeof(char) * (strlen(line) + strlen(step) + 1));
	if (!alpha)
		return (0);
	i[0] = 0;
	while (line[i[0]++])
		alpha[i[0]] = line[i[0]];
	i[1] = 0;
	while (step[i[1]])
		alpha[i[0]++] = step[i[1]++];
	alpha[i[0]] = '\0';
	return (alpha);
}

int	ft_end_file(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
