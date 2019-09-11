/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:26:41 by sle-guil          #+#    #+#             */
/*   Updated: 2014/11/17 15:35:57 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = dst;
	s = src;
	if (!dst || !src || !n)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)c == d[i])
			return ((void*)(d + i + 1));
		i++;
	}
	return (NULL);
}
