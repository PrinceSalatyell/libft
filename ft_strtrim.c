/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:15:39 by marvin            #+#    #+#             */
/*   Updated: 2022/02/18 22:15:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	forward(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	start;

	start = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				start++;
				break ;
			}
			j++;
			if (set[j] == 0)
				return (start);
		}
		i++;
	}
	return (start);
}

static int	backwards(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	end;

	end = ft_strlen(s1);
	i = end;
	while (s1[--i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j++])
			{
				end--;
				break ;
			}
			if (set[j] == 0)
				return (end);
		}
		if (i <= 0)
			break ;
	}
	if (end <= 0)
		return (ft_strlen(s1));
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;

	if (!s1 || !set)
		return (0);
	start = forward(s1, set);
	end = backwards(s1, set);
	res = malloc(((end - start) * sizeof(char)) + 1);
	if (!res)
		return (NULL);
	ft_strncpy(res, (char *)(s1 + start), end - start);
	return (res);
}
