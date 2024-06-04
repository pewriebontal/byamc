/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_multidi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:02:39 by mkhaing           #+#    #+#             */
/*   Updated: 2024/06/05 00:36:35 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>

void	ft_free_multidi(void **array, int dimensions)
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
		ft_free_multidi(array[i], dimensions - 1);
		i++;
	}
	free(array);
}
