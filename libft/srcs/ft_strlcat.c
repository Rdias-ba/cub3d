/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:33:37 by rdias-ba          #+#    #+#             */
/*   Updated: 2022/11/18 15:56:49 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destl;

	if (!dest || !src)
		return (0);
	destl = 0;
	i = 0;
	while (dest[destl] && destl < size)
		destl++;
	i = destl;
	while (src[i - destl] && size > 0 && i < size - 1)
	{
		dest[i] = src[i - destl];
		i++;
	}
	if (destl < size)
		dest[i] = '\0';
	return (ft_strlen(src) + destl);
}
/*
int     main ()
{
	char    dest[20] = "Salut";
	char    src[20] = " Mec";
	unsigned int n;

	n = 9;
	printf("%ld", ft_strlcat(dest, src, n));
	printf("%s\n", dest);
	return 0;
}
*/
