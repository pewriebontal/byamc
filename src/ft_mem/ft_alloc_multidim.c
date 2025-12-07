/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_multidim.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 04:32:30 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/30 18:28:33 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <kyamc/kyamc.h>
#include <kyamc/gzdef.h>

static void	*cleanup_on_alloc_fail(void **ptr_array, size_t count,
		int dimensions, const size_t *dim_sizes)
{
	size_t	j;

	j = 0;
	while (j < count)
	{
		free_multidim_array(ptr_array[j], dimensions - 1, dim_sizes + 1);
		j++;
	}
	yeet((void **)&ptr_array);
	return (NULL);
}

void	*allocate_multidim_array(int dimensions, const size_t *dim_sizes)
{
	size_t	i;
	void	**ptr_array;

	if (dimensions < 1 || dim_sizes[0] == 0)
		return (NULL);
	if (dimensions == 1)
		return (ft_calloc(dim_sizes[0], sizeof(char)));
	ptr_array = malloc(dim_sizes[0] * sizeof(void *));
	if (ptr_array == NULL)
		return (NULL);
	i = 0;
	while (i < dim_sizes[0])
	{
		ptr_array[i] = allocate_multidim_array(dimensions - 1, dim_sizes + 1);
		if (ptr_array[i] == NULL)
			return (cleanup_on_alloc_fail(ptr_array, i, dimensions, dim_sizes));
		i++;
	}
	return (ptr_array);
}
