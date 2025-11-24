/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yeet.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:06:21 by mikhaing          #+#    #+#             */
/*   Updated: 2025/11/24 20:21:37 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Safely frees dynamically allocated memory and
 * sets the pointer to NULL.
 *
 * This function provides a safe way to release dynamically allocated memory.
 * It checks that both the pointer and the memory it points to are not NULL
 * before freeing, and ensures the pointer is set to NULL afterward to avoid
 * dangling pointer issues.
 *
 * @pre
 * - `ptr` must not be NULL.
 * - `*ptr` must point to memory previously allocated with `malloc()`,
 *   `calloc()`, `realloc()`, or equivalent.
 *
 * @post
 * - The memory previously pointed to by `*ptr` is freed.
 * - `*ptr` is set to NULL.
 *
 * @param[in,out] ptr
 * A pointer to the pointer to the memory to be freed. After the call,
 * the pointer it points to will be set to NULL.
 *
 * @return void
 *
 * @note
 * Usage example:
 * ```c
 * int *data = malloc(sizeof(int) * 10);
 * if (data) {
 *     // Use data...
 * }
 * // When done, free the memory safely:
 * yeet((void **)&data);
 * // Now data is NULL and no memory leak occurs.
 * ```
 */
void	yeet(void **ptr)
{
	if (ptr != NULL && *ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
