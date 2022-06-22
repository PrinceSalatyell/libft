/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:43:05 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 16:43:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len;
	size_t		i;
	size_t		j;

	len = ft_strlen(dst);
	if (size <= len)
		return (size + ft_strlen(src));
	i = 0;
	j = len;
	while (src[i] && j + 1 < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return (ft_strlen(src) + len);
}
