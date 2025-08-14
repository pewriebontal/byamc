/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:33:42 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/15 03:35:36 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_fr;
	unsigned char	*src_fr;

	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}
	dest_fr = (unsigned char *)dest;
	src_fr = (unsigned char *)src;
	while (n > 0)
	{
		*dest_fr = *src_fr;
		dest_fr++;
		src_fr++;
		n--;
	}
	return (dest);
}
