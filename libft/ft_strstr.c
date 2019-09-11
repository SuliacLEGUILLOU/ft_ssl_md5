/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:33:20 by sle-guil          #+#    #+#             */
/*   Updated: 2015/02/12 18:31:32 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;

	if (*s2 == '\0')
		return ((char*)s1);
	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j])
			j++;
		i++;
	}
	if (s2[j] != '\0')
		return (NULL);
	return ((char*)(s1 + i - 1));
}
