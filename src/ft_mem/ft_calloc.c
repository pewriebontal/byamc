/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 03:18:48 by mikhaing          #+#    #+#             */
/*   Updated: 2025/11/21 07:17:22 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <kyamc/kyamc.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count > 2147483647 / size)
		return (NULL);
	tmp = malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
