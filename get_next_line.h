/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:26:42 by camurill          #+#    #+#             */
/*   Updated: 2024/02/07 13:30:51 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef GET
# define GET

# include <stdlib.h>
# include <unistd.h>

#ifdef BUFFER_SIZE
#define BUFFER_SIZE=42
#endif

char	*get_next_line(int fd);

#endif
