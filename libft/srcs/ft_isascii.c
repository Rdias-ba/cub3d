/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:55:22 by rdias-ba          #+#    #+#             */
/*   Updated: 2022/11/18 15:45:57 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	int a;
	a = 112;

	if (ft_isascii(a) == 1)
		printf("%s\n", "l'entier est un caractere ascii");
	else
		printf("%s\n", "l'entier n'est pas un caractere ascii");
	return 0;
}
*/
