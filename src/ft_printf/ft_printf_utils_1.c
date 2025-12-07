/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:58:16 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/30 16:58:09 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <kyamc/kyamc.h>
#include <kyamc/ft_printf.h>

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
		yeet((void **)&num);
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
		yeet((void **)&num);
	}
	return (print_length);
}
