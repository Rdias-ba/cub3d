/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:14:38 by rdias-ba          #+#    #+#             */
/*   Updated: 2022/11/26 16:14:44 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nblen(long nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	if (nbr == 0)
		i++;
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

static void	fillstr(long nbr, char *str, int nbrlen)
{
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	if (nbr == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	while (nbr > 0)
	{
		nbrlen--;
		str[nbrlen] = (nbr % 10) + '0';
		nbr /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;
	int		nbrlen;

	nbrlen = nblen(n);
	nbr = n;
	str = malloc(sizeof(char) * nbrlen + 1);
	if (!str)
		return (NULL);
	str[nbrlen] = '\0';
	fillstr(nbr, str, nbrlen);
	return (str);
}
/*
int main (void)
{
	int nbr = -2147483648;
	printf("%s\n", ft_itoa(nbr));
	nbr = 0;
	printf("%s\n", ft_itoa(nbr));
	nbr = 2147483647;
	printf("%s\n", ft_itoa(nbr));
}
*/
