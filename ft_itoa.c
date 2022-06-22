/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:57:40 by marvin            #+#    #+#             */
/*   Updated: 2022/02/20 01:57:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	num_of_digs(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	i = num_of_digs(n);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(res, "-2147483648"));
	res[i--] = 0;
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	if (n == 0)
		res[0] = '0';
	while (n)
	{
		res[i--] = (n % 10) + 48;
		n /= 10;
	}
	return (res);
}
