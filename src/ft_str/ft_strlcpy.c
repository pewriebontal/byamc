/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:26:48 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/31 00:54:29 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	strlen;

	strlen = 0;
	while (src && *src != '\0')
	{
		if (size > 1)
		{
			*dst = *src;
			dst++;
			size--;
		}
		src++;
		strlen++;
	}
	if (size > 0)
		*dst = '\0';
	return (strlen);
}
