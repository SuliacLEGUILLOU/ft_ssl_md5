/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:33:54 by sle-guil          #+#    #+#             */
/*   Updated: 2015/02/25 13:19:44 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** to test : getting the last caracter of s.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!(len + start > (unsigned int)ft_strlen(s)) \
			|| (new = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	s += start;
	while (i < len && s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
