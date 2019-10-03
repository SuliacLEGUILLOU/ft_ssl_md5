/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:08:18 by sle-guil          #+#    #+#             */
/*   Updated: 2019/09/14 15:08:20 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "libft/libft.h"
#include "md5/md5.h"

static void		*st_get_func(const char *s)
{
	if (!ft_strcmp(s, "md5"))
		return (md5);
	return (NULL);
}

// TODO: Fix return value in case of null func and display proper error
static uint		st_print_error(uint code, void *func)
{
	ft_putstr("Standard commands:\nMessage Digest commands:\nmd5\nsha256");
	return (code);
}

static void		debug_option(void)
{
	t_options	*opt;
	t_list		*l;
	t_target	*t;

	opt = get_options();
	l = opt->target_list;
	while (l)
	{
		t = (t_target*)l->content;
		printf("is file: %d: %s\n", t->is_file, t->s);
		l = l->next;
	}
}

int				main(int ac, char **av)
{
	char        *(*cypher)(const char*);
	uint	    error_code;
	uint	    i;

	error_code = 0;
	i = 2;
	if (ac == 1)
		ft_putstr("usage: ft_ssl command [command opts] [command args]"); // TODO: This crash
	cypher = st_get_func(av[1]);
	while (i < ac && !error_code)
		error_code = set_options_from_arg(av[i++]);
	error_code = check_conflict();
	if (error_code || !cypher)
		return (st_print_error(error_code, cypher));
	debug_option();
    ft_putstr(cypher("Hello World"));
	return (0);
}
