#include <stdio.h>
#include <stdlib.h>

#include "libft/libft.h"
#include "md5/md5.h"

int main(int ac, char **av)
{
	ft_isalpha('c');
	md5("test");
	if(ac == 1)
		printf("usage: ft_ssl command [command opts] [command args]");
	return 0;
}
