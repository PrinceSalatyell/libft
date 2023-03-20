/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salatiel <salatiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:51:05 by salatiel          #+#    #+#             */
/*   Updated: 2023/03/20 18:09:30 by salatiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_last_word(const char *str)
{
	int	start;
	int	end;

	end = ft_strlen(str) - 1;
	while (str[end] == 32 || str[end] == 13 || str[end] == 9)
		end--;
	start = end;
	while (start > 0 && str[start - 1] != 32 && str[start - 1] != 13 \
	&& str[start - 1] != 9)
		start--;
	return (ft_substr(str, start, end - start + 1));
}
