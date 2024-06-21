/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:05:38 by mkhaing           #+#    #+#             */
/*   Updated: 2024/06/21 20:06:19 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>

char	*ft_strndup(char const *src, size_t n)
{
	char	*dest;
	size_t	len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	if (n < len)
		len = n;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, src, len);
	dest[len] = '\0';
	return (dest);
}
