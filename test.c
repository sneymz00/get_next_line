/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:41:57 by camurill          #+#    #+#             */
/*   Updated: 2024/02/29 18:42:18 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/*
	Tener en cuenta como se lee los archivos, primero hay que abrirlos y luego analizar
	la lectura funciona a partir de bits, y tenemos que indicar el numero de bits que hay que leer
	por ultimo, debemos cerrar el archivo
*/


int	main(void)
{
	int		fd;
	char	lectura[10];
	int		i = 0;

	fd = open("test.txt", O_RDONLY);

	read(fd, lectura, 5);
	lectura[5] = '\0';
	printf("%s\n", lectura);
	read(fd, lectura, 3);
	lectura[3] = '\0';
	printf("%s\n", lectura);
/*	while (lectura[i])
	{
		lectura[i] = fd[i];
		i++;
	}*/
	close(fd);
}