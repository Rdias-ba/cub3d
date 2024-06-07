/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:20:16 by rdias-ba          #+#    #+#             */
/*   Updated: 2022/11/25 02:03:43 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	trimstart;
	size_t	trimend;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	trimstart = 0;
	trimend = ft_strlen(s1);
	while (s1[trimstart] && check_sep(s1[trimstart], set))
		trimstart++;
	while (trimend > trimstart && check_sep(s1[trimend - 1], set))
		trimend--;
	str = malloc(sizeof(char) * (trimend - trimstart + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (trimstart < trimend)
		str[i++] = s1[trimstart++];
	str[i] = 0;
	return (str);
}
/*
int main(void)
{
	char ptr[] = "abcdba";
	char set[] = "acb";
	char *dest = ft_strtrim(ptr, set);
	printf("%s", dest);
	return (0);
}
*/