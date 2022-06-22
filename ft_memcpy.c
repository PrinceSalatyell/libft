/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:26:42 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 17:26:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest2 = (char *) dest;
	src2 = (char *) src;
	while (n)
	{
		*dest2 = *src2;
		src2++;
		dest2++;
		n--;
	}
	return (dest);
}
