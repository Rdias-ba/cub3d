/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:59:12 by rdias-ba          #+#    #+#             */
/*   Updated: 2022/11/21 00:26:22 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n - 1 > 0 && str1[i] == str2[i])
	{
		i++;
		n--;
	}
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	char s1[] = "Salut";
	char s2[] = "Satut";
	printf("%d\n", ft_memcmp(s1, s2, 0));

	return (0);
}
*/
