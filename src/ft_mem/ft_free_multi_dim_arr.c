/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_multi_dim_arr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:02:39 by mkhaing           #+#    #+#             */
/*   Updated: 2024/05/19 20:18:48 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>

void	ft_free_multi_dimensional_array(void **array, int dimensions)
{
	int	i;
	
	if (dimensions == 1)
	{
		free(array);
		return ;
	}
	i = 0;
	while (array[i] != NULL)
	{
		ft_free_multi_dimensional_array(array[i], dimensions - 1);
		i++;
	}
	free(array);
}
