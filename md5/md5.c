//
// Created by s18 on 11/09/2019.
//
#include "internal.h"

char	*md5(char *src)
{
	t_data		state;
	t_data		*data;
	uint		data_len;

	data_len = get_data_len(src);
	state = init_state();
	data = init_data(src, data_len);
	return src;
}