/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 14:37:14 by sle-guil          #+#    #+#             */
/*   Updated: 2015/04/16 14:09:52 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_strlsplit(char const *s, int c)
{
	t_list	*new;
	char	*tmp;

	new = NULL;
	while (s && *s && *(s + 1))
	{
		if (*s != c)
		{
			tmp = ft_strcdup(s, c);
			ft_lstaddend(&new, ft_lstnew(tmp, ft_strlen(tmp) + 1));
			free(tmp);
		}
		s = ft_strchr(s, c);
		if (s && *s)
			s++;
	}
	return (new);
}
