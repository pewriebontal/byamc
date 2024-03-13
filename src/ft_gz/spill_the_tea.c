/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spill_the_tea.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:08:44 by mkhaing           #+#    #+#             */
/*   Updated: 2024/03/14 21:17:50 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/gzdef.h>

int	spill_the_tea(const char *fmt, ...)
{
	va_list	args;
	int		ret;

	va_start(args, fmt);
	ret = ft_printf(fmt, args);
	va_end(args);
	return (ret);
}
