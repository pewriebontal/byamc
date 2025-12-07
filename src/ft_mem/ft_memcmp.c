/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:31:42 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/31 00:58:37 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <kyamc/kyamc.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while ((n > i) && (p1[i] == p2[i]))
		i++;
	if (i == n)
		return (0);
	return (p1[i] - p2[i]);
}
