/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:37:51 by mkhaing           #+#    #+#             */
/*   Updated: 2024/03/13 21:08:33 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_fr;
	unsigned char	*src_fr;

	if (dest == src || n == 0)
		return (dest);
	dest_fr = (unsigned char *)dest;
	src_fr = (unsigned char *)src;
	if (dest_fr < src_fr)
	{
		while (n--)
		{
			*dest_fr++ = *src_fr++;
		}
	}
	else
	{
		dest_fr += n;
		src_fr += n;
		while (n--)
		{
			*--dest_fr = *--src_fr;
		}
	}
	return (dest);
}
