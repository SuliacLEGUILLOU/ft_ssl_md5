/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:21:25 by sle-guil          #+#    #+#             */
/*   Updated: 2015/11/21 13:07:32 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new)
	{
		while (s[i])
		{
			new[i] = f(i, s[i]);
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
