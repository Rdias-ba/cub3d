/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:56:59 by rdias-ba          #+#    #+#             */
/*   Updated: 2022/11/18 15:46:36 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	int a;
	a = 48;

	if (ft_isdigit(a) == 1)
		printf("%s\n", "l'entier est un chiffre");
	else
		printf("%s\n", "l'entier n'est pas un chiffre");
	return 0;
}
*/
