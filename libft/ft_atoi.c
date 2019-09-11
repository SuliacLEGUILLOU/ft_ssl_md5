/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:30:46 by sle-guil          #+#    #+#             */
/*   Updated: 2014/11/14 14:06:47 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isjumped(int c)
{
	if (c == '\n' || c == '\v' || c == '\t' || c == '\r' || c == '\f' \
			|| c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(char const *str)
{
	int		nbr;
	int		signe;

	signe = 1;
	nbr = 0;
	while (ft_isjumped(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		signe = (*str == '-') ? (-1) : 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		nbr = (nbr * 10) + *str - '0';
		str++;
	}
	return (nbr * signe);
}
