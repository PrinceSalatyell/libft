/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 05:05:26 by marvin            #+#    #+#             */
/*   Updated: 2022/02/20 05:05:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_of_str(char const *str, char c)
{
	int				i;
	int				index;

	str = ft_strtrim(str, (char const *)&c);
	if (!str || *str == 0)
	{
		free ((void *)str);
		return (0);
	}
	i = 1;
	index = 0;
	while (str[index])
	{
		if (str[index] == c)
		{
			i++;
			while (str[index] == c)
				index++;
		}
		else
			index++;
	}
	free((void *)str);
	return (i);
}

static int	ft_size_of_single_str(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	int			i;
	int			j;
	int			size;
	int			x;

	if (!s)
		return (0);
	j = 0;
	i = 0;
	x = ft_num_of_str(s, c) + 1;
	res = malloc(sizeof(char *) * (x));
	if (!res)
		return (NULL);
	while (j < x - 1)
	{
		while (s[i] == c && s[i])
			i++;
		size = ft_size_of_single_str(s + i, c);
		res[j] = ft_substr((char *)s, i, size);
		i += size;
		j++;
	}
	res[j] = NULL;
	return (res);
}
