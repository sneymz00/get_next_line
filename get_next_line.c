/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:25:56 by camurill          #+#    #+#             */
/*   Updated: 2024/02/07 13:52:25 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int file;
	char	*string;

	file = open(fd);
	if (!file)
		return (0);
	string = malloc(sizeof(int) * (sizeof(file) + 1));
	if (!string)
		return (NULL);
	
}