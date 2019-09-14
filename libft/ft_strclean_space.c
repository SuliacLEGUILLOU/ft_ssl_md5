/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclean_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:04:54 by sle-guil          #+#    #+#             */
/*   Updated: 2019/09/14 15:05:00 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclean_space(char *str)
{
	int		pos;
	int		offset;

	pos = 0;
	offset = 1;
	while (str[pos])
	{
		if (ft_isspace(str[pos]) && (ft_isspace(str[pos + 1]) || pos == 0))
			str[pos] = str[pos + offset++];
		else
			str++;
	}
}
