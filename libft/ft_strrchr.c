/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:32:22 by sle-guil          #+#    #+#             */
/*   Updated: 2014/11/17 15:45:32 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*occurence;

	occurence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			occurence = s;
		s++;
	}
	if ((char)c == *s)
		occurence = s;
	return ((char*)occurence);
}
