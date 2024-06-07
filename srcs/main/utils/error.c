/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:20:38 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/05/24 15:42:49 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	print_error(char *str, int exit_status)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(str, 2);
	return (exit_status);
}

int	check_extension(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (len <= 4)
		return (0);
	if (str[len - 1] != 'b' || str[len - 2] != 'u'
		|| str[len - 3] != 'c' || str[len - 4] != '.')
		return (0);
	return (1);
}
