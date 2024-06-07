/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 04:37:03 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/05/31 16:34:00 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef FD_SIZE
#  define FD_SIZE 65535
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include "libft.h"

char	*get_next_line(int fd);

#endif