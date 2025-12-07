/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:28:17 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/31 01:23:43 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <kyamc/kyamc.h>

char	*ft_strchr(const char *s, int c)
{
	char	to_find;

	to_find = (char)c;
	while (*s != to_find)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
