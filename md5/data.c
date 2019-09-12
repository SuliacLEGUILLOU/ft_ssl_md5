//
// Created by s18 on 12/09/2019.
//

#include "internal.h"

uint		get_data_len(const char *src)
{
	uint	len;

	len = ft_strlen(src);
	return len + (64 - len % 64);
}

void		*init_data(char *src, uint len)
{
	unsigned char	*data;

	data = malloc(len);
	ft_bzero(data, len);
	ft_memcpy(data, src, ft_strlen(src));
	data[ft_strlen(src)] = (unsigned char)0x80;
	return data;
}