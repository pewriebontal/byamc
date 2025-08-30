/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 03:13:16 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/31 00:41:30 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# include <byamc/byamc.h>
# include <byamc/gzdef.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

#endif /* GNL_H */
