/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salatiel <salatiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:21:43 by salatiel          #+#    #+#             */
/*   Updated: 2023/03/20 18:58:09 by salatiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_first_word(const char *str)
{
	int	start;
	int	end;

	start = 0;
	if (!str)
		return (NULL);
	while (str[start] == 32 || str[start] == 9 || str[start] == 13)
		start++;
	end = start;
	while (str[end] != 32 && str[end] != 9 && str[end] != 13 && str[end])
		end++;
	return (ft_substr(str, start, end - start));
}
