/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 06:34:56 by marvin            #+#    #+#             */
/*   Updated: 2022/02/26 06:34:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int			n;
	const void	*buff;
	char		nl;

	if (!s)
		return ;
	n = ft_strlen(s);
	buff = s;
	write(fd, buff, n);
	nl = '\n';
	buff = &nl;
	write(fd, buff, 1);
}
