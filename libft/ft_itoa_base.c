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

static char	*st_add_end(char *begin, int value, int base)
{
	if (base == 10 && value < 0)
		*ptr++ = '-';
	else if (base == 16)
	{
		*ptr++ = 'x';
		*ptr++ = '0';
	}
	else if (base == 8)
	{
		*ptr++ = 'o';
		*ptr++ = '0';
	}
	else if (base == 2)
	{
		*ptr++ = 'b';
		*ptr++ = '0';
	}
	ptr-- = '\0';
	return ptr;
}

char		*ft_itoa_base(int value, int base)
{
	char	*result;
	char	*ptr;
	char	*ptr1;
	int		tmp_value;

	if (!(result = malloc(35 * sizeof(char))))
		return (NULL);
	ptr = result;
	ptr1 = result;
	while (1)
	{
		tmp_value = value;
		value /= base;
		*ptr++ = "FEDCBA9876543210123456789ABCDE"[15 + (tmp_value - value * base)];
		if (!value)
			break ;
	}
    ptr = st_add_end(ptr, tmp_value, base);
	while (ptr1 < ptr)
		st_swap(ptr--, ptr1++);
	return result;
}
