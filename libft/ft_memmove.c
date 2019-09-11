/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:28:57 by sle-guil          #+#    #+#             */
/*   Updated: 2014/11/17 17:00:08 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (!dst || !src || !len || dst == src)
		return (dst);
	d = (char*)dst;
	s = (const char*)src;
	i = -1;
	if (dst < src)
	{
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (dst);
}
