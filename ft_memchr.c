/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:40:41 by mikhaing          #+#    #+#             */
/*   Updated: 2025/11/24 22:06:01 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		uc;

	str = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*str == uc)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
