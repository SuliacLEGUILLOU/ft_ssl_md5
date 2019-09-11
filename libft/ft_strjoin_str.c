/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 18:33:16 by sle-guil          #+#    #+#             */
/*   Updated: 2015/04/09 18:57:44 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_getlen(char const **table, int patern_len)
{
	int		ret;
	int		overflow;
	int		i;

	i = 0;
	ret = 1 - patern_len;
	while (table[i])
	{
		overflow = ret;
		ret += strlen(table[i]) + patern_len;
		i++;
		if (overflow > ret)
			return (-1);
	}
	return (ret);
}

char		*ft_strjoin_str(char const **table, char const *patern)
{
	char	*new;
	int		i;

	i = st_getlen(table, ft_strlen(patern));
	if (i < 0)
		return (NULL);
	if ((new = malloc(sizeof(char) * i)))
	{
		i = 0;
		*new = '\0';
		while (table[i])
		{
			ft_strcat(new, table[i++]);
			if (table[i])
				ft_strcat(new, patern);
		}
	}
	return (new);
}
