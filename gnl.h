/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 03:13:16 by mkhaing           #+#    #+#             */
/*   Updated: 2024/03/11 19:00:17 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# ifndef GNL_BUFFER_SIZE
#  define GNL_BUFFER_SIZE 69
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

#endif
