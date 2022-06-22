/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:51:30 by marvin            #+#    #+#             */
/*   Updated: 2022/02/18 17:51:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (size < len)
		len = size;
	if ((size_t)start >= ft_strlen(s))
		len = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (len)
	{
		res[i] = s[start];
		start++;
		i++;
		len--;
	}
	res[i] = 0;
	return (res);
}
