/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 06:40:21 by marvin            #+#    #+#             */
/*   Updated: 2022/02/26 06:40:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static char	*_itoa(int n, char *res)
{
	int		i;

	i = num_of_digs(n);
	res[i--] = 0;
	if (n < 0)
	{
		res[0] = '-';
		if (n == -2147483648)
		{
			res[1] = '2';
			n = 147483648;
		}
		else
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

void	ft_putnbr_fd(int n, int fd)
{
	int		s;
	char	buff[12];

	_itoa(n, buff);
	s = ft_strlen(buff);
	write(fd, buff, s);
}
