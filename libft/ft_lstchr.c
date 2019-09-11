/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 17:13:57 by sle-guil          #+#    #+#             */
/*   Updated: 2015/01/25 14:45:40 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstchr(t_list *lst, int (*f)(void*, int))
{
	while (lst && !f(lst->content, lst->content_size))
		lst = lst->next;
	return (lst);
}
