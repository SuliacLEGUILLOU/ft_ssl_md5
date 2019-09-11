#include <stdio.h>
#include <stdlib.h>

#include "libft/libft.h"
#include "md5/md5.h"

static void		*st_get_func(const char *s)
{
	if(!ft_strcmp(s, "md5"))
		return md5;
	return NULL;
}

static uint		st_print_error(uint code, void *func)
{
	ft_putstr("Standard commands:\nMessage Digest commands:\nmd5\nsha256");
	return code;
}

int main(int ac, char **av)
{
	char	*(*func)(const char *s);
	uint	error_code;
	uint	i;

	error_code = 0;
	i = 2;
	if(ac == 1)
		ft_putstr("usage: ft_ssl command [command opts] [command args]");
	func = st_get_func(av[1]);
	while (i < ac && !error_code)
		error_code = set_options_from_arg(av[i++]);
	error_code = check_conflict();
	if(error_code || !func)
		return st_print_error(error_code, func);
	ft_putstr(func("Hello"));
	return 0;
}
