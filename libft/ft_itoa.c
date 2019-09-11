/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:32:43 by sle-guil          #+#    #+#             */
/*   Updated: 2015/11/21 13:13:14 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	st_swap(char *p1, char *p2)
{
	char	tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

char		*ft_itoa(int value)
{
	char	*result;
	char	*ptr;
	char	*ptr1;
	int		tmp_value;

	if (!(result = malloc(13 * sizeof(char))))
		return (NULL);
	ptr = result;
	ptr1 = result;
	while (1)
	{
		tmp_value = value;
		value /= 10;
		*ptr++ = "9876543210123456789"[9 + (tmp_value - value * 10)];
		if (!value)
			break ;
	}
	if (tmp_value < 0)
		*ptr++ = '-';
	*ptr-- = '\0';
	while (ptr1 < ptr)
		st_swap(ptr--, ptr1++);
	return result;
}
