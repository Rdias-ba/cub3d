/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:26:00 by rdias-ba          #+#    #+#             */
/*   Updated: 2023/02/27 18:04:43 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

typedef struct s_len
{
	int	total;
}				t_len;

int		ft_printf(const char *format, ...);
void	arg_c(va_list arg, t_len *len);
void	arg_s(va_list arg, t_len *len);
void	arg_p(unsigned long long p, t_len *len);
void	arg_d(int d, t_len *len);
void	arg_u(unsigned int u, t_len *len);
void	arg_x_lower(unsigned long long x, t_len *len);
void	arg_x_upper(unsigned int x, t_len *len);
void	arg_pourcent(t_len *len);

#endif