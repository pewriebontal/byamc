/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:13:46 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/31 00:40:54 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <kyamc/kyamc.h>
#include <kyamc/gzdef.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	yeet((void **)&lst);
}
