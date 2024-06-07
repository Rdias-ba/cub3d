/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:08:52 by rdias-ba          #+#    #+#             */
/*   Updated: 2022/11/26 23:50:52 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*rdest;

	if (!dest)
		return (NULL);
	rdest = dest;
	while (n)
	{
		*rdest = *(char *)src;
		src++;
		rdest++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Salut";
	char dest[] = "Bonsoir";
	size_t n = 3;
	
	printf("%s\n", dest);
	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
	return 0;
}
*/
