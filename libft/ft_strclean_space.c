#include "libft.h"

void ft_strclean_space(char *str) {
	int		pos;
	int		offset;

	pos = 0;
	offset = 1;
	while (str[pos])
	{
		if (ft_isspace(str[pos]) && (ft_isspace(str[pos + 1]) || pos == 0))
			str[pos] = str[pos + offset++];
		else
			str++;
	}
}
