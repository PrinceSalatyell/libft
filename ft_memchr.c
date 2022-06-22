/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:22:51 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 23:22:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *) s;
	while (n)
	{
		if (*x == (unsigned char) c)
			return ((void *) x);
		n--;
		x++;
	}
	return (NULL);
}
