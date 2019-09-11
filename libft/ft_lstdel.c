/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:34:31 by sle-guil          #+#    #+#             */
/*   Updated: 2014/11/14 19:06:19 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (!alst || !(*alst) || !del)
		return ;
	while (*alst)
	{
		tmp = (*alst)->next;
		ft_lstdel(alst, del);
		*alst = tmp;
	}
}
