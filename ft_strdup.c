/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <josanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:24:55 by josanton          #+#    #+#             */
/*   Updated: 2022/03/07 12:45:31 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i])
		i++;
	dest = malloc (sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	dest[i] = '\0';
	while (--i >= 0)
		dest[i] = s[i];
	return (dest);
}
