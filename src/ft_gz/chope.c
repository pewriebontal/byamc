/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chope.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:58:27 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/15 03:37:28 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/gzdef.h>

void	*chope(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr)
		memset(ptr, 0, size);
	return (ptr);
}
