/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 06:42:29 by marvin            #+#    #+#             */
/*   Updated: 2022/03/09 06:42:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_gnl(const char *str)
{
	unsigned int	l;

	l = 0;
	while (str && *str)
	{
		if (*str == 10)
			return (l + 1);
		l++;
		str++;
	}
	return (l);
}

static char	*ft_join(char *line, char *save, int size_save, int k)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	temp = malloc(sizeof(char) * ft_strlen_gnl(line) + size_save + 1);
	if (!temp)
		return (NULL);
	while (line && line[i])
		temp[j++] = line[i++];
	i = 0;
	while (save && save[i])
	{
		if (i < size_save)
			temp[j++] = save[i];
		else
			save[k++] = save[i];
		save[i++] = 0;
	}
	temp[j] = 0;
	if (line)
		free(line);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	save[BUFFER_SIZE + 1];
	char		*line;
	int			bytes_read;

	line = NULL;
	bytes_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		if (!(*save))
			bytes_read = read(fd, save, BUFFER_SIZE);
		if (bytes_read > 0)
			line = ft_join(line, save, ft_strlen_gnl(save), 0);
		if (bytes_read <= 0 || (line && line[ft_strlen_gnl(line) - 1] == 10))
			break ;
	}
	return (line);
}
