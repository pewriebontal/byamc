/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:53:36 by mkhaing           #+#    #+#             */
/*   Updated: 2023/11/02 01:38:17 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	do_print(va_list list_args, const char fmt)
{
	int	length_printed;

	length_printed = 0;
	if (fmt == 'c')
		length_printed += handle_char(va_arg(list_args, int));
	else if (fmt == 's')
		length_printed += handle_string(va_arg(list_args, char *));
	else if (fmt == 'p')
		length_printed += handle_ptr(va_arg(list_args, unsigned long long));
	else if (fmt == 'd' || fmt == 'i')
		length_printed += handle_int(va_arg(list_args, int));
	else if (fmt == 'u')
		length_printed += handle_unsigned(va_arg(list_args, unsigned int));
	else if (fmt == 'x' || fmt == 'X')
		length_printed += handle_hex(va_arg(list_args, unsigned int), fmt);
	else if (fmt == '%')
		length_printed += handle_percent();
	return (length_printed);
}

int	ft_printf(const char *fmt, ...)
{
	int		num_char_printed;
	int		i;
	va_list	list_args;

	num_char_printed = 0;
	i = 0;
	va_start(list_args, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			num_char_printed += do_print(list_args, fmt[i + 1]);
			i++;
		}
		else
			num_char_printed += handle_char(fmt[i]);
		i++;
	}
	va_end(list_args);
	return (num_char_printed);
}
