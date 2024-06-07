/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:32:29 by rdias-ba          #+#    #+#             */
/*   Updated: 2022/11/24 23:26:53 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == (size_t)-1 || size == (size_t)-1)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
/*
int	main(void)
{
	printf("%p\n", ft_calloc(0, sizeof(char)));
	return (0);
}
*/