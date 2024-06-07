/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba@student.42.fr <rdias-ba>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:33:05 by rdias-ba@st       #+#    #+#             */
/*   Updated: 2022/11/21 17:29:45 by rdias-ba@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		end = ft_lstlast(*lst);
		end->next = new;
	}
}
/*
int	main(void)
{	
	t_list	*s1;
	t_list	*s2;
	t_list	*s3;
	t_list	*last;

	if(!(s1 = malloc(sizeof(t_list))))
		return (0);
	if(!(s2 = malloc(sizeof(t_list))))
		return (0);
	if(!(s3 = malloc(sizeof(t_list))))
		return (0);
	if(!(last = malloc(sizeof(t_list))))
		return (0);
	s3->content = "Salut";
	last->content = "Mec";
	s1->next = s2;
	s2->next = s3;
	s3->next = NULL;

	ft_lstadd_back(&s3->next,last);
	last = ft_lstlast(s1);
	printf("%s", (char *)last->content);
	return (0);
}
*/
