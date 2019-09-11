/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:35:39 by sle-guil          #+#    #+#             */
/*   Updated: 2014/12/17 15:36:02 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmerge(char *s1, char *s2)
{
	char	*new;

	new = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (new)
	{
		ft_strcpy(new, s1);
		ft_strcat(new, s2);
		free(s1);
		free(s2);
	}
	return (new);
}
