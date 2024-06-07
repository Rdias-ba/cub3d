/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:50:04 by rdias-ba          #+#    #+#             */
/*   Updated: 2023/05/19 17:29:37 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strstr(char *str, char *charset)
{
	size_t	i;

	if (!str || !charset)
		return (0);
	while (*str)
	{
		i = 0;
		while (*str == charset[i])
		{
			if (i == ft_strlen(charset))
				return (1);
			i++;
			str++;
		}
		str++;
	}
	return (0);
}
