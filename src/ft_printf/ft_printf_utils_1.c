/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:58:16 by mkhaing           #+#    #+#             */
/*   Updated: 2024/06/23 16:26:18 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>
#include <byamc/ft_printf.h>

int	handle_int(int n, int fd)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (n == 0)
		print_length += write(fd, "0", 1);
	else
	{
		num = ft_itoa(n);
		print_length += handle_string(num, fd);
		free(num);
	}
	return (print_length);
}

int	handle_unsigned(unsigned int n, int fd)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (n == 0)
		print_length += write(fd, "0", 1);
	else
	{
		num = ft_uitoa(n);
		print_length += handle_string(num, fd);
		free(num);
	}
	return (print_length);
}
