/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_unt_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:42:32 by sle-guil          #+#    #+#             */
/*   Updated: 2014/11/11 12:07:56 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_unt_c(char const *str, char c)
{
	int n;

	n = 0;
	while (str[n])
	{
		if (str[n] == c)
			return (n);
		n++;
	}
	return (0);
}
