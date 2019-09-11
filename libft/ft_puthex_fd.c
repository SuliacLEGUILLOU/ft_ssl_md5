/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/30 18:06:07 by sle-guil          #+#    #+#             */
/*   Updated: 2015/01/25 17:21:41 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(int c, int fd)
{
	int hex;

	hex = c & 0xf;
	if (hex < 10)
		ft_putchar_fd('0' + hex, fd);
	else
		ft_putchar_fd('a' + hex - 10, fd);
}
