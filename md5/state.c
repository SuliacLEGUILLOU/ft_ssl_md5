//
// Created by s18 on 12/09/2019.
//

#include "internal.h"

t_data		init_state()
{
	t_data		s;

	s.a = 0x67452301;
	s.b = 0xefcdab89;
	s.c = 0x98badcfe;
	s.d = 0x10325476;
	return s;
}

uint32_t	state_f(t_data s)
{
	return ((s.b & s.c) | (~s.b & s.d));
}

uint32_t	state_g(t_data s)
{
	return ((s.b & s.d) | (s.c & ~s.d));
}

uint32_t	state_h(t_data s)
{
	return (s.b ^ s.c ^ s.d);
}

uint32_t	state_i(t_data s)
{
	return (s.c ^ (s.b | ~s.d));
}