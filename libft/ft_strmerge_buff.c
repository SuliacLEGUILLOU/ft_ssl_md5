/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmerge_buff.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:36:36 by sle-guil          #+#    #+#             */
/*   Updated: 2015/03/12 15:46:27 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmerge_buff(char *s, char const *buff)
{
	char	*new;

	new = (char*)malloc((ft_strlen(s) + ft_strlen(buff) + 1) * sizeof(char));
	if (new)
	{
		ft_strcpy(new, s);
		ft_strcat(new, buff);
		free(s);
	}
	return (new);
}
