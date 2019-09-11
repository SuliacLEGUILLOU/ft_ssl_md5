
#include "libft.h"

int main(int ac, char **av)
{
	char	opt = 0;

	while (opt >= 0){
		opt = ft_getopt(ac, av);
		ft_putchar(opt);
	}
	ft_putchar('\n');
	return (0);
}
