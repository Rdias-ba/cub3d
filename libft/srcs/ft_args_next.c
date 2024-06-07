/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_next.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:52:05 by rdias-ba          #+#    #+#             */
/*   Updated: 2023/02/01 15:02:34 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	arg_x_upper(unsigned int x, t_len *len)
{
	char	*tab;

	tab = "0123456789ABCDEF";
	if (x >= 16)
	{
		arg_x_upper(x / 16, len);
		arg_x_upper(x % 16, len);
	}
	else if (x <= 16)
	{
		ft_putchr(tab[x]);
		len->total++;
	}
}

void	arg_pourcent(t_len *len)
{
	ft_putchr('%');
	len->total++;
}

void	arg_p(unsigned long long p, t_len *len)
{
	if (p == 0)
	{
		len->total += write(1, "(nil)", 5);
		return ;
	}
	len->total += write(1, "0x", 2);
	arg_x_lower(p, len);
}
