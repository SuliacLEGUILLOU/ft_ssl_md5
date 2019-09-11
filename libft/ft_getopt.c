/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 13:12:32 by sle-guil          #+#    #+#             */
/*   Updated: 2015/11/21 13:12:34 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getopt(int ac, char **av)
{
	static int		line = 0;
	static char		*opt = NULL;

	while (line < ac)
	{
		if (!opt || *(av[line]) != '-' || !(*opt))
		{
			line++;
			opt = (line < ac) ? av[line] : NULL;
		}
		else if (opt++)
			return (*opt);
	}
	return (-1);
}
