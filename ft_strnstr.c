/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:50:45 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 12:50:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			k;
	const char		*found;

	if (needle[0] == 0)
		return ((char *) haystack);
	j = 0;
	while (haystack[j] && j < len)
	{
		i = 0;
		if (haystack[j] == needle[i])
		{
			found = haystack + j;
			k = j;
			while ((haystack[k++] == needle[i] && k <= len) || needle[i] == 0)
			{
				if (needle[i] == 0)
					return ((char *) found);
				i++;
			}
		}
		j++;
	}
	return (NULL);
}
