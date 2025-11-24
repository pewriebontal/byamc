/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 20:33:42 by mikhaing          #+#    #+#             */
/*   Updated: 2025/11/24 20:19:49 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_fr;
	const unsigned char	*src_fr;

	if (src == NULL && dest == NULL)
		return (NULL);
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
