/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:31:42 by mkhaing           #+#    #+#             */
/*   Updated: 2024/06/27 01:53:56 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while ((n > i) && (p1[i] == p2[i]))
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (p1[i] - p2[i]);
}
