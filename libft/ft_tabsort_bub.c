/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabsort_bub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 21:11:52 by sle-guil          #+#    #+#             */
/*   Updated: 2015/01/22 22:15:47 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabsort_bub(int *tab, size_t i, size_t max, int (*f)(int, int))
{
	int		tmp;
	size_t	start;

	start = i;
	while (i < max)
	{
		if (f(tab[i], tab[i + 1]))
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			if (i > start)
				i -= 2;
		}
		i++;
	}
}
