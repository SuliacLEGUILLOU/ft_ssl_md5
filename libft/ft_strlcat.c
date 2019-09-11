/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:11:55 by sle-guil          #+#    #+#             */
/*   Updated: 2014/11/17 16:01:04 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_len;
	size_t dest_len;
	size_t out;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	out = src_len + dest_len;
	if (size <= dest_len)
		return (src_len + size);
	if (out < size)
		ft_strcat(dst, src);
	else
		ft_strncat(dst, src, src_len - out + size - 1);
	return (out);
}
