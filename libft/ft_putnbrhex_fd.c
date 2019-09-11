/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 17:24:19 by sle-guil          #+#    #+#             */
/*   Updated: 2015/01/25 17:25:19 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrhex_fd(int c, int fd)
{
	if (c > 0)
		ft_putnbrhex_fd(c >> 4, fd);
	if (c == 0)
		write(fd, "0x", 2);
	else
		ft_puthex_fd(c, fd);
}
