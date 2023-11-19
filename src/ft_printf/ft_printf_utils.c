/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:53:45 by mkhaing           #+#    #+#             */
/*   Updated: 2023/11/02 01:38:13 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"
#include "../../libft.h"

int	handle_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	handle_string(char *str)
{
	int	length_printed;

	length_printed = 0;
	if (!str)
		str = "(null)";
	length_printed = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (length_printed);
}

int	handle_ptr(unsigned long long ptr)
{
	int	length_printed;

	length_printed = 0;
	if (ptr == 0)
	{
		length_printed = handle_string(NULLPTR);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		length_printed += 2;
		length_printed += ft_putnbr_base(ptr, "0123456789abcdef");
	}
	return (length_printed);
}

int	handle_hex(unsigned int n, char fmt)
{
	int	length_printed;

	length_printed = 0;
	if (fmt == 'x')
	{
		length_printed += (ft_putnbr_base(n, "0123456789abcdef"));
	}
	else
	{
		length_printed += (ft_putnbr_base(n, "0123456789ABCDEF"));
	}
	return (length_printed);
}

int	handle_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
