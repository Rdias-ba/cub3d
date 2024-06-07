/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:53:36 by rdias-ba          #+#    #+#             */
/*   Updated: 2022/11/18 15:45:03 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	int a;
	a = 112;

	if (ft_isalpha(a) == 1)
		printf("%s\n", "l'entier est une lettre de l'alphabet");
	else
		printf("%s\n", "l'entier n'est pas une lettre de l'alphabet");
	return 0;
}
*/
