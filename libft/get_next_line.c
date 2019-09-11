/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 13:17:16 by sle-guil          #+#    #+#             */
/*   Updated: 2015/12/22 12:55:58 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_next_line(int const fd, char **line)
{
	static char	buffer[257][BUFF_SIZE + 1] = {{'\0'}};
	int			ret;
	char		*tmp;

	ret = 1;
	if (*line)
		free(*line);
	*line = ft_strdup(buffer[fd]);
	while (*line && !(tmp = ft_strchr(*line, '\n')) \
		&& fd >= 0 && (ret = read(fd, buffer[fd], BUFF_SIZE)) > 0)
	{
		buffer[fd][ret] = '\0';
		*line = ft_strmerge_buff(*line, buffer[fd]);
	}
	if (tmp && (*line) && fd >= 0)
	{
		ft_strcpy(buffer[fd], tmp + 1);
		*tmp = '\0';
	}
	else if (ret <= 0)
		buffer[fd][0] = '\0';
	if (!(*line) || fd < 0)
		ret = (-1);
	return ((ret > 0) ? 1 : ret);
}
