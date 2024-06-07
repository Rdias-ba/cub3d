/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:13:13 by rdias-ba          #+#    #+#             */
/*   Updated: 2023/02/27 18:03:43 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*check_arg(va_list arg, const char *format, t_len *len)
{
	if (*format == 'c')
		arg_c(arg, len);
	else if (*format == 's')
		arg_s(arg, len);
	else if (*format == 'p')
		arg_p(va_arg(arg, unsigned long long), len);
	else if (*format == 'd' || *format == 'i')
		arg_d(va_arg(arg, int), len);
	else if (*format == 'u')
		arg_u(va_arg(arg, unsigned int), len);
	else if (*format == 'x')
		arg_x_lower(va_arg(arg, unsigned int), len);
	else if (*format == 'X')
		arg_x_upper(va_arg(arg, unsigned int), len);
	else if (*format == '%')
		arg_pourcent(len);
	else
		return (NULL);
	return (++format);
}

const char	*write_text(const char *format, t_len *len)
{
	char	*befor_arg;
	int		temp;

	befor_arg = ft_strchr(format, '%');
	if (befor_arg)
		temp = ft_strlen(format) - ft_strlen(befor_arg);
	else
		temp = ft_strlen(format);
	write(1, format, temp);
	len->total += temp;
	while (*format && *format != '%')
		format++;
	return (format);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	t_len	len;

	len.total = 0;
	va_start(arg, format);
	while (*format)
	{
		if (!format)
		{
			write(1, "(null)", 6);
			va_end(arg);
			return (len.total);
		}
		if (*format == '%')
			format = check_arg(arg, format + 1, &len);
		else
			format = write_text(format, &len);
	}
	va_end(arg);
	return (len.total);
}
/*
int	main(void)
{
	char	*str;
	int		i;
	int		a;
	int		*b;
	int		n;

	a = 74484485;
	b = &a;
	i = printf("Salut%x%x%x", 0, a);
	printf("\n%d\n", i);
	return (0);
}
*/