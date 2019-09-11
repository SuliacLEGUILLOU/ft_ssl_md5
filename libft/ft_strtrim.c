/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:44:10 by sle-guil          #+#    #+#             */
/*   Updated: 2015/11/21 13:09:40 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_search_begin(char const *s)
{
	size_t	i;

	i = 0;
	while (ft_isspace(s[i]) && s[i])
		i++;
	return (i);
}

static size_t	ft_search_end(char const *s)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (ft_isspace(s[i]) && i > 0 && s[i])
		i--;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	int		begin;
	size_t	size;
	char	*new;

	begin = ft_search_begin(s);
	size = ft_search_end(s) - begin + 1;
	if (!s[begin])
		new = ft_strdup("");
	else
		new = ft_strsub(s, begin, size);
	return (new);
}
