/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba@student.42.fr <rdias-ba>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:27:54 by rdias-ba@st       #+#    #+#             */
/*   Updated: 2022/11/21 15:31:36 by rdias-ba@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{	
	t_list	*s1;
	t_list	*s2;
	t_list	*s3;

	if(!(s1 = malloc(sizeof(t_list))))
		return (0);
	if(!(s2 = malloc(sizeof(t_list))))
		return (0);
	if(!(s3 = malloc(sizeof(t_list))))
		return (0);
	s3->content = "Salut";
	s1->next = s2;
	s2->next = s3;
	s3->next = NULL;

	t_list *last = ft_lstlast(s1);
	printf("%s", (char *)last->content);
	return (0);
}
*/