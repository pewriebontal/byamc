/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:38:17 by mkhaing           #+#    #+#             */
/*   Updated: 2023/11/19 22:08:04 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strdup(char const *src)
{
	char	*dest;
	int		len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	ft_memcpy(dest, src, len);
	dest[len] = '\0';
	return (dest);
}
