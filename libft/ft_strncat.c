/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:23:52 by sle-guil          #+#    #+#             */
/*   Updated: 2015/11/21 13:08:02 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*tmp;

	tmp = s1;
	while (*s1)
		s1++;
	while (*s2 && n)
	{
		*s1 = *s2;
		s1++;
		s2++;
		n--;
	}
	ft_bzero(s1, n + 1);
	return (tmp);
}
