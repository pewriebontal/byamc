/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:26:48 by mkhaing           #+#    #+#             */
/*   Updated: 2023/11/19 21:52:56 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

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
	{
		*dst = '\0';
	}
	return (strlen);
}
