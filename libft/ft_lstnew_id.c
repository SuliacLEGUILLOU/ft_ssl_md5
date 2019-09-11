/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 13:12:04 by sle-guil          #+#    #+#             */
/*   Updated: 2015/11/21 13:12:11 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_id(void *point)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = point;
	new->content_size = sizeof(void*);
	new->next = NULL;
	return (NULL);
}
