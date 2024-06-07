/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 04:05:55 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/05/31 16:37:21 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_dup(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	while (str[i])
		i++;
	dup = malloc(sizeof(char) * i + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*get_next_line(int fd)
{
	int		i;
	int		ret;
	char	c;
	char	buff[7000000];

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ret = read(fd, &c, 1);
	while (ret > 0)
	{
		buff[i++] = c;
		if (c == '\n')
			break ;
		ret = read(fd, &c, 1);
	}
	if (ret <= 0 && i == 0)
		return (NULL);
	buff[i] = '\0';
	return (ft_dup(buff));
}
/*
int	main(void)
{
	int	fd;
	char *line = NULL;
	int i = 0;
	fd = open("test", O_RDONLY);
	if (fd == -1)
	{
		printf("%s", "open() failed\n");
		return (-1);
	}
	while (i < 10)
	{
		printf("%s", "\n ///// \n");
		line = get_next_line(fd);
		printf("%s", line);
		i++;
	}
	if (close(fd) == -1)
	{
		printf("%s", "close() failed\n");
		return (-1);
	}
	return (0);
}
*/
