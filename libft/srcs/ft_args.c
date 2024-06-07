/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:39:18 by rdias-ba          #+#    #+#             */
/*   Updated: 2023/02/08 10:40:46 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	arg_c(va_list arg, t_len *len)
{
	int		c;

	c = va_arg(arg, int);
	ft_putchr(c + 0);
	len->total++;
}

void	arg_s(va_list arg, t_len *len)
{
	char	*s;

	s = va_arg(arg, char *);
	if (!s)
	{
		write(1, "(null)", 6);
		len->total += 6;
		return ;
	}
	ft_putstr(s);
	len->total += ft_strlen(s);
}

void	arg_d(int d, t_len *len)
{
	if (d == -2147483648)
	{
		write (1, "-2147483648", 11);
		len->total += 11;
		return ;
	}
	else if (d < 0)
	{
		d *= -1;
		ft_putchr('-');
		len->total++;
	}
	if (d >= 10)
	{
		arg_d(d / 10, len);
		arg_d(d % 10, len);
	}
	else if (d <= 9)
	{
		ft_putchr(d + '0');
		len->total++;
	}
}

void	arg_u(unsigned int u, t_len *len)
{
	if (u >= 10)
	{
		arg_u(u / 10, len);
		arg_u(u % 10, len);
	}
	else if (u <= 9)
	{
		ft_putchr(u + '0');
		len->total++;
	}
}

void	arg_x_lower(unsigned long long x, t_len *len)
{
	char	*tab;

	tab = "0123456789abcdef";
	if (x >= 16)
	{
		arg_x_lower(x / 16, len);
		arg_x_lower(x % 16, len);
	}
	else if (x <= 16)
	{
		ft_putchr(tab[x]);
		len->total++;
	}
}
