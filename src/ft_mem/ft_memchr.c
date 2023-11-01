/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:40:41 by mkhaing           #+#    #+#             */
/*   Updated: 2023/11/02 01:37:26 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*str;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*str == chr)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
