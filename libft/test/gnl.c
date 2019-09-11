#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

int	main(){
	char *ligne = NULL;
	int	fd[5];
	int ret = 0;

	fd[0] = open("get_next_line.c", O_RDONLY);
	fd[1] = open("ft_strlcat.c", O_RDONLY);
	fd[2] = open("ft_strjoin.c", O_RDONLY);
	fd[3] = open("ft_putstr.c", O_RDONLY);
	fd[4] = open("libft.h", O_RDONLY);
	do
	{
		ret = get_next_line(fd[0], &ligne);
		printf("%s\n", ligne);
		ret = get_next_line(fd[1], &ligne);
		printf("%s\n", ligne);
		ret = get_next_line(fd[2], &ligne);
		printf("%s\n", ligne);
		ret = get_next_line(fd[3], &ligne);
		printf("%s\n", ligne);
		ret = get_next_line(fd[4], &ligne);
		printf("%s\n", ligne);
	} while (ret);
	
	while (get_next_line(0, &ligne)){
		printf("%s\n", ligne);
	}
	return 0;
}
