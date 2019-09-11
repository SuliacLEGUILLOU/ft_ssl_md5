/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 18:43:44 by sle-guil          #+#    #+#             */
/*   Updated: 2015/06/09 13:26:06 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *src, char c)
{
	char	*new;
	int		n;

	n = ft_strlen_unt_c(src, c);
	if (n)
	{
		new = ft_strnew(sizeof(char) * (n + 1));
		ft_strncat(new, src, n);
	}
	else
		new = ft_strdup(src);
	return (new);
}
