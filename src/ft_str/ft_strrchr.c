/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:28:17 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/31 01:28:31 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <kyamc/kyamc.h>

char	*ft_strrchr(const char *s, int c)
{
	char		*last_occ;
	const char	to_find = (const char)c;

	last_occ = NULL;
	while (*s)
	{
		if (*s == to_find)
			last_occ = (char *)s;
		s++;
	}
	if (to_find == '\0')
		return ((char *)s);
	return (last_occ);
}
