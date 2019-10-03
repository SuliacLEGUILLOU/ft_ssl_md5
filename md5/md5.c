//
// Created by s18 on 11/09/2019.
//
#include "internal.h"

static t_data	st_iterate(t_data state, const uint8_t *chunk)
{
	uint8_t		i;
	t_intern	internal;

	i = 0;
	while(i < 64)
	{
		if (i <= 15)
		{
			internal.f = state_f(state);
			internal.g = i;
		}
		else if (i <= 31)
		{
			internal.f = state_g(state);
			internal.g = (5 * i + 1) % 16;
		}
		else if (i <= 47)
		{
			internal.f = state_h(state);
			internal.g = (3 * i + 5) % 16;
		}
		else if (i <= 63)
		{
			internal.f = state_i(state);
			internal.g = (7 * i) % 16;
		}
		internal.tmp = state.d;
		state.d = state.c;
		state.c = state.b;
		state.b += (state.a + internal.f + md5_constant(i) + chunk[i]) << md5_rotation(i);
		state.a = internal.tmp;
		i++;
	}
	return state;
}

static char 	*st_to_string(const uint8_t *data)
{
	char		*ret;
	uint8_t		i;
	char 		base;

	ret = malloc(33);
	ft_bzero(ret, 33);
	i = 0;
	while (i < 32)
	{
		base = ((data[i / 2]) & ((i % 2) ? 0x0f : 0xf0)) >> (((i + 1) % 2) * 4);
		if(base >= 10)
			ret[i] = 'a' + base - 10;
		else
			ret[i] = '0' + base;
		i++;
	}
	return ret;
}

char	*md5(char *src)
{
	t_data		state, tmp;
	uint8_t		*data;
	uint		data_len;

	data_len = get_data_len(src);
	state = init_state();
	data = init_data(src, data_len);
	data_len /= 64;
	while (data_len > 0)
	{
		tmp = st_iterate(state, data);
		state.a += tmp.a;
		state.b += tmp.b;
		state.c += tmp.c;
		state.d += tmp.d;
		data += 64;
		data_len--;
	}
	return st_to_string(&state);
}