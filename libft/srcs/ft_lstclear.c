/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba@student.42.fr <rdias-ba>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:22:19 by rdias-ba@st       #+#    #+#             */
/*   Updated: 2022/11/21 16:34:58 by rdias-ba@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*stock;

	if (lst && del)
	{
		while (*lst)
		{
			stock = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = stock;
		}
		*lst = NULL;
	}
}
