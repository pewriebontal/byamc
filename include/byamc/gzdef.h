/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gzdef.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:00:20 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/15 04:02:29 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GZDEF_H
# define GZDEF_H

# include <byamc/byamc.h>
# include <byamc/ft_printf.h>

# define VIBING 1
# define NOT_VIBING 0

# define CHILLING 1
# define NOT_CHILLING 0

// EXIT STATUS

# define UNDERSTOOD_THE_ASSIGNMENT 0
# define BUSTED 1

// TRUE HORROR

# define period ;
# define yikes break
# define let_him_cook continue
# define adios return ;
# define be =
# define not !
# define non !
# define vibecheck if

void	*chope(size_t size);
void	yeet(void **ptr);
int		spill_the_tea(const char *fmt, ...);

#endif /* GZDEF_H */