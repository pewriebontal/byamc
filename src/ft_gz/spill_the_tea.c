/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spill_the_tea.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:08:44 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/30 14:34:18 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/gzdef.h>

int	spill_the_tea(const char *fmt, ...)
{
	va_list	args;
	int		ret;

	va_start(args, fmt);
	ret = ft_vdprintf(1, fmt, args);
	va_end(args);
	return (ret);
}
