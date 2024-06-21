/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 02:58:57 by klinn             #+#    #+#             */
/*   Updated: 2024/06/21 19:12:27 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>

int	is_delim(char c, const char *delim)
{
	while (*delim)
	{
		if (c == *delim++)
			return (1);
	}
	return (0);
}

char	*find_next_token(char *s, const char *delim)
{
	while (*s && is_delim(*s, delim))
		s++;
	if (*s == 0)
		return (NULL);
	return (s);
}

char	*find_end_of_token(char *s, const char *delim)
{
	while (*s && !is_delim(*s, delim))
		s++;
	return (s);
}

char	*ft_strtok(char *s, const char *delim)
{
	static char	*last;
	char		*tok;

	if (s == NULL)
		s = last;
	if (s == NULL)
		return (NULL);
	s = find_next_token(s, delim);
	if (s == NULL)
	{
		last = NULL;
		return (NULL);
	}
	tok = s;
	s = find_end_of_token(s, delim);
	if (*s)
	{
		*s++ = 0;
		last = s;
	}
	else
		last = NULL;
	return (tok);
}
