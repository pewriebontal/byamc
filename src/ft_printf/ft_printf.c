/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:53:36 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/15 03:35:36 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/ft_printf.h>

int	do_print(va_list list_args, const char fmt, int fd)
{
	int	length_printed;

	length_printed = 0;
	if (fmt == 'c')
		length_printed += handle_char(va_arg(list_args, int), fd);
	else if (fmt == 's')
		length_printed += handle_string(va_arg(list_args, char *), fd);
	else if (fmt == 'p')
		length_printed += handle_ptr(va_arg(list_args, unsigned long long), fd);
	else if (fmt == 'd' || fmt == 'i')
		length_printed += handle_int(va_arg(list_args, int), fd);
	else if (fmt == 'u')
		length_printed += handle_unsigned(va_arg(list_args, unsigned int), fd);
	else if (fmt == 'x' || fmt == 'X')
		length_printed += handle_hex(va_arg(list_args, unsigned int), fmt, fd);
	else if (fmt == '%')
		length_printed += handle_percent(fd);
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
			num_char_printed += do_print(list_args, fmt[i + 1], 1);
			i++;
		}
		else
			num_char_printed += handle_char(fmt[i], 1);
		i++;
	}
	va_end(list_args);
	return (num_char_printed);
}

int	ft_dprintf(int fd, const char *fmt, ...)
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
			num_char_printed += do_print(list_args, fmt[i + 1], fd);
			i++;
		}
		else
			num_char_printed += handle_char(fmt[i], fd);
		i++;
	}
	va_end(list_args);
	return (num_char_printed);
}
