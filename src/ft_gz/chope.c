/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chope.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:58:27 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/31 03:48:32 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/gzdef.h>

void	*chope(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr)
		ft_memset(ptr, 0, size);
	return (ptr);
}

void	reset_the_vibe(void *ptr, size_t size)
{
	ft_bzero(ptr, size);
}

void	*secure_the_bag(size_t size)
{
	return (chope(size));
}
