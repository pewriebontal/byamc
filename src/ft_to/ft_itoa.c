/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:33:42 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/30 16:54:04 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <byamc/byamc.h>

static int	ft_numlen(long n, int is_unsigned)
{
	int	len;

	len = 0;
	if (!is_unsigned && n < 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_numlen(n, 0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n > 0)
	{
		i--;
		str[i] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		i;

	i = ft_numlen(n, 1);
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	while (n != 0)
	{
		str[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (str);
}
