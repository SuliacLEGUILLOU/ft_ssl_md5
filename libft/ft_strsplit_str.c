/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 19:02:21 by sle-guil          #+#    #+#             */
/*   Updated: 2015/11/21 13:09:04 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*st_initlst(char *s, char *patern)
{
	t_list	*lst;
	size_t	len;
	char	*tmp;
	char	*elem;

	lst = NULL;
	len = ft_strlen(patern);
	while ((tmp = ft_strstr(s, patern)) != patern)
	{
		if (tmp)
		{
			elem = ft_strnew((s - tmp + 1));
			ft_strncpy(elem, s, s - tmp);
		}
		else
			elem = ft_strdup(s);
		if (*elem)
			ft_lstaddend(&lst, ft_lstnew(&elem, sizeof(char *)));
		else
			free(elem);
		s = tmp + len + 1;
	}
	return (lst);
}

static size_t	st_count(t_list *lst)
{
	size_t	ret;

	ret = 0;
	while (lst)
	{
		ret++;
		lst = lst->next;
	}
	return (ret);
}

static void		st_dup(char **table, t_list *lst)
{
	while (lst)
	{
		*table = lst->content;
		table++;
		lst = lst->next;
	}
}

char			**ft_strsplit_str(char *s, char *patern)
{
	char	**new;
	t_list	*lst;

	lst = st_initlst(s, patern);
	new = malloc(sizeof(char *) * (st_count(lst) + 1));
	st_dup(new, lst);
	while (lst)
	{
		free(lst);
		lst = lst->next;
	}
	return (new);
}
