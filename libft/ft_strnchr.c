/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:25:10 by sle-guil          #+#    #+#             */
/*   Updated: 2014/11/11 12:47:49 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *str, char c, size_t nbr)
{
	while (*str && nbr)
	{
		if (*str == c)
			return ((char*)str);
		str++;
		nbr--;
	}
	return (NULL);
}
