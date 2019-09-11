/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freesplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 18:13:19 by sle-guil          #+#    #+#             */
/*   Updated: 2015/04/14 16:53:15 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freesplit(char **table)
{
	char	**reff;

	reff = table;
	while (*reff)
		free(*reff++);
	free(table);
}
