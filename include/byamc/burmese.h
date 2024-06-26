/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burmese.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:00:20 by mkhaing           #+#    #+#             */
/*   Updated: 2024/04/10 04:19:14 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BURMESE_H
# define _BURMESE_H

# include <byamc/byamc.h>
# include <byamc/ft_printf.h>

# define ဂွင်းစ (
# define ဂွင်းပိတ် )

# define အကယ်၍ if
# define ဒါမှမဟုတ် else

# define တူညီရင် ==
# define မတူညီရင် !=

# define မဟုတ်မချင်းဖြုတ် while
# define မင်းတော်လိုက်တော့ break
# define ဆက်လုပ် continue

# define ။ ;
# define ကိုထားလိုက် =

void *နေရာဦး(size_t size);
void ရှင်းပစ်(void *ptr);
int အာချောင်စမ်း(const char *fmt, ...);

#endif // _BURMESE_H