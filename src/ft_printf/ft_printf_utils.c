/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:53:45 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/30 16:31:01 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <kyamc/kyamc.h>
#include <kyamc/ft_printf.h>

int	handle_char(int c, int fd)
{
	ft_putchar_fd(c, fd);
	return (1);
}

int	handle_string(char *str, int fd)
{
	int	length_printed;

	length_printed = 0;
	if (!str)
		str = "(null)";
	length_printed = ft_strlen(str);
	ft_putstr_fd(str, fd);
	return (length_printed);
}

int	handle_ptr(unsigned long long ptr, int fd)
{
	int	length_printed;

	length_printed = 0;
	if (ptr == 0)
		length_printed = handle_string(NULLPTR, fd);
	else
	{
		ft_putstr_fd("0x", fd);
		length_printed += 2;
		length_printed += ft_putnbr_base_fd(ptr, "0123456789abcdef", fd);
	}
	return (length_printed);
}

int	handle_hex(unsigned int n, char fmt, int fd)
{
	int	length_printed;

	length_printed = 0;
	if (fmt == 'x')
		length_printed += (ft_putnbr_base_fd(n, "0123456789abcdef", fd));
	else
		length_printed += (ft_putnbr_base_fd(n, "0123456789ABCDEF", fd));
	return (length_printed);
}

int	handle_percent(int fd)
{
	ft_putchar_fd('%', fd);
	return (1);
}
