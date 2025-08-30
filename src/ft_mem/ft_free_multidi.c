/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_multidi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:02:39 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/30 14:03:40 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>
#include <byamc/gzdef.h>

/**
 * @brief Recursively frees a dynamically allocated multi-dimensional array.
 *
 * This function traverses and frees memory for arrays of arbitrary dimensions,
 * releasing all nested sub-arrays before freeing the outer array. The function
 * uses recursion, decreasing the `dimensions` count at each depth until it
 * reaches the base case of a single-dimensional array.
 *
 * @pre
 * - `array` must be a valid pointer to a dynamically allocated block of memory
 *   allocated with `malloc()`, `calloc()`, or `realloc()` (or equivalent).
 * - `dimensions` must be >= 1.
 * - `dim_sizes` must point to an array of `size_t` containing the size of each
 *   dimension, with `dim_sizes[0]` representing the number of elements in the
 *   first dimension, and so on.
 *
 * @post
 * - All memory associated with the multi-dimensional array is freed.
 * - No dangling pointers are returned; caller must set the original pointer
 *   to NULL after calling this function if needed.
 *
 * @param[in] array
 * Pointer to the multi-dimensional array to free. It is cast to `(void **)`
 * internally for recursive traversal.
 *
 * @param[in] dimensions
 * The total number of dimensions in the array (must be >= 1).
 *
 * @param[in] dim_sizes
 * An array containing the size (number of elements) for each dimension.
 *
 * @return void
 *
 * @note
 * ```c
 * const int NUM_DIMS = 3;
 * size_t sizes[NUM_DIMS] = {5, 10, 2};
 * int*** my_3d_array;
 *
 * // my_3d_array is allocated here, for instance with a
 * // corresponding allocate_multidim_array function.
 *
 * // ... use the array ...
 *
 * // When done, free the array using the same dimension info.
 * free_multidim_array(my_3d_array, NUM_DIMS, sizes);
 * ```
 */
void	free_multidim_array(void *array, int dimensions,
		const size_t *dim_sizes)
{
	void	**ptr_array;
	size_t	current_dim_size;
	size_t	i;

	if (NULL == array)
		return ;
	if (dimensions == 1)
	{
		yeet(array);
		return ;
	}
	ptr_array = (void **)array;
	current_dim_size = dim_sizes[0];
	i = 0;
	while (i < current_dim_size)
	{
		free_multidim_array(ptr_array[i], dimensions - 1, dim_sizes + 1);
		i++;
	}
	yeet(array);
}
