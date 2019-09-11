/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/30 14:52:01 by sle-guil          #+#    #+#             */
/*   Updated: 2015/01/23 00:17:42 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_count_c(char const *s, char c)
{
	int		n;

	n = (*s == c) ? 0 : 1;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1))
			n++;
		s++;
	}
	return (n);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**new;
	int		n;
	int		i;

	n = st_count_c(s, c) + 1;
	if (!(new = (char**)malloc(sizeof(char*) * n)))
		return (NULL);
	i = 0;
	while (*s == c && *s)
		s++;
	while (i + 1 < n && *s)
	{
		new[i++] = ft_strcdup(s, c);
		s = ft_strchr(s, c);
		while (s && *s == c && *s)
			s++;
	}
	new[i] = NULL;
	return (new);
}
