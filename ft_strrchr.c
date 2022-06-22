/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <josanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:02:12 by josanton          #+#    #+#             */
/*   Updated: 2022/03/07 15:06:00 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = NULL;
	if ((unsigned char)c == 0)
	{
		while (*s)
			s++;
		return ((char *) s);
	}
	while (*s)
	{
		if (*s == (unsigned char)c)
			res = (char *) s;
		s++;
	}
	return (res);
}
