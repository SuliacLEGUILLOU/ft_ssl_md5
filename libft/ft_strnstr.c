/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:31:15 by sle-guil          #+#    #+#             */
/*   Updated: 2014/11/17 15:47:47 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (*s2 == '\0')
		return ((char*)s1);
	i = 0;
	j = 0;
	while (s1[i] && s2[j] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] && i + j < n)
			j++;
		i++;
	}
	if (s2[j] != '\0')
		return (NULL);
	return ((char*)(s1 + i - 1));
}
