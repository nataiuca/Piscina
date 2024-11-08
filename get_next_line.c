/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:40:52 by natferna          #+#    #+#             */
/*   Updated: 2024/11/08 14:59:52 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_line(char **remainder)
{
	char	*line;
	char	*temp;
	size_t	len;

	if (!(*remainder))
		return (NULL);
	temp = ft_strchr(*remainder, '\n');
	if (temp)
	{
		len = temp - *remainder + 1;
		line = ft_strndup(*remainder, len);
		temp = ft_strdup(temp + 1);
		free(*remainder);
		*remainder = temp;
		if (**remainder == '\0')
		{
			free(*remainder);
			*remainder = NULL;
		}
		return (line);
	}
	line = ft_strdup(*remainder);
	free(*remainder);
	*remainder = NULL;
	return (line);
}

static char	*append_buffer(char *remainder, char *buf)
{
	char	*temp;

	if (!remainder)
		return (ft_strdup(buf));
	temp = ft_strjoin(remainder, buf);
	free(remainder);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*buf;
	int			read_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	read_bytes = read(fd, buf, BUFFER_SIZE);
	while (read_bytes > 0)
	{
		buf[read_bytes] = '\0';
		remainder = append_buffer(remainder, buf);
		if (ft_strchr(remainder, '\n'))
			break ;
		read_bytes = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	if (read_bytes == -1)
	{
		free(remainder);
		remainder = NULL;
		return (NULL);
	}
	if (read_bytes == 0 && !remainder)
		return (NULL);
	return (get_line(&remainder));
}
