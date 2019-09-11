/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:44:49 by sle-guil          #+#    #+#             */
/*   Updated: 2015/11/21 13:10:35 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rec(int nbr, int fd)
{
	if (nbr < 10)
		ft_putchar_fd('0' + nbr, fd);
	else
	{
		rec(nbr / 10, fd);
		rec(nbr % 10, fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = 0 - n;
		}
		rec(n, fd);
	}
}
